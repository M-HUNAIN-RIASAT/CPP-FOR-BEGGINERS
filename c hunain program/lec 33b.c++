#include <iostream>
#include <cmath>
using namespace std;
class grades
{
    string name;
    int phygrade;
    int chemgrade;
    int biograde;
    int mathgrade;
    int average;

public:
grades (){};
    grades(string n, int p, int c, int b, int r)
    {
        name = n;
        phygrade = p;
        chemgrade = c;
        biograde = b;
        mathgrade = r;
        average = (phygrade+chemgrade+biograde+mathgrade)/4;
    }

    void print()
    {
        cout << "the average marks of " << name << " is " << average << endl;
    }
};
int main()
{

    string name;
     int  p, c, b, r;
    cout << "enter the name" << endl;
    getline(cin,name);
    cout << "enter the value of marks in physics ,chemistry, biology and maths" << endl;
    cin >> p >> c >> b >> r;
 grades student (name, p, c, b, r);
    student.print();
    return 0;
}