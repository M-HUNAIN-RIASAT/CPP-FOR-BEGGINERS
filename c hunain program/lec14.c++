#include <iostream>
using namespace std;

typedef struct EMPLOYEE
{
     float salary ;           //4 byte    to is me total 9 byte lagain ge
     int experience;         //1
     char favchar;          //4          
// structure main typedef likh kar end pe ep likha is ka matlab ye hae ke jahan pr structure employe likhna parna tha wahan ep likh kar kam ho jae ga.

}ep;


union money
{
 float pounds;                                //4    is mae main tatal 4 byte allocatae karoon ga or aik time pr int main main aik hi use ho g 4 byte ke.
 int rice;                                    //1
 char car;                                   //4

};



int main(){
    
//     struct EMPLOYEE zain;
// // struct employe zain         ki jaga       ep zain likkh do kamdone   ;
//     zain.salary= 36,00,000;
//     zain.experience= 67;
//     zain.favchar = 'j' ;
//     cout<<"value of salary"<<"is"<<  zain.salary<<endl;
//     cout<<"value of experience"<<"is"<<  zain.experience<<endl;
//     cout<<"value of favchar"<<"is"<<  zain.favchar<<endl;

// union money m1;
//  m1.rice=12; 
// //  m1.car ='c'; // so it will give error bcaz m11.rice had used the space of 4 bytes  no space left memory aloocated so ab terminal main koi b garbage value a jae ge.ie 99
// cout<<m1.rice<<endl;


enum meal  {breakfast,lunch,dinner};     //simply enum datsa type bana deta hae.
cout<<breakfast;
cout<<lunch;
cout<<dinner;

// meal m1 = breakfast;      
// cout<<m1;

// same like array i can arrange data and then give them number 0 1 2 3 4 onward


    return 0;
}