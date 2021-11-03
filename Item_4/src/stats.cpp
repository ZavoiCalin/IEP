#include <iostream>

class Human{

    private:
    unsigned health;
    std::string name;

    void buy(){
        std::cout<<this->getName()<<" has bought something\n";
    }

    public:

    unsigned dmg=50;//adding const deletes copy constructor and copy assignment operator

    //Human()=delete; 

    Human() 
    : health(100), 
    name("Default")
    {
        std::cout<<"Default Human\n";
    }

    Human(unsigned h, std::string n) 
    : health(h),
    name(n) //initialization list
    {
        std::cout<<"Human with "<<h<<" health and "<<n<<" name\n";
    }

    unsigned getHealth(){
        return health;
    }

    std::string getName(){
        return name;
    }

    void printStats(){
        std::cout<<this->getHealth()<<" "<<this->getName()<<"\n";
    }

    ~Human(){
        std::cout<<"Human destroyed\n";
    }

    //~Human()=delete;

};


     Human& theHuman(){
        static Human human;
        return human;
    }

class Weapon{
    private:
        unsigned damage;

    public:
        Weapon(){
            damage=theHuman().dmg;//using the method it will never use an unitialized Human object
            std::cout<<"Weapon durability "<<damage<<"\n";
        }

    ~Weapon(){
        std::cout<<"Weapon destroyed\n";
    }

    //~Weapon()=delete;
    
};

class King : private Human {
    
};

    

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