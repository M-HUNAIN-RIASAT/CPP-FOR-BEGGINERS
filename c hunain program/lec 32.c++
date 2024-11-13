// ******************************    CONSTRUCTORS WITH DEFAULT ARGUMENTS
#include <iostream>
using namespace std;
class kamal
{
    int x, y, z;

public:
    kamal(int a = 34, int b = 67, int c = 54)
    {
        x = a;
        y = b;
        z = c;
    }
    void printdata();
};
void kamal ::printdata()
{

    cout << "the value of x and y and z is given as:  " << x << "  and  " << y << "  and  " << z << endl;
}
int main()
{
    kamal object1(1, 2, 3);
    object1.printdata();

    kamal object2(1, 2);
    object2.printdata();

    kamal object3(1);
    object3.printdata();

    kamal object4;
    object4.printdata();


    return 0;
}