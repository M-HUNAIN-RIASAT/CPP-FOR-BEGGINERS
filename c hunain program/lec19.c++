#include <iostream>
using namespace std;
                //  cpp polymorphism means using a function in many places >>>>>>>>>>>function overloading

int sum (int a,int b ){
    cout<<"by using sum  function with 2 arguments"<<endl;
return a+b;
}
int sum (int a,int b,int c ){
    cout<<"by using sum  function with 3 arguments"<<endl;
return a+b+c;
}
//for vloume of cylinder
int volume(int h,double r){
    return ((3.14)*r*r*h);
}
//for vloume of cude
int volume(int a){
    return (a*a*a);
}
//for vloume of rectangle
int volume(int h,int b,int l){
    return   (h*l*b);
}

int main(){
    // cout<<"the sum of 3 and 7 is given as: "<<sum(3,7)<<endl;
    // cout<<"the sum of 3,9 and 7 is given as: "<<sum(3,7,9)<<endl;
    cout<<"the volume of a cylinder 3 and 7 is given as: "<<volume(3,7)<<endl;
    cout<<"the volume of a cubeoid with a side 3  is given as: "<<volume(3)<<endl;
    cout<<"the volume of a rectangle with sides 3,9 and 7 is given as: "<<volume(3,7,9)<<endl;
    return 0;
}