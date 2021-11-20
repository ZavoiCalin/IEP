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

    King k1;

    //k1.buy(); not accessible because of private inheritance
    
    return 0;

    //deconstructors called multiple times
}