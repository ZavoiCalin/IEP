#ifndef KING_HPP
#define KING_HPP

#include "human.hpp"
#include <string>
#include <memory>


class King : public Human {
    private:
        Human *servant=nullptr;

    public:
        int power=1;

        std::unique_ptr <std::string> castle;
        std::shared_ptr <std::string> land;

        Human getServant();

        King& operator=( const King& refKing );

        King(Human *s);

        King( const King& refKing );

        King();

        King(std::string c, std::string l);

};

#endif