#ifndef KING_HPP
#define KING_HPP

#include "human.hpp"



class King : public Human {
    private:
        Human *servant;
    public:
        Human getServant(){
            return *servant;
        }

        King& operator=( const King& refKing );
};

#endif