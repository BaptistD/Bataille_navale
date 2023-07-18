#include <iostream>
#include <map>
#include "../Board/Board.h"
using namespace std;

#ifndef Player_h
#define Player_h


class Player {
    private : 
        string name;

        int point = 0;

        Board public_board;

        Board private_board;

    public : 
        // constructor 
        Player();

        // accessor
        string GetName();

        string GetPoint();

        Board GetPublicBoard();

        Board GetPrivateBoard();

        //Methode
        void AddPoint();

        void Attaque();
};
#endif