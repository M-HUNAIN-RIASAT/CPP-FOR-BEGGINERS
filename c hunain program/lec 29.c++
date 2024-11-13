#include <iostream>
using namespace std;

class complex
{
    //  creating a constructor
    // constructor are special type of member function in the class
    // used to initialize the object of the calss
    // invoked whenever an object in declared or used.
    int a, b;

public:
    complex(void); // constructor decalaration    ************default constructor (no parameter required)*************   //jis function ka nmae class ke name ke gesa hoo to us ko constructor kahain gae

    void printdata()
    {
        cout << "the number is given as:" << a << "+" << b << "i" << endl;
    }
};


complex ::complex(void)     //defination of constructor
{
     a = 59;
     b = 3;
     cout<< "Hello World"<<endl;
}

int main()
{
    complex c;
    c.printdata();

    return 0;
}
/*       PROPERTIRS OF THE CONSTRUCTOR
1. THEY ARE WRITTEN IN THE PUBLIC SECTION OF THE CLASS
2. THEY ARE INVOKED AUTOMATICALLY WHENEVER AN OBJECT IS CREATED
3. THEY DOES NOT RETURN ANYTHING IE: VALUE OR DATA TYPE
4. CONSTRUCTORS HAVE DEFAULT ARGUMENETS IE A,B 
5. IF WE ADD ANY COUT IN THE CONSTRUCTOR THEN EVERY TIMR IT GIVES RESULT WHEN IT IS CALLED
6. WE CAN NOT REFER TO THEIR OBJECT.


*/