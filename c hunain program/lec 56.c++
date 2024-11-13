#include <iostream>
using namespace std;

class base
{
public:
    int var_base =1;
    virtual void display()                       //virtual kehta hae ke agar mere gesa koi or age a gea to use run karna mujhe ni
    {
        cout << "1 the value of the base var is given as " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived =2;
    void display()
    {
        cout << "2 the value of the derived var is given as " << var_derived << endl;
        cout << "2 the value of the base var is given as " << var_base << endl;                           //ye run time main pata lage ga ke konsa display function chale gaaa yani yaha virtual function chalana pare ga

    }
};


int main(){
    base objbase;
    derived objderived;
    base * ptrb;
    ptrb = & objderived;                 //virtual ;lagene ke baad main keh skta hoon ke ab base 
    ptrb->display();                     //ka pointer derived ke object or us ke members ko access kar sakta hae 
    return 0;
}
// pehlae hum base ke pointer ko point karte the derived ke obj pr lekin display function or member var base wale hi chalte thae 
// is liyae hum ne virtual function base main bana liya jo kehta hae ek agar mere baad mere gesa koi function inherited class mein run 
// hua to use run lkarna mujhe ni
// is liyae ab base ka pointer derived ke object tak or us ke member variables tak rasaee hasil lkar skta hae



//             or ahn yehe to example hae polymorphism ki
//yani 2 objects of different classses performing same function like dispaly
// this is run time polymorphism i.e virtual function ka use
