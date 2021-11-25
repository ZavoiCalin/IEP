#ifndef KING_HPP
#define KING_HPP

#include "human.hpp"



class King : public Human {
    private:
        Human *servant;
    public:
        Human getServant();

        King& operator=( const King& refKing );

        King(Human s);

};

#endif