// *********************************    CONSTRUCTOR OVERLOADING
#include <iostream>
using namespace std;
//**********constructor overloading **********************
class complex
{
    int x, y;

public:
    complex(int a, int b)
    {
        x = a;
        y = b;
    }
    complex(int a)
    {
        x = a;
        y = 0;
    }
    complex(void) // default constructor
    {
        x = 0;
        y = 0;
    }
 
    void printdata()
    {
        cout << "the number is given as: " << x << " + " << y << "i" << endl;
    }
};
int main()
{
    complex d(3, 4);
    d.printdata();

    complex e(9);
    e.printdata();

    complex p;
    p.printdata();

    
    return 0;
}