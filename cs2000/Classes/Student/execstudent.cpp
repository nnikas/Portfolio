
#include "student.h"


main(){
    void test(Student );
    Date bd;

    Name name2("Mike", 'J', "Badey");
    Date bd2(11,22,1993);
    Program program2("RH", "Buisness", "Finance", "BA");

    Course c1,c2,c3,c4;
    Course c5(2000, 4, 3.0, "CS2", "Papadakis");
    Course cour[10] = {c1,c2,c3,c4,c5};
    
    
    Student s1;// using the default constructor

    Student s3(name2, program2, bd2, 'M', 12121212, 5, cour[10]);
    


    cout<<"Now computing test on Student 1 "<<endl;
    test(s1);

    cout<<"Now computing test on Student 3 "<<endl;
    test(s3);
    
    
}

/*The test includes displaying the information in the object
changing the student information to the information input by the user
the test then displays the new student information entered
the test then sets the object back to a "default"
and finally it displays in one more time
*/
void test(Student s){
    s.display();
//    s.input();
 //   s.display();
}
