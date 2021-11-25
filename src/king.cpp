#include <iostream>
#include "king.hpp"


King& King::operator=( const King& refKing ){
    if(this != &refKing) {//without this verification there could be a self assignment
        //delete servant;
        //servant=new Human(*refKing.servant);
        Human::operator=(refKing);
        power=refKing.power;
        return *this;
    }

    return *this;
}

King::King(Human *s){
    servant=s;   
}

Human King::getServant(){
    return *servant;
}

King::King( const King& refKing ): Human(refKing){
    std::cout<<"Used copy constructor from King\n";
}

King::King(): Human(){
    std::cout<<"Default King\n";
}