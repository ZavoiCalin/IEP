#include <iostream>

class Human{
    private:
    unsigned health;
    std::string name;

    public:
    Human() 
    : health(100), 
    name("Default")
    {
        std::cout<<"Default Human\n";
    }

    //Human()=delete;

    Human(unsigned h, std::string n) 
    : health(h),
    name(n)
    {}

     Human(unsigned h, std::string n) =delete;

    ~Human(){
        std::cout<<"Human destroyed\n";
    }
};

int main(){
    Human h1(333, "Primul");
    
    return 0;
}