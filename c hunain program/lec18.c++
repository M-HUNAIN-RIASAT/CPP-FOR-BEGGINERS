#include <iostream>
using namespace std;

//recursion and recursive functions>>>>>>>>>>>>>  ie >>>>>>>>>>factorial and fibonacci

int factorial(int n){               //6!  =  5*4   =5*4*3!          
    if(n<=1){
        return 1;
    }
return n*factorial(n-1);
}
 int fib(int n){                //1+1+2+3+5+8+13........
    if(n<=2){
        return 1;
    }
     return fib(n-2)+fib(n-1);

 }
int main(){
    int a;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    // cout<<"the value of the factorial of "<<a<<"  is given as"  <<factorial(a);
    cout<<"the value of the fibonacci sequence at the position of "<<a<<" \n is given as: "  <<  fib(a)<<endl;
    return 0;
}