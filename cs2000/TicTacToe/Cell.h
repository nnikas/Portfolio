/* Nicole Nikas 
This Class builds a gameboard for TicTacToe
Each Move is expressed in a x y form where x is the rows and y is the columns
It validates a move and puts the marker of the Player(from class Player) there
It checks for a winner by checking if cells in the appropriate positions match a players marker
It prints the cell in a 3 by 3 for with the rows and columns are numbered


*/


#ifndef CELL_H
#define CELL_H
#include <iostream>
#include "Player.h"


using namespace std;

class Cell{
  public:
  Cell(){
    markera='O';
    markerb='X';
    cell[3][3]={0};
    printcell();
      
  }
  Cell(Player, Player);
  void turn(int,int,Player);
  bool validmove(int, int);
  bool winner(Player,Player);
  void printcell();

  
  private:
  int row, col, ival;
  char markera, markerb;
  char cell[3][3]= { {' ',' ',' '},{' ',' ',' '},{' ',' ',' '} }; 
  Player pa, pb;
};


#endif