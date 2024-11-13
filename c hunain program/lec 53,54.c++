#include <iostream>
using namespace std;

class hunain
{
    int h;

public:
    // void setdata(int h){
    //     this->h=h;
    hunain &setdata(int h)
    {
        this->h = h; // just like huanin u;    jis ka object banata tha yhan pr b class ka name & or phir ye aik object return kar raha hae
        return *this;
    }
    void getdata()
    {
        cout << "the value of h is given as " << h << endl;
    }
};
// this    is a pointer that points the member  or variable of teh objects
// ->     used to access member of an object

int main()
{
    hunain u;
    u.setdata(200).getdata();
    // u.getdata();
    return 0;
}


// lecture no .54
/*

                POLYMORPHISM:
 THERE ARE TWO TYPES OF POLYMORPHISM :
 1. COMPILE TIME POLYMORPHISM
 IT IS OBTAINED BY;
   1.1 FUNCTION OVERLOADING
   1.2 OPERATOR OVERLOADING
2.  RUN TIME POLYMORPHISM
 IT IS OBTAINED BY;
   2.1 VIRTUAL FUNCTIONS









*/