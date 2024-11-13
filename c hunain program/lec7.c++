#include<iostream>
using namespace std;


// **************************build in variables******************
// int c=35;
// int main(){
// int a  ,b ,c  ;
// cout<<"Enter the value of a:";
// cin>>a;
// cout<<"Enter the value of b:";
// cin>>b;
// c=a+b ;
// cout<<"the sum of a and b is "<<c;
// cout<<"\nthe value of global c is  "<<::c;

// **************************literals(double ,long double, float) variables******************
// int main(){
// float a=3.14f;
// long double z=3.14l;
// cout<<"the size of 3.14f is "<<sizeof(3.14)<<endl;
// cout<<"the size of 3.14F is "<<sizeof(3.14)<<endl;
// cout<<"the size of 3.14l is "<<sizeof(3.14)<<endl;
// cout<<"the size of 3.14L is "<<sizeof(3.14)<<endl;
// cout<<"the value of a is "<<a<<endl<<"the value of z is"<<z;

// **************************Reference variables******************
// moni----> muneeb----> mota------> monibhai-----> lahori
// int main(){
//   float x = 34;
//   float & j =x;
//   cout<<"the value of x is "<<x<<endl<<"the value of j is "<<j; 

// *************************typecasting   variables******************
int main(){
int a = 45;
float b = 45.6;
cout<<"the value of a  is "<<(float)a<<endl;
cout<<"the value of a  is "<<float(a)<<endl;

cout<<"the value of a  is "<<(int)a<<endl;
cout<<"the value of a  is "<<int(a)<<endl;

cout<<"the value of b is "<<float(b)<<endl;
cout<<"the value of b is "<<(float)b<<endl;

cout<<"the value of b is "<<int(b)<<endl;
cout<<"the value of b is "<<(int)b<<endl;


cout<<"the sum   is given as "<<(int(a) +(b)   )     <<endl;
cout<<"the sum  is given as "<<(float(a) +b)<<endl;
cout<<"the sum  is given  as "<<(float(b) +a) <<endl;
cout<<"the sum  is given as "<<(int(b) +a)<<endl;

  return 0;
}
    // thank u soo much for reading 4 types of variables
    