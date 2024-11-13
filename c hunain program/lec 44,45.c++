//****************>>>>>>>>>>>>>>>     VIRTUAL   BASE   CLASS      <<<<<<<<<<<<<<********************************
#include <iostream>
using namespace std;

class student
{
protected:
    int rollno;

public:
    void setrollno(int r)
    {
        rollno = r;
    }
    void print_rn()
    {
        cout << "the roll no. of the student is " << rollno << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void setmarks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void print_ms()
    {
        cout << "the marks are " << endl
             << "in maths : " << maths << endl
             << "in physics : " << physics << endl;
    }
};
class match : virtual public student
{
protected:
    float scores;

public:
    void setscores(float s)
    {
        scores = s;
    }
    void print_ss()
    {
        cout << "the scores are obtained as: " << scores << endl;
    }
};
class finalresult : public test, public match
{
protected:
    float total;

public:
    void display()
    {
        total = maths + physics + scores;
        print_rn();
        print_ms();
        print_ss();
        cout << " the final marks are as: " << total << endl;
    }
};

/*
NOTE:
 VIRTUAL BASE CLASS -------->>>>>       "student"    BANANE KA FAEEDA;
               ROLL NO. JO PUBLICALLY TEST OR MATCH CLASS KO INHERIT HUA THA WO DO DAFA INHERIT HO KAR
                FINALRESULT  CLASS MAIN NI AYA



*/
int main()
{
    finalresult hunain;
    hunain.setrollno(102);             //agar virtual class na hote to yahan pr aumbiguity ka error a jata 
    hunain.setmarks(98, 87);
    hunain.setscores(10);
    hunain.display();

    return 0;
}