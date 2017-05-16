


    
    template <class T>
    Set<T>::Set(int s){

        fsize = psize = 0;
        set = NULL;
        if (s>0){
            set = new T[s];
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
    template <class T>
    Set<T>::Set(const Set<T> &s): psize( s.psize ){
        set = NULL;

        // Allocate the require memory
        set = new T[SIZE];
        if ( !set ) {
	        cout<< "Error4" << endl;
        }

        for ( int i = 0; i < psize; i++ ){
            set[i] = s.set[i];
        }

        fsize = psize;
    }
    template <class T>
    Set<T>::Set(string n, int s, int arr[]){
        name=n;
        fsize = psize = 0;
        set = NULL;
        if (s>0){
            set = new T[s];
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


    template <class T>
    int Set<T>::operator [](int index) const{
        if(index<0 || index>psize){
            cout<<"Error2";
            //exit();
        }
        return(set[index]);
        
    }
    template <class T>
    int &Set<T>::operator[](int index){
        if(index<0 || index>psize){
            cout<<"Error7";
            //exit();
        }
        return(set[index]);
    }
    template <class T>
    void Set<T>::operator+(int elem){
        
        if(!exists(elem)){

            if(psize == fsize){
                psize += SIZE;

                T *temp = new T [psize];
 
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
    template <class T>
    void Set<T>::operator -(int elem){
        if(exists(elem)){
            T *temp = new T [fsize];
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
    template <class T>
    //union
    T Set<T>::operator +(Set<T> s){
        Set<T> news(*this);

        for( int i=0; i<s.fsize; i++ ){

            news+s[i];
        }
        return (news);
    }
    
    template <class T>
    //intersection
    T Set<T>::operator^( Set<T> s ) {
        Set<T> news;



        for(int i=0; i<s.fsize; i++ ){

               if ( exists( s[i] ) ){
                  news + s[i];
                }
        }
        return (news);
    }
 
    template <class T>
    bool Set<T>::exists(int elem){
        bool retstat= false;
        for(int i=0; i<fsize; i++){
            if(set[i]==elem){
                retstat = true;
            }
        }
        return retstat;
    }
    template <class T>
    bool Set<T>::operator==(const Set<T> &s){
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

    template <class T>
    bool Set<T>::operator!=(const Set<T> &s){
        bool retstat = true; 
        if(*this==s){
            retstat = false;
        }
        return(retstat);
    }
    template <class T>
    const T Set<T>::operator=(const Set<T> &right){
       if(&right!=this){
           if(psize<right.psize){
               delete[]set;
               set = NULL;
               set = new T[right.fsize];
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
    template <class T>
    int Set<T>::getpsize(){
        return psize;
    }