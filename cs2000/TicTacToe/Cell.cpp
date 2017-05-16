#include "Cell.h"

Cell::Cell(Player p1, Player p2){
    pa = p1;
    pb = p2;
    markera=p1.getmarker();
    markerb=p2.getmarker();
    printcell();
}
/*
void Cell::initialize(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cell[i][j]=
        }
    }
}*/
void Cell::turn(int x, int y, Player p){
    if(validmove(x,y)==true){
        row=x-1;
        col=y-1;
        cout<<"Your move is Row: "<<x<<" Col: "<<y<<endl;

        cell[row][col]=p.getmarker();


    printcell();
    }
    else {
        cout<<"invalid move"<<endl;

        
    }
}
bool Cell::validmove(int row, int column){
    bool retstat = true;
    if ( row>3 || row<1||column>3||column<1){
        retstat = false;
    }
    return retstat;

}
bool Cell::winner( Player p1, Player p2){
    bool retstat;
    for (char a=0;a<3;a++){
	if (cell[a][0]==cell[a][1] && cell[a][0]==cell[a][2]){
        if(cell[a][0]==p1.getmarker()){
            p1.increasewins();
            cout<<"We have a winner! The winner is: "<<p1<<endl;
		    retstat = true;
	    }
	    else if(cell[a][0]==p2.getmarker()){
            p2.increasewins();
            cout<<"We have a winner! The winner is: "<<p2<<endl;
            retstat = true;
        }
	}
	else if (cell[0][a]==cell[1][a] && cell[0][a]==cell[2][a]){
	    if(cell[0][a]==p1.getmarker()){
            p1.increasewins();
            cout<<"We have a winner! The winner is: "<<p1<<endl;
		    retstat = true;
	    }
	    else if(cell[0][a]==p2.getmarker()){
            p2.increasewins();
            cout<<"We have a winner! The winner is: "<<p2<<endl;
            retstat = true;
        }
	}
	else{
	    retstat=false;
	}
    }
    if (cell[0][0]==cell[1][1] && cell[0][0]==cell[2][2]){
        if(cell[0][0]==p1.getmarker()){
	        p1.increasewins();
            cout<<"We have a winner! The winner is: "<<p1<<endl;
	        retstat= true;
        }
        else if(cell[0][0]==p2.getmarker()){
            p2.increasewins();
            cout<<"We have a winner! The winner is: "<<p2<<endl;
            retstat = true;

        }
    }
    else if (cell[0][2]==cell[1][1] && cell[0][2]==cell[2][0]){
        if(cell[1][1]==p1.getmarker()){
    	    p1.increasewins();  
            cout<<"We have a winner! The winner is: "<<p1<<endl;
    	    retstat= true;
        }
        else if(cell[1][1]==p2.getmarker()){
            p2.increasewins();
            cout<<"We have a winner! The winner is: "<<p2<<endl;
            retstat = true;
        }
    }
    else{
        retstat = false;
    }
        
    return retstat;  
}

void Cell::printcell(){

cout<<"\n   1   2   3\n";
cout<<"1 "<<cell[0][0]<<" | "<<cell[0][1]<<" | "<<cell[0][2]<<"\n";
cout<<" ---|---|---\n";
cout<<"2 "<<cell[1][0]<<" | "<<cell[1][1]<<" | "<<cell[1][2]<<"\n";
cout<<" ---|---|---\n";
cout<<"3 "<<cell[2][0]<<" | "<<cell[2][1]<<" | "<<cell[2][2]<<endl;

}
