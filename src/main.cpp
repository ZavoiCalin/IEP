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


  
  

    Human aux1(110, "Aux1"), aux2(120, "Aux2"), aux3(130, "Aux3");

    King k1(aux1),k2(aux2),k3(aux3);

    //k1.buy(); inaccessible because buy() method is private
    
    //k1=k1; self assignments
    //k1=k2;
    //k1=k2;


    k1=k2=k3;

    aux1=k1.getServant();

    aux1.printStats();
    aux2.printStats();
    aux3.printStats();

    return 0;

    //deconstructors called multiple times
}