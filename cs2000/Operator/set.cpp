#include"set.h"

    

    Set::Set(int s){

        fsize = psize = 0;
        set = NULL;
        if (s>0){
            set = new int[s];
            fsize = s;
            psize = s;
        }
        if(set==0){
            //signal error
            cout<<"Error1"<<endl;
            //break;
        }
       // psize=2;
        
    }
    Set::Set(const Set &s): psize( s.psize ){
        set = NULL;

        // Allocate the require memory
        set = new int[SIZE];
        if ( !set ) {
	        cout<< "Error4" << endl;
        }

        for ( int i = 0; i < psize; i++ ){
            set[i] = s.set[i];
        }

        fsize = psize;
    }
    
    Set::Set(string n, int s, int arr[]){
        name=n;
        fsize = psize = 0;
        set = NULL;
        if (s>0){
            set = new int[s];
            fsize = s;
            psize = s;
        }
        if(set==0){
            //signal error
            cout<<"Error3"<<endl;
            //break;
        }
        for(int i=0; i<psize; i++){
            set[i] = arr[i];
        }
    }
    istream &operator>>(istream &i, Set &s) {
        if(s.set==NULL){
            s.set = new int[s.SIZE];
            s.psize= s.SIZE;
        }
        for(int j=0; j<s.psize; j++){
            i>>s.set[j];
            
        }
        return(i);
    }
    ostream &operator<<(ostream &o, const Set &set) {
        cout<<"{";
        for(int i=0; i< set.fsize; i++){
            o<<set.set[i]<<" ";
        }
        cout<<"}"<<endl;
        return(o);
    }
    
    int Set::operator [](int index) const{
        if(index<0 || index>psize){
            cout<<"Error2";
            //exit();
        }
        return(set[index]);
        
    }
    int &Set::operator[](int index){
        if(index<0 || index>psize){
            cout<<"Error7";
            //exit();
        }
        return(set[index]);
    }
    void Set::operator+(int elem){
        
        if(!exists(elem)){

            if(psize == fsize){
                psize += SIZE;

                int *temp = new int [psize];
 
                for(int i=0;i<fsize; i++){

                    temp[i]=set[i];
                }

                if ( set ) { 

                    delete [] set;
                }

                set = temp;
                temp = NULL;
            }

        set[fsize]=elem;
        fsize++;
        }
    }
    
    void Set::operator -(int elem){
        if(exists(elem)){
            int *temp = new int [fsize];
            for(int i=0, j = 0;i<fsize; i++){
                
                if(set[i]!=elem){
                   temp[j++]=set[i]; 
                }
            }
            delete [] set;
            set = temp;
            temp = NULL;
            fsize--;
        }
        
    }
    //union
    Set Set::operator +(Set s){
        Set news(*this);

        for( int i=0; i<s.fsize; i++ ){

            news+s[i];
        }
        return (news);
    }
    
    
    //intersection
    Set Set::operator^( Set s ) {
        Set news;



        for(int i=0; i<s.fsize; i++ ){

               if ( exists( s[i] ) ){
                  news + s[i];
                }
        }
        return (news);
    }
 
    
    bool Set::exists(int elem){
        bool retstat= false;
        for(int i=0; i<fsize; i++){
            if(set[i]==elem){
                retstat = true;
            }
        }
        return retstat;
    }
    bool Set::operator==(const Set &s){
        bool retstat = true;

        if (fsize == s.fsize) {
   	        for (int i=0; i<fsize; i++){
      		    if ( exists(s.set[i])){
			    retstat = true;
		        }
		        else{
		            retstat=false;
		        }
            } 
        }
        else{
            retstat=false;
        }
     


   return( retstat ); 
}
    bool Set::operator!=(const Set &s){
        bool retstat = true; 
        if(*this==s){
            retstat = false;
        }
        return(retstat);
    }
   
   const Set Set::operator=(const Set &right){
       if(&right!=this){
           if(psize<right.psize){
               delete[]set;
               set = NULL;
               set = new int[right.fsize];
                if(set==0){
                cout<<"Error5"<<endl;
                }
            }
            psize=fsize=right.fsize;
            for(int i=0;i<psize; i++){
                set[i]=right.set[i];
            }
       }
       return(*this);
   }
   
    int Set::getpsize(){
        return psize;
    }
    Set::~Set(){
        if(set!=NULL){
            delete [] set;
            set=NULL;
        }
    }