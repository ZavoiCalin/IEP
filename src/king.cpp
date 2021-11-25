#include <iostream>
#include "king.hpp"


King& King::operator=( const King& refKing ){
    if(this != &refKing) {//without this verification there could be a self assignment
        delete servant;
        servant=new Human(*refKing.servant);
        return *this;
    }

    return *this;
}