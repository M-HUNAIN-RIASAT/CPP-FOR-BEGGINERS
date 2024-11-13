#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "enter the binary numaber" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary input given by you kindly recheck the string only binaries are allowed" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "displaying the compliment of your number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}


int main()
{
    // OOPs
    // Classes and objects
    // C++ --> initially called --> C with classes by stroustroup
    // class --> extension of structures (in C)
    // structures had limitations
    //    - members are public
    //     - No methods
    // classes --> structures + more
    // classes --> can have methods and properties
    // classses --> can make few members as private & few as public
    // structures in C++ are typedefed
    // you can declare objects along with the class declarion
    // class Employee{
    // Class definition
    // } harry, rohan, lovish;

    //   Nesting of member function   means calling a member function by or after the other member function like "read">>"chk_bin">>"one_compliment">>"display".
    binary b;
    b.read();
    b.chk_bin();
    b.ones_compliment();
    b.display();

    return 0;
}