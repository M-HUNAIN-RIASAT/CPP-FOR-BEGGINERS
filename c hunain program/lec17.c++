#include <iostream>
using namespace std;

 inline int product(int a ,int b){    //inline help to use less cache memory >> compile timne when a function is used again and again in the execution
// ************************** inline function ke sath kabhi b static variable islimal ni karna <<<<<<<<<<<<<<<<<<<<<<<
//  static int c=0;                              //static variable
//  c=c+1;
//  return a*b+c;                           //in main c ki value retained rehti hae yani pehli dafa bas 0 static aye g phir agli dafa retained ie c =0+1   >>  c=1+1=2  >>  c=2+1=3   >>soon           
return a*b ;                   
}

float moneyreceived(int money,float factor=1.04){                        //   default argument
    return money*factor;
}

// int strlen(const char *p){                                           //   constant argument

// }


int main(){
    // int a,b;
    // cout<<"enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    // cout<<"the product is given as: "<<product(a,b)<<endl;
    int money=100000;
    cout<<"if you have this amount: "<<money<<" in your account then you will receive "<<moneyreceived(money)<< " in your acconut"<<endl;
    cout<<"FOR VIPS: if you have this amount: "<<money<<" in your account then you will receive "<<moneyreceived(money,1.04)<< " in your acconut"<<endl;
    return 0;
}