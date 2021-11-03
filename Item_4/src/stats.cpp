#include <iostream>

class Human{
    private:
    unsigned health;
    std::string name;

    public:

    //Human()=delete; 

    Human() 
    : health(100), 
    name("Default")
    {
        std::cout<<"Default Human\n";
    }

    Human(unsigned h, std::string n) 
    : health(h),
    name(n) //lista de initializare
    {
        std::cout<<"Human with "<<h<<" health and "<<n<<" name\n";
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
    public:
        
};

int main(){
    Human h1(333, "Primul");
    Human h2;
    
    return 0;
}