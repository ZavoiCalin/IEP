cmake_minimum_required( VERSION 3.2 ) 
project(Game) 

set( CMAKE_CXX_STANDARD 14 ) 
set( CMAKE_CXX_STANDARD_REQUIRED ON ) 
set( CMAKE_CXX_EXTENSIONS OFF ) 

add_executable(game main.cpp)
target_link_libraries(game PRIVATE Human Weapon King)

add_library(Human human.hpp human.cpp)
target_include_directories( Human PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" ) 

add_library(Weapon weapon.hpp weapon.cpp)
target_include_directories( Weapon PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" )

add_library(King king.hpp king.cpp)
target_include_directories( King PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}" ) 

