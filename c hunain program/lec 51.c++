// ******************************   POINTER TO OBJECTS AND ARROW OPERATOR IN CPP

#include <iostream>
using namespace std;

class complex
{
    int imaginary, real;

public:
    void setdata(int a, int b)
    {
        imaginary = a;
        real = b;
    }
    void getdata()
    {
        cout << "the value of imaginary is " << imaginary << endl;
        cout << "the value of real is " << real << endl;
    }
};

int main()
{
    complex c;
    // c.setdata(4, 3);
    // c.getdata();

//the use of pointer in placeof object 
    // complex *ptr = &c;
    // (*ptr).setdata(4, 3);
    // (*ptr).getdata();


// the use of arrow in between pointer and object   -> means dereference the ptr
    // complex *ptr = &c;
    // (ptr)->setdata(4, 3);
    // (ptr)->getdata();


// the use of new operator
complex *ptr = new complex;    //is ne ab aik neya object bana ddeya yani ab eseee complex c ki zaroorat ni ahe
(ptr)->setdata(2,5);
(ptr)->getdata();

complex *ptr1 = new complex[3];
ptr1[3].setdata(2,5);
ptr1[3].getdata();


    return 0;
}