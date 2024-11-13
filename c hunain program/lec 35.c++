#include <iostream>
using namespace std;
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "THIS IS THE TIME WHEN CONSTRUCTOR IS CALLED FOR OBJECT " << count << endl;
    }
    ~num()
    {
        cout << "THIS IS THE TIME WHEN DISTRUCTOR IS CALLED FOR OBJECT " << count << endl;
        count--;
    }
};

int main()
{
    cout << "entering in the main " << endl;
    cout << "GIVING THE FIRST OBJECT " << endl;
    num n1;
    {
        cout << "entering in the block" << endl;
        cout << "GIVING THE SECOND AND THIRD OBJECT" << endl;
        num n2, n3;
        cout << "exiting from the block" << endl;
    }
    cout << "back to main " << endl;
    return 0;
}