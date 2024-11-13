#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);  // DECLARATION
        void getdata()
    {
        cout << "the value of a is  given as : " << a << endl;
        cout << "the value of b is  given as :" << b << endl;
        cout << "the value of c is givenas : " << c << endl;
        cout << "the value of d is given as : " << d << endl;
        cout << "the value of e is given as : " << e << endl;
    }
};
void employee::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee harry;
    harry.d = 34;
    harry.e = 84;
    harry.setData(1, 2, 3);
    harry.getdata();

    return 0;
}