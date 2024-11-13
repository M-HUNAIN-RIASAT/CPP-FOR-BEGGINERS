// ---------------------->>>>>>>>>>>>>     lec 46    <<<<<<<<<<<<<<-------------------------------
/*
  CONSTRUCTOR IN CPP:
  BASICALLY IN c++ constructors are used with in the base or derived class

  mutlilevel inheritence:
     is main aik ke baaad aik a jata hae yani derived class main main base ka constructor simply run kar sakta hoon

 multiple inheritence:
 is main base 1 or base 2 ke constructors main ses jo b main pehlae doon ga derived main wo pehlae chalee ga
derived constructor (int 1,int 2,int 3,int 4,int 5,int 6)   :   base (int 1,int 2) , base (int 3,int 4) { 
    int  4 = e;
  int 5 = f;
  
  } 

 EXCEPTION:
 agar multiple inheritence main mere pass koi virtual base class b hae to wo automatically sab se pehlae chale ge or
  phir us ke baad hi mere bataeee hue class ka constructor run ho ga

*/

// ---------------------->>>>>>>>>>>>>     lec 47    <<<<<<<<<<<<<<-------------------------------
// lecture no  42 ke question ka answer by harrybhai
/*
Exercise Question
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
#include <iostream>
#include <cmath>
using namespace std;
class simplecal
{
    int a;
    int b;

public:
    void setnum(int x, int y)
    {
        a = x;
        b = y;
    } 
    void display()
    {
        cout << "the sum of the numbers are given as " << a + b << endl;
        cout << "the sub of the numbers are given as " << a - b << endl;
        cout << "the div of the numbers are given as " << a * b << endl;
        cout << "the multi of the numbers are given as " << a / b << endl;
    }
};
class scientificcal
{
    int a;
    int b;

public:
    void setnim(int l, int m)
    {
        a = l;
        b = m;
    }

    void display()
    {

        cout << "the squares of theS numbers are given as  " << (a*a) << endl;
        cout << "the sqrt of the numbers are given as  " << sqrt(a) << endl;
        cout << "the cube of the numbers are given as  " << (a*a*a) << endl;
        cout << "the cube of the numbers are given as  " << cbrt(a) << endl;
        cout<<"the sin value of a is given as"<<sin(a)<<endl;
        cout<<"the sin value of b is given as"<<sin(b)<<endl;
        cout<<"the cos value of a is given as"<<cos(a)<<endl;
        cout<<"the cos value of b is given as"<<cos(b)<<endl;

    }
};
class hybridcal : public simplecal, public scientificcal
{
public:
    void setdata(int x, int y)
    {
        simplecal ::setnum(x, y);
        scientificcal ::setnim(x, y);
    }
    void display()
    {
        simplecal ::display();
        scientificcal ::display();
    }
};

int main()
{
    hybridcal k;
    k.setnum(2, 3);
    k.display(); 

    return 0;
}