#include <iostream>
using namespace std;
//                                           []    .........Array............
int main(){
     int marks[]={34,56,67,89,23,21};
//     //  we can change the value of the marks at certain interval with in an array so now at place of [2] 67 is not written and 734 is written.
//      marks[2] =734;
//      cout<<"the marks are given as:"<<endl;
//      cout<<"The marks of candidate is"<<endl<<  marks[0]<<endl;
//      cout<<"The marks of candidate is"<<endl<<  marks[1]<<endl;
//      cout<<"The marks of candidate is"<<endl<<  marks[2]<<endl;
//      cout<<"The marks of candidate is"<<endl<<  marks[3]<<endl;
//      cout<<"The marks of candidate is"<<endl<<  marks[4]<<endl;
//      cout<<"The marks of candidate is"<<endl<<  marks[5]<<endl;



// **********************************************for

// // for (int i = 0; i < 6; i++)
// // {
// //      cout<<"The marks of candidate" <<"is"<<endl<<  marks[i]<<endl;
    
// // }




// **********************************************while

// int i=0;
// while (i<6)
// {
// cout<<"the value of marks of candidate "<<"is"<<endl<<marks[i]<<endl;
// i++;
// }



// **********************************************do while
// int i=0;
// do{
//     cout<<"the value of marks of candidate "<<"is"<<endl<<marks[i]<<endl;
//     i++;
// }while (i<6);


        //*    ARRAY AND POINTERS          * //   int a=3 ki location dekhni ho to &a pr  array me ese ni wahan pr bs a likhna to a ki location a jani similarly, agar marks likhoon ga to marks ki location a jaee gi in the array
        // pointer arithmetics~~~~~~~~~~~~~~
        //      ( adress new) =  [(adress current ) + ( i )* (  size of data type / SIZE OF ARRAY)]
        //      (p+i)          =  [(p)              + ( i )* (  size of data type / SIZE OF ARRAY)]
        //                      =   34              + 1 *6
        //                      =   40

  int* p = marks;
  cout<<"the LOCATION of marks is given as:"<<p<<endl;

  // cout<<"the value of marks is given as:"<<*p<<endl;
  // cout<<"the value of marks is given as:"<<*(p+1)<<endl;
  // cout<<"the value of marks is given as:"<<*(p+2)<<endl;
  // cout<<"the value of marks is given as:"<<*(p+3)<<endl;
  cout<<"the value of marks is given as:"<<*(p++)<<endl;
  cout<<"the value of marks is given as:"<<*(p)<<endl;
  cout<<"the value of marks is given as:"<<*(++p)<<endl;
  cout<<"the value of marks is given as:"<<*((++p)++)<<endl;
  
// so we gona follow up a series like ,  p++   >>    p   >>  ++p  >>  ---  >>   (++p)++    so on.....






    return 0;
}