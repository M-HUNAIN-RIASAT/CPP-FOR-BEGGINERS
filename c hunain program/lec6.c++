#include <iostream>
//  header file
    //   system          <iostream>
    //   user generated   "the.h"   but in this case there must be a "this.h" file  inthe directory where you are writting the code

using namespace std;


int main(){
int a=3 , b=1;
// cout<<"hello hunain "<<endl;
// <<endl provide same role as that of the   \n
// going to use simple <<endl for addinng a line in the out put result in the terminal
cout<<endl;
cout<<"different typpes of the operators"<<endl;
cout<<endl;
// cout<<boolalpha<<endl;
cout<<"Following are the types of arithmetic operators"<<endl;
cout<<"the value of a+b is "<<a+b<<endl;
cout<<"the value of a-b is "<<a-b<<endl;
cout<<"the value of a/b is "<<a/b<<endl;
cout<<"the value of a*b is "<<a*b<<endl;
cout<<"the value of a%b is "<<a%b<<endl;
cout<<"the value of a++ is "<<a++<<endl;
cout<<"the value of a-- is "<<a--<<endl;
cout<<"the value of ++a is "<<++a<<endl;
cout<<"the value of --a is "<<--a<<endl;
cout<<endl;

cout<<"following are the types of comparison operator\n";
cout<<"thevalue of a==b is "<<(a==b)<<endl;
cout<<"thevalue of a!=b is "<<(a!=b)<<endl;
cout<<"thevalue of a<=b is "<<(a<=b)<<endl;
cout<<"thevalue of a>=b is "<<(a>=b)<<endl;
cout<<"thevalue of a<b is "<<(a<b)<<endl;
cout<<"thevalue of a>b is "<<(a>b)<<endl;
cout<<endl;
  
cout<<"following are the types of logical operator\n";
cout<<"thevalue of and operator       ((a==b) && (b<a)) is "<<((a==b) && (b<a))<<endl;
cout<<"thevalue of or operator        ((a==b) || (b<a)) is "<<((a==b) || (b<a))<<endl;
cout<<"thevalue of nand operator     !((a==b) && (b<a)) is "<<!((a==b) && (b<a))<<endl;
cout<<"thevalue of nor operator      !((a==b) || (b<a)) is "<<!((a==b) || (b<a))<<endl;


  return 0;
}