#include <iostream>

class Human{
    private:
    unsigned health;

    public:
    Human(unsigned h) : health(h){
        
    }
};

int main(){
    std::cout<<"Initial\n";
    return 0;
}