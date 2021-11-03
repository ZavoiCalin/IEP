#include <iostream>

class Human{
    private:
    unsigned health=100;

    public:
    Human(unsigned h) : health(h){
        
    }
};

int main(){
    std::cout<<"Initial\n";
    return 0;
}