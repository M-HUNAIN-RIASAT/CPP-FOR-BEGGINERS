#include <iostream>
#include <iomanip>


using namespace std;

int main(){
// int a =3;
// cout<<"the value of a was"<<a<<endl;
// a =45;
// cout<<"the value of a is"<<a<<endl; 


// ******************constant in c++**********
// (const int a = 23;
// cout<<"the value of a was: "<<a<<endl;
// a = 47;
// cout<<"the value of a is: "<<a<<endl;)     in thsi case it will give an error******* as the value of is fixed as 23 and will not be written as 47 now so, it will give an error.


// ******************manipulators in c++**********
// that manipulates i.e:for arranging the values on right side by using setw in the header file <iomanip>
// so//  setw() arrange the values of a b c and d in the order of 5 as 5 digits in 50,000

int a =23, b =497, c =1234, d =50000;
cout<<"the value of a : "<<setw(5)<<a<<endl;
cout<<"the value of b : "<<setw(5)<<b<<endl;
cout<<"the value of c : "<<setw(5)<<c<<endl;
cout<<"the value of d : "<<setw(5)<<d<<endl;
                                                
// **********************Preferences  to +-/*   ******************
// int a , b ;

// cout<<"enter the value of a:"<<endl;
// cin>>a;
// cout<<"enter the value of b:"<<endl;
// cin>>b;

// int c= (((a*2)+(b*2)-6))-4  ;
// cout<<"the value of c=(((a*2)+(b*2)-6))-4  is given as "<<c<<endl;
return 0;

}

