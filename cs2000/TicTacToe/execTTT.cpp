#include "Cell.h"

int main(){

Player play1;
Player play2;
cout<<"Welcome to a game of Tic Tac Toe! Please enter each players information."<<endl;
cout<<"Please enter Player 1 information"<<endl;
cin>>play1;
cout<<"Please enter Player 2 information"<<endl;
cin>>play2;

char again='y';
while(again=='y'){//this is to play multiple games with the same players

cout<<"New game"<<endl;
Cell cell(play1, play2);

//here I want to be able to call the players by there handles
string h1, h2;
h1=play1.gethandle();
h2=play2.gethandle();

int r, c;
int turn =0;
while (turn<5&&cell.winner(play1,play2)==false){
   // cout<<"This is round "<<turn<<endl;
    cout<<h1<<" please enter a move"<<endl;
    cout<<"Row: ";
    cin>>r;
    cout<<"Col: ";
    cin>>c;
    cell.turn(r,c,play1);
    turn++;
    cout<<h2<<" please enter a move"<<endl;
    cout<<"Row: ";
    cin>>r;
    cout<<"Col: ";
    cin>>c;
    cell.turn(r,c,play2);
}//end turns
cout<<"Would you like to play again (y/n)";
cin>>again;
}//end again
}//end main

