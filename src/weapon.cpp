#include <iostream>
#include "human.hpp"
#include "weapon.hpp"

Human& theHuman(){
        static Human human(500, "The Human"); //de vf
        return human;
    }
    
        Weapon::Weapon(){
            damage=theHuman().dmg;//using the method it will never use an unitialized Human object
            std::cout<<"Weapon durability "<<damage<<"\n";
        }

    Weapon::~Weapon(){
        std::cout<<"Weapon destroyed\n";
    }

    //~Weapon()=delete;
    

