# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/calin/Desktop/IEP/Game/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/calin/Desktop/IEP/Game/build

# Include any dependencies generated for this target.
include CMakeFiles/King.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/King.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/King.dir/flags.make

CMakeFiles/King.dir/king.cpp.o: CMakeFiles/King.dir/flags.make
CMakeFiles/King.dir/king.cpp.o: /home/calin/Desktop/IEP/Game/src/king.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/calin/Desktop/IEP/Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/King.dir/king.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/King.dir/king.cpp.o -c /home/calin/Desktop/IEP/Game/src/king.cpp

CMakeFiles/King.dir/king.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/King.dir/king.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/calin/Desktop/IEP/Game/src/king.cpp > CMakeFiles/King.dir/king.cpp.i

CMakeFiles/King.dir/king.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/King.dir/king.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/calin/Desktop/IEP/Game/src/king.cpp -o CMakeFiles/King.dir/king.cpp.s

CMakeFiles/King.dir/king.cpp.o.requires:

.PHONY : CMakeFiles/King.dir/king.cpp.o.requires

CMakeFiles/King.dir/king.cpp.o.provides: CMakeFiles/King.dir/king.cpp.o.requires
	$(MAKE) -f CMakeFiles/King.dir/build.make CMakeFiles/King.dir/king.cpp.o.provides.build
.PHONY : CMakeFiles/King.dir/king.cpp.o.provides

CMakeFiles/King.dir/king.cpp.o.provides.build: CMakeFiles/King.dir/king.cpp.o


# Object files for target King
King_OBJECTS = \
"CMakeFiles/King.dir/king.cpp.o"

# External object files for target King
King_EXTERNAL_OBJECTS =

libKing.a: CMakeFiles/King.dir/king.cpp.o
libKing.a: CMakeFiles/King.dir/build.make
libKing.a: CMakeFiles/King.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/calin/Desktop/IEP/Game/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libKing.a"
	$(CMAKE_COMMAND) -P CMakeFiles/King.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/King.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/King.dir/build: libKing.a

.PHONY : CMakeFiles/King.dir/build

CMakeFiles/King.dir/requires: CMakeFiles/King.dir/king.cpp.o.requires

.PHONY : CMakeFiles/King.dir/requires

CMakeFiles/King.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/King.dir/cmake_clean.cmake
.PHONY : CMakeFiles/King.dir/clean

CMakeFiles/King.dir/depend:
	cd /home/calin/Desktop/IEP/Game/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/calin/Desktop/IEP/Game/src /home/calin/Desktop/IEP/Game/src /home/calin/Desktop/IEP/Game/build /home/calin/Desktop/IEP/Game/build /home/calin/Desktop/IEP/Game/build/CMakeFiles/King.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/King.dir/depend
