//************************************************   AMBIGUITY   RESOLUTION   ***************************************
#include <iostream>
using namespace std;

class base1{
public:
void greet(){
    cout<<"hello hunain"<<endl;
}
};
class base2{
public:
void greet(){
    cout<<"hello hunain and zain"<<endl;
}
};
class derived :  public base1 , public base2{
public:

void greet(){
    base1 :: greet();                 // this is the solution for ambiguity
    base2 :: greet();                 // it shows taht i cleared that which great to take here

}
};


int main(){
    derived d;
    d.greet();
    return 0;
}