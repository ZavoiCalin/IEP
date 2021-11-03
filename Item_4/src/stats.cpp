#include <iostream>

class Human{
    private:
    unsigned health;

    public:
    Human() : health(100) {}
    Human(unsigned h) : health(h){
        
    }
};

int main(){
    std::cout<<"Initial\n";
    return 0;
}