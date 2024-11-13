// ***********************COPYING CONSTRUCTOR*******************
#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number() // is se ehlae is ki jaga  number(){}   ye tha pr baad me x or y ki value automatically assign karne ke liyae
             // is me  a=0 rakh deya as  a default value in the default constructor
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    //  when no copy constructor is formed comppiler supplies its own copy constructor
    number(number &obj)
    {
        cout << "the number or constructor is copied!!!! " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "the number is given as " << a << endl;
    }
};
int main()
{
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    number z1(z); // copy cons invoked          // for copying x y and z objectss  with the help of constructor
    z1.display();

    z2 = x;
    z2.display(); // copy cons not invoked or called    if called it had to give that statement of constructor is copied
  //  as iin the copy constructor cout

    number z3 = z; // copy cons  invoked
    z3.display();
    return 0;
}