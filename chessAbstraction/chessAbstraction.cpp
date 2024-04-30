#include "Players.hpp"
#include <iostream>
#include "king.hpp"
#include "figure.hpp"
#include "queen.hpp"
#include  "rook.hpp"
#include "bishop.hpp"
#include "pawn.hpp"
#include "knight.hpp"
int main(){

      std::cout<<"Players:"<<std::endl;
    Players player1("Kate","white");
    player1.getName();
    player1.getColor();
    Players player2("Bob","Black");
    player2.getName();
    player2.getColor();

    King king(3,3,"black");
    Queen queen(1,2,"black");
    Rook rook(4,7,"black");
    Pawn pawn(6,7,"black");
    Bishop bishop(5,5,"black");
    Knight knight(8,8,"black");

    const Figure* figures[6];
    figures[0]=&king;
    figures[1]=&queen;
    figures[2]=&rook;
    figures[3]=&pawn;
    figures[4]=&bishop;
    figures[5]=&knight;

    for (int i=0;i<6;++i){
        std::cout<<figures[i]->getFigure ()<<":";
        std::cout<<"("<<figures[i]->getX()<<",";
        std::cout<<figures[i]->getY()<<")"<<std::endl;
       
    }

      for (int i = 0; i < 1; ++i) {
        delete figures[i];
    }
    
    return 0;
}