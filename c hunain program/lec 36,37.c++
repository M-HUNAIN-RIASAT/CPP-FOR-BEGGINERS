#include <iostream>
using namespace std;
// base class
class employee
{

public:
    int id;
    float salary;
    employee() {}   //ye default constructor hae or derived jab chalti to base class ka default chalate too is liyae ye zaroori hae
    
    employee(int inpin)
    {
        id = inpin;
        salary = 34.0;
    }
    void print()
    {
        cout << "the id  is given as " << id << endl;
        cout << "the salary  is given as " << salary << endl;
    }
};
// syntax of derived class
/*
class {{derived class name}}   : {{visibility mode}}   {{base class name}}
{
member  ,  method ,functions  ,etcc.............
}

NOTE:
1 default visibility mode is public
2 private visibility mode : is me base class ke public member become private of derived
3 public visibility mode : is me base class ke public member become public of derived
4 base ke private member can never be accessible
*/

// creating a derived classs
class programmer :  employee
{
public:
    int languagecode = 6;
    programmer(int inpin)
    {
        id = inpin;
    }
    void getprint(){
     cout << "now throough derived class the id  is given as " << id << endl;
        cout << "by derived class the salary  is given as " << salary << endl;//yahan terminal main mujh ko salary ini milay ge as salarynow private or wo hae salary = 34.0 to garbage value aee ge
        cout << "by derived class the language code is given as " << languagecode << endl;

    }
};

int main()
{
    employee hunain(1);
    hunain.print();

    cout << hunain.salary << endl; // ye print function banaee bagair ssalary ko lokhnae ka tareka hae elkin yaad rahe is main salary private ni public  hae

    programmer harry(9);
    //    cout<<harry.id<<endl;  ab ye id programmer class ka private member hae tu yuu access na ho ag
    cout << harry.languagecode << endl;

    harry.getprint();
    return 0;
}