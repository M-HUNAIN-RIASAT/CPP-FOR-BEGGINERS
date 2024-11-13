#include <iostream>
using namespace std;
int sum(int,int);    //prototype

void g(void);
  

int main(){
    int a,b;
    cout<<"the value of a  is:"<<endl;
    cin>>a;
    cout<<"the value of b is:"<<endl;                      //actual parameters are a nad b.
    cin>>b;
  
cout<<"the sum  is given as :"<<sum(a,b)<<endl; 
g();
    return 0;

}

int sum(int x, int y){                 //function of sum as like of main functon
int z= x+y;
                         //formal para meters are x and y.
return z;
}


void g(){
    cout<<"i am hunian"<<endl; 
}