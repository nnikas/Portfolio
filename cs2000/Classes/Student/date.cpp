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
    }

    void Date::display() const{
        cout<<"The date you entered is: "<<endl;
        cout<<m<<"/"<<d<<"/"<<y<<endl;
    
    }
    void Date::input(){
        int d = 0;
        int m = 0;
        int y = 0;
        
    	// Request and validate the day
    	do {	
	    	if (!d)
		    	cout << "Enter Day: ";
		    else    
			    cout << d << " is an invalid day, re-enter: ";
		    cin >> d;
	    } while ( !setDay( d ) );
	    	    cout << endl;

    	// Request and validate the month
    	do {	
	    	if (!m)
		    	cout << "Enter Month: ";
		    else    
			    cout << m << " is an invalid month, re-enter: ";
		    cin >> m;
	    } while ( !setMonth( m ) );
	    	    cout << endl;

    	// Request and validate the year
    	do {	
	    	if (!y)
		    	cout << "Enter Year: ";
		    else    
			    cout << y << " is an invalid year, re-enter: ";
		    cin >> y;
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