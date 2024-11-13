//************************************   MULTIPLE INHERITENCE      *****************
#include <iostream>
using namespace std;
   
class base1{
protected:
int num1;
public:
void setnum1(int a){
    num1 = a;
}
void getnum1(){
    cout<<"the value of num 1 is "<<num1<<endl;
}
};
class base2{
protected:
int num2;
public:
void setnum2(int b){
    num2 = b;
}
void getnum2(){
    cout<<"the value of num 2 is "<<num2<<endl;
}
};

/*syntax for the derived in multiple inheritence
class (derived name)  :   (visibility mode) (base name)  ,  (visibility mode)  (base name)
{
members etc..............

}
*/
class derived : public base1  , public  base2{
protected :
int num3;
public:
void setnum3(int c){
    num3 = c;
}
void getnum3(){
    cout<<"the value of num 3 is "<<num3<<endl;
}
void display(){
getnum1();
getnum2();
getnum3();
cout<<"the sum of the three numbers is given as "<<num1+num2+num3<<endl;
}
};


int main(){
    derived d1;
    d1.setnum1(23);
    d1.setnum2(22);
    d1.setnum3(2);
    d1.display();
    return 0;
}