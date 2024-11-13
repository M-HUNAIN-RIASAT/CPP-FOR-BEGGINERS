// example of order of constructor in lec 46
#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    base1(int a)
    {
        data1 = a;
        cout << "the base1 constructor is called here" << endl;
    }
    void displaydata1()
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int b)
    {
        data2 = b;
        cout << "the base2 constructor is called here" << endl;
    }
    void displaydata2()
    {
        cout << "the value of data2 is " << data2 << endl;
    }
};
class derived :  public base1, public base2
{
    int data3, data4, data5;

public:
    derived(int a, int b, int c, int d, int e) :base1(a) , base2(b) 
    {
        data3 = c;
        data4 = d;
        data5 = e;
        cout << "the derived constructor is called here" << endl;
    }
    void displayderived()
    {
        // base1 ::displaydata1();
        // base2 ::displaydata2();
        cout << "the value of data3 is " << data3 << endl;
        cout << "the value of data4 is " << data4 << endl;
        cout << "the value of data5 is " << data5 << endl;
    }
};

int main()
{
    derived hunain(1, 2, 3, 4, 5);
    hunain.displaydata2();
    hunain.displaydata1();
    hunain.displayderived();
    return 0;
}