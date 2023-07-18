/**
 * @file Board.h
 * @author baptiste 
 * @brief this class create a board of 8 by 8 where the player place his ship
 * @version 0.1
 * @date 2023-07-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <map>
using namespace std;

#ifndef Board_h
#define Board_h


class Board {
    private : 
        int PlayBoard[][];

    public : 
        // constructor 
        Board();

        // accessor
        int GetBoard();

        //Methode
        void Change_Board();

        void ResetTable();

        void PrintBoard();
};
#endif