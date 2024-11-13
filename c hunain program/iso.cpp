#include <iostream>
#include <iomanip>

using namespace std;

     
int main(){
int a,b,c,d;
cout<<"enter the value of a:"<<endl;
cin>>a;
cout<<"enter the value of b:"<<endl;
cin>>b;
cout<<"enter the value of c:"<<endl;
cin>>c;
d=a+b+c;
cout<<"the value of sum of three numbers is :"<<setw(5)<<d<<endl;


    return 0;
}