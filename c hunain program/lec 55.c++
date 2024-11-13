#include <iostream>
using namespace std;

class base
{
public:
    int var_base;
    void display()
    {
        cout << "the value of the base var is given as " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "the value of the derived var is given as " << var_derived << endl;
        cout << "the value of the base var is given as " << var_base << endl;                           //ye run time main pata lage ga ke konsa display function chale gaaaa
        
    }
};
int main()
{
    base obj_base;
    derived obj_derived;
    base *base_pointer;          // this pointer of teh base will access the base object
    base_pointer = &obj_derived; // using the pointer of teh base that access the base object to access the object of the derived class

    base_pointer->var_base = 90; // base ka pointer derived ke var ko access kare ga pr display base ka hi kare ga kiun ke wo basee ka pointer ahe

    base_pointer->display();

    // base_pointer ->var_derived = 90;    //unaccessable create error
    // base_pointer->display();

    derived *derived_pointer;
    derived_pointer->var_derived = 900;
    derived_pointer->display();
    return 0;
}

// SO
// aik calss ka pointer us class ke object ko access karta hae or us ke objectf ke members ko b access karta hae
// BASEE POINTER DERIVED KE OBJECT KO ACCESS KAR SAKTA HAE PR DERIVED KE OBJECT KE  MEMBER(INT VAR_DERIVED) KO ACCESS NI KAR SAKTA