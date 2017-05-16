# include "Player.h"
istream &operator>>(istream&i, Player&p) {

        cout << "Enter first name: ";
        i >> p.name;
        cout << "Enter handle: ";
        i >> p.handle;
        cout << "Enter marker: ";
        i >> p.marker;


        return (i);
}

ostream &operator<<(ostream&o, const Player&p) {

        o << "Name: " << p.name << endl;
        o << "Handle: " << p.handle << endl;
        o << "Marker: " << p.marker << endl;
        o << "Wins: " << p.won << endl;

        return (o);
}

char Player::getmarker(){
    return marker;
}
string Player::gethandle(){
    return handle;
}

void Player::increasewins(){

    won++;
    //cout<<"This many"<<won<<endl;
}
