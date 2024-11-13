#include <iostream>
using namespace std;
/*
syntax for initialization of arguments in the constructor:
constructor (arguments):  intializatin section
{
    code or description.
}

for example:
class test{
    int a;
    int b;
    public:
test (int x , int y) :  a(x) , b (y){
    cout<<"constructors arguments are inilialized"<<endl;
}
};
*/

class test
{
    int a;
    int b;

public:
    // test(int x, int y) : a(x), b(y)
    // test(int x, int y) : a(x), b(y+x)
    // test(int x, int y) : a(x), b(y+a)
    // test(int x, int y) : a(x), b(y*4)
    // test(int x, int y) : b(y+x), a(x)
    // test(int x, int y) :  b(y) ,a(x+y)
    test(int x, int y) : b(y), a(x + b) // ..........//red falg as int a is given first

    {
        cout << "constructors arguments are inilialized" << endl;
        cout << "the value of a is given as " << a << endl;
        cout << "the value of b is given as " << b << endl;
    }
};
int main()
{
    test hunain(10, 20);

    return 0;
}