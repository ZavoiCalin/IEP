#ifndef HUMAN_HPP
#define HUMAN_HPP


class Human{

    private:
    unsigned int health;
    std::string name;

    void buy();

    public:

    unsigned int dmg=50;//adding const deletes copy constructor and copy assignment operator

    //Human()=delete; 

    Human();


    Human(unsigned int h, std::string n);

    unsigned int getHealth();
    std::string getName();

    void printStats();

    ~Human();

   
};


#endif
