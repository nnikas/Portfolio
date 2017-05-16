#include"date.h"

    

    Date::Date(int month, int day, int year){
        if(setDate(day, month, year)){
            d= day;
            m= month;
            y = year;
        }
        else{
            cout<<"Wrong date"<<endl;
        }


    }
    istream &operator>>(istream&i, Date&d) {
        d.input(i);
        return(i);
    }
    ostream &operator<<(ostream&o, const Date&d) {
        d.display(o);
        return(o);
    }
    //use the this pointer to output the current date object
    Date Date::operator++(int dum){
        Date temp = *this;
        Date::d++;
        return(temp);
        
    }
    Date Date::operator++(){
        Date::d++;
        return(*this);
    }
    
    bool Date::operator==(const Date&dt){
        bool retstat = false;
        if(m==dt.m && d==dt.d && y==dt.y){
            retstat = true;
        }
        else{
            retstat = false;
        }
        
        return (retstat);
        
    }
     
    bool Date::setMonth( int month ) {
	    bool retstat = true;

	    if ( month < 1 || month > 12 )
	    	retstat = false;
	    else
	    	Date::m = month;

	    return( retstat );
    }
    
    bool Date::setDay( int day ) {
	    bool retstat = true;
    
        if (m%2==1&&m<8){
            if(day>31||day<1){
                retstat = false;
            }
            else{
                retstat = true;
            }
        }
        else if(m%2==0&&m<8){
            if(m==2&&day<28){
                retstat = true;
            }
            else{
                retstat = false;
            }
            
            if(day>30||day<1){
                retstat = false;
            }
            else{
                retstat = true;
            }
        }
        else if(m%2==1&&m>8){
            if(day>30||day<1){
                retstat = false;
            }
            else{
                retstat = true;
            }
            
        }
        else if(m%2==0&&m>8){
            if(day>31||day<1){
                retstat = false;
            }
            else{
                retstat = true;
            }
            
        }
        
	    return( retstat );
    }
    
    bool Date::setYear( int year ) {
	    bool retstat = true;

	    if ( year < 1916 || year > 2016 )
	    	retstat = false;
	    else
	    	Date::y = year;

	    return( retstat );
    }

    bool Date::setDate(int day, int month, int year){
        bool retstat = true;
        if (setDay(day)&&setMonth(month)&&setYear(year)){
            retstat = true;
        }
        else{
            retstat = false;
        }
        return retstat;
    }

    void Date::display(ostream&o) const{
        o<<"The date is: "<<endl;
        o<<m<<"/"<<d<<"/"<<y<<endl;
    
    }
    void Date::input(istream&i){
        int d = 0;
        int m = 0;
        int y = 0;
        cout<<"Enter date of Birth"<<endl;
    	// Request and validate the day
    	do {	
	    	if (!d)
		    	cout << "Enter Day: ";
		    else    
			    cout << d << " is an invalid day, re-enter: ";
		    i >> d;
		    Date::d=d;
	    } while ( !setDay( d ) );
	    	    cout << endl;

    	// Request and validate the month
    	do {	
	    	if (!m)
		    	cout << "Enter Month: ";
		    else    
			    cout << m << " is an invalid month, re-enter: ";
		    i >> m;
		    Date::m=m;
	    } while ( !setMonth( m ) );
	    	    cout << endl;

    	// Request and validate the year
    	do {	
	    	if (!y)
		    	cout << "Enter Year: ";
		    else    
			    cout << y << " is an invalid year, re-enter: ";
		    i >> y;
		    Date::y=y;
	    } while (!setYear( y ) );

    
    }

    
    int Date::getDay(){
        return d;
    }
    int Date::getMonth(){
        return m;       
    }
    int Date::getYear(){
        return y;
    }