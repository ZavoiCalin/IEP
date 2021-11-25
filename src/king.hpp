#ifndef KING_HPP
#define KING_HPP

#include "human.hpp"



class King : public Human {
    private:
        Human *servant=nullptr;
    public:
        int power=1;

        Human getServant();

        King& operator=( const King& refKing );

        King(Human *s);

        King( const King& refKing );

        King();

};

#endif