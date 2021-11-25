#include <iostream>
#include "human.hpp"


    void Human::buy(){
        std::cout<<this->getName()<<" has bought something\n";
    }

   

    Human::Human() 
    : health(100), 
    name("Default")
    {
        std::cout<<"Default Human\n";
    };

    Human::Human(unsigned int h, std::string n) 
    : health(h),
    name(n) //initialization list
    {
        std::cout<<"Human with "<<h<<" health and "<<n<<" name\n";
    }

    unsigned int Human::getHealth(){
        return health;
    }

    std::string Human::getName(){
        return name;
    }

    void Human::printStats(){
        std::cout<<this->getHealth()<<" "<<this->getName()<<"\n";
    }

    Human::Human( const Human &refHuman): health(refHuman.health), 
    name(refHuman.name) {
        std::cout<<"Used copy constructor for Human\n";
    } 

    Human::~Human(){
        std::cout<<"Human destroyed\n";
    }

    Human& Human::operator=( const Human& refHuman ){
         if(this != &refHuman) {//without this verification there could be a self assignment
            health=refHuman.health;
            name=refHuman.name;
            dmg=refHuman.dmg;
        }
        return *this;
    }

    //~Human()=delete;




    




    

