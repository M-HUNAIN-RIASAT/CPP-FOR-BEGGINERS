#include <iostream>
using namespace std;

class base{
protected:
int a;
public:
int b;
};
/*
   MEMBERS  |                                       VISIBILITY MODE
____________|________________________________________________________________________________________________
            |  private         |                 public                |           protected
            | -----------------|---------------------------------------|-------------------------------------                               
1 private   |   nill           |                  nill                 |             nill
2 public    |  private         |                  public               |             protected
3 protected |  private         |                  protcted             |             protected


nill mean not inheritable
*/
class derived : protected base{
public:
void show(){
    int a = 45;
    int b = 46;
    cout<<"the value of a is " <<a<<" and value of b is "<<b<<endl;
}
};
// in this way the public and protected member of the base class that had become the protected 
// member of the derived can be accessible by just merily making a method or function like void show that sets value as well as 
// gives output and access the protected members of the  derived class

int main(){
    derived d1;
    d1.show();
    return 0;
}