#include <iostream>
using namespace std;
// pointers in cpp     >>>>>>pointer are data type that store location of other data types with in them i.e int ka ,float ka etc
// &   amposite
// *    dereference operator
int main(){
    int a=2;
    int* b= &a;
//   >>>>>   &     means     (location of)
cout<<"the location of a is given as:"<<&a<<endl;
cout<<"the location of a is given as:"<<b<<endl;
//   >>>>>   *    means     (value at)
cout<<"the value AT a is given as:"<<*b<<endl;
cout<<"the value AT a is given as:"<<a<<endl;


// ################   pointer to pointer   ###########################
int** c=&b;
cout<<"the location of b is given as:"<<&b<<endl;
cout<<"the location of b is given as:"<<c<<endl;
cout<<"the value AT b is given as:"<<**c<<endl;


int*** d=&c;
cout<<"the location of c is given as:"<<&c<<endl;
cout<<"the location of c is given as:"<<d<<endl;
cout<<"the value of c is given as:"<<***d<<endl;



int**** e=&d;
cout<<"the location of d is given as:"<<&d<<endl;
cout<<"the location of d is given as:"<<e<<endl;
cout<<"the value of d is given as:"<<****e<<endl;
cout<<"the value of d is given as:"<<d<<endl;




    return 0;
}