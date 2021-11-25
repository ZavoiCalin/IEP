#include <iostream>
#include "human.hpp"
#include "weapon.hpp"
#include "king.hpp"


int main(){
    Human h1(333, "Primul");
    Human h2;
    Human h3(h1);//copy constructor

    h2.printStats();

    h2=h1;//copy assignment operator

    h1.printStats();
    h2.printStats();
    h3.printStats();

    Weapon w1;

    King k1,k2;

    //k1.buy(); inaccessible because buy() method is private
    
    //k1=k1; self assignment
    k1=k2;
    //k1=k2;

    return 0;

    //deconstructors called multiple times
}