#include <iostream>
#include "human.hpp"
#include "weapon.hpp"
#include "king.hpp"
#include <memory>
#include <mutex>
#include <thread>


std::mutex m;

void mutexPrintStats(Human h){
    m.lock();
    std::cout<<"Mutex locked for printing stats\n";
    h.printStats();
    m.unlock();
    std::cout<<"Mutex unlocked\n";
}

void mutexPrintKingName(King k){
    m.lock();
    std::cout<<"Mutex locked for printing king name\n";
    std::cout<<k.getName()<<"\n";
    m.unlock();
    std::cout<<"Mutex unlocked\n";
}

void nimic(){}

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


  
  
    Human s1(110, "Aux1"),s2(120, "Aux2"),s3(130, "Aux3");
    King k1;
    //std::cout<<k1.dmg<<"\n";
    King k2,k3;

    k1.dmg=800;
    k3=k2=k1;
    std::cout<<k2.dmg<<"\n";
    std::cout<<k3.dmg<<"\n";

    /*Human *aux1, *aux2, *aux3;

    aux1=&s1;
    aux2=&s2;
    aux3=&s3;

    King k1(aux1),k2(aux2),k3(aux3);

    //k1.buy(); inaccessible because buy() method is private
    
    //k1=k1; self assignments
    //k1=k2;
    //k1=k2;


    k1=k2;

    //s1.printStats();
    //s2.printStats();
    //s3.printStats();


    King k4(k1), k5(k3);

    k4.dmg=800;
    k5=k4;

    std::cout<<k5.dmg;*/


    std::string l1="Shared land";

    std::shared_ptr <std::string> pl1(&l1);
    std::shared_ptr <std::string> pl2=pl1;


    King kcl1("c1", l1);
    King kcl2("c2", l1);

    //kcl1.castle=kcl2.castle; //can not assign unique pointers

    std::cout<<pl1.get()<<"\n";
    std::cout<<pl2.get()<<"\n";

    std::cout<<kcl1.land.get()<<"\n";
    std::cout<<kcl2.land.get()<<"\n";

    //std::thread t_human(mutexPrintStats);
    //std::thread t_king(mutexPrintKingName);

    //t_human.join();
    //t_king.join();

    std::cout<<"Ambele thread-uri au terminat excutia\n";

    return 0;

    //deconstructors called multiple times
}