/*
This class forms a Player for the game TicTacToe
Its cout and cin operators are overloaded to print and input all of the information of the player.
It has accessor functions to get the marker and handle of the player 
Increase wins is not working, however it is supposed to keep track of how many wins the player has accomplished
I think it is because the value of the member "won" keeps reseting to 0 however I'm not sure why

*/
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>


using namespace std;

class Player{
    
    friend istream &operator>>(istream&, Player&);
    friend ostream &operator<<(ostream&, const Player&);
    
  public:
  Player(){
      name="Name";
      handle = "Player";
      marker = 'Z';
      won=0;
  }
  char getmarker();
  void increasewins();
  string gethandle();


  private:
  string name;
  string handle;
  char marker;
  int won;
  

};


#endif