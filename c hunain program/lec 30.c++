#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int, int); //************Parameterized constructor ( Accept parameter )*************

    void printdata()
    {
        cout << "the number is given as:" << a << "+" << b << "i" << endl;
    }
};
complex ::complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    // IMPLICIT CALL;
    complex d(9, 6);
    d.printdata();

    // EXPLICIT CALL;
    complex e = complex(3, 7);
    e.printdata();

    return 0;
}