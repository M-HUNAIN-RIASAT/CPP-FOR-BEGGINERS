//*********************************   MULTILEVEL IN HERITENCE    **************************
#include <iostream>
using namespace std;

class student
{
protected:
    int rollno;

public:
    void set_rollno(int r)
    {
        rollno = r;
    }
    void get_rollno()
    {
        cout << "roll number of the student is " << rollno << endl;
    }
};

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void get_marks()
    {
        cout << "marks obtained in maths are " << maths << endl;
        cout << "marks obtained in physics are " << physics << endl;
    }
};

class result : public exam
{
protected:
    float percentage;

public:
    void display_result()
    {
        get_rollno();
        get_marks();
        cout << "the percentage is " << (maths + physics)/2 <<"%" << endl;
        }
};

int main()
{
    result hunain;
    hunain.set_rollno(102);
    hunain.set_marks(92, 98);
    hunain.display_result();
   
    result harry;
 harry.set_rollno(103);
 harry.set_marks(100, 99);
 harry.display_result();
    return 0;
}