//                      **** FRIENDSHIP BETWEEN CLASS AND FUNCTION OF ANOTHER CLASS
#include <iostream>
using namespace std;
class complex; // FORWARD DECLARATION

class calculator
{
public:
    int sumrealcomplex(complex, complex);
    int sumCOMPcomplex(complex, complex);
};

class complex
{
    int a, b;
    // MAKING INDIVIDUAL FUNCTION AS FRIEND
    friend int calculator ::sumrealcomplex(complex, complex);
    friend int calculator ::sumCOMPcomplex(complex, complex);
    // MAKING FULLL CLASS AS FRIEND
    // friend class calculator;

public:
    void setnumbers(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printnumbers()
    {
        cout << "the value is: " << a << "+" << b << "i" << endl;
    }
};
int calculator ::sumrealcomplex(complex m, complex n)
{
    return (m.a + n.a);
}
int calculator::sumCOMPcomplex(complex m, complex n)
{
    return (m.b + n.b);
}

int main()
{
    complex d, e ;
    d.setnumbers(2, 3);
    d.printnumbers();
    e.setnumbers(5, 9);
    e.printnumbers();

    calculator u;
    int result = u.sumrealcomplex(d, e);
    cout << "the sum of the real part is given as : " << result << endl;
    int resultCOMP = u.sumCOMPcomplex(d, e);
    cout << "the sum of the COMPLEX part is given as : " << resultCOMP << endl;

    return 0;
}