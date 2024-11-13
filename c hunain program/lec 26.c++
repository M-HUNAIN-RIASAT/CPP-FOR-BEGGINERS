//                      **** FRIENDSHIP BETWEEN CLASS AND FUNCTION OUT OF CLASS
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setnumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    friend complex sumcomplex(complex N, complex M);

    void printdata()
    {
        cout << "the number is given as:" << a << "+" << b << "i" << endl;
    }
};

complex sumcomplex(complex N, complex M)
{
    complex P;
    P.setnumber((M.a + N.a), (M.b + N.b));
    return P;
}

int main()
{
    complex c1, c2, sum;
    c1.setnumber(4, 8);
    c1.printdata();

    c2.setnumber(2, 8);
    c2.printdata();

    sum = sumcomplex(c1, c2);
    sum.printdata();

    return 0;
}

/*     PROPERTIES OF FRIEND FUNCTION :
1. CANT BE CALLED WITH OIN THE SCOPE OF THE CLASS
2. CANT BE CALLED BY A SINGLE OBJECT OF  A CLASS
3. IN FRIEND FUNCTION TWO OBJECTS ARE SENT AS ARGUMENTS TO THE MEMBER FUNCTION
4. CANT BE INVOKED WITH AN OBJECT
5. CAN BE DECLARED INSIDE  THE PUBLIC OR PRIVATE ACCESS MODIFIER
6.IT CAN NOT ACCESS THE MEMBER BY NAME NEED OBJECT_NAME.MEMBER_NMAE TO ACCESS ANY NAME.
      complex P;
    P.setnumber((M.a + N.a), (M.b + N.b));
    return P;









*/