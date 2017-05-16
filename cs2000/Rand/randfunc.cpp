/* 
Nicole Nikas 
01/31/15
CS2000
This program takes two lists, one of even and one of odd numbers from 1 to 20
It then swaps every other element in the two lists
It then prints every elemnt in the two lists
*/

//Things I couldn't do:
//build the arrays with the equations, solutions, or correctness
//check if the stuff is in the arrays 
//statistics


#include <iostream> 	// required for cout()
#include <cstdlib>	// required for rand()
#include <ctime>	// required for time()


using namespace std;

double randomfunc(int, int, char);
void check(int, int, bool[], int);
void display(int, int, char);
//int StringToNumber ( string );	
//string NumberToString (int);



int main(){
   // const int shift = 1;

	int shift, scalingFactor;
	int rNum, rNum2, rOper;
	double answer, solution;
	int level=1;

	bool C[10];
	int A[10];
	int F[10];
	
	srand( time(0) );

	cout<<"level number :"<<level<<endl;
	//bellow is the levels and restrictions
	if(level==1){
		shift= 0;
		scalingFactor=10;
	}

	if(level==2){
		shift= 0;
		scalingFactor=25;
	}
	
	if(level==3){
		shift= 10;
		scalingFactor=25;
	}
	
	if(level==4){
		shift= -25;
		scalingFactor=25;
	}
	
	
	while(level!=0){
	for(int i=0; i<10; i++){
	rNum =  shift + rand()%scalingFactor;
	rNum2 = shift + rand()%scalingFactor;
	rOper = rand()%4;
	
	
	//array of opperators to randomly pick from
	char oper[4] = {'+','-','/','*'};
	
	// generate a random function with a solution
	solution = randomfunc(rNum, rNum2, oper[rOper]);
	//add the function to array
	F[i] = rNum*1000+ rOper*100+ rNum2;
	
	
	//display the function
	display(rNum, rNum2, oper[rOper]);
	//promt for user to answer
	cout<<"Answer the following equation."<<endl;
	cin>>answer;
	//storing answer in array
	A[i] = answer;
	//compare answer to solution
	check(answer, solution, C, i);
	}
	
	int option;
	
	cout<<"A "<<A[10]<<endl;
	cout<<"C "<<C[10]<<endl;
	cout<<"F "<<F[10]<<endl;
	
	cout<<"1.) Continue at the current level."<<endl<<"2.) Go to the next level."<<endl<<"3.) Display summary statistics for the current level."<<endl<<"4.) Quit."<<endl;
	cin>>option;
	
	if(option==1){
		level=1;
		
	}
	else if(option==2){
		level++;
		
	}
	else if(option==3){
		cout<<"Statistics"<<endl;
		level=0;
		
	}
	else if(option==4){
		cout<<"goodbye."<<endl;
		level = 0;
	}
	}
	
}



double randomfunc(int rNum, int rNum2, char oper){
    double func;
    
	if(oper == '+'){
	   func = rNum+rNum2 ;
	}
	else if(oper == '-'){
	   func = rNum-rNum2 ;
	}
	else if(oper == '*'){
	   func = rNum*rNum2 ;
	}
	else if(oper == '/'){
	   func = rNum/rNum2 ;
	}
	return func;
}

void display(int rNum, int rNum2, char oper){
   
    cout<< rNum<<" "<<oper<<" "<<rNum2<<endl;

}

void check(int answer, int solution, bool C[10], int n ){
    int answer2;

    bool correct;
    if (answer== solution){
        cout<<answer<<" is correct"<<endl;
       
        correct = true;
        
    }
    else {
        cout<<answer<<" is incorrect"<<endl;

        correct = false;
        

        }
        
       C[n]= correct; // storing correctness into array
     
    }

