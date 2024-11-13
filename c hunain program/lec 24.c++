#include <iostream>
using namespace std;

class employee
{
    int id;
    // int count;   //is ki jaga int count=o; ana par phir har object ka apna count or har dafa emoloyee no 1 ana thats a garbage
    static int count; // now it is the the variable of a class and not of an object

public:
    void setdata()
    {
        cout << "enter the id of employee: " << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "the id of the employee is: " << id << " and the employyeee numberis " << count << endl;
    }
    static void getcount()
    {
        cout << "the value of count is: " << count << endl;  
    }
};

int employee ::count ; //  this is the defination of a public  access modifier >>static ke liyae class ke andar ni balke bahir lagana hae
// count s the static memeber>> default zero se srart ho ga.

int main()
{
    employee harry, hunain, zuraiz;

    harry.setdata();
    harry.getdata();
    employee ::getcount();

    hunain.setdata();
    hunain.getdata();
    employee ::getcount();

    zuraiz.setdata();
    zuraiz.getdata();
    employee ::getcount();

    return 0;
}