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
protected:
  int num1;
  int num2;

public:
 void setnum(int a, int b)
  {
    num1 = a;
    num2 = b;
  }
  int sum(int num1, int num2)
  {
    int z1 = num1 + num2;
    return z1;
  }
  int sub(int num1, int num2)
  {
    int z2 = num1 - num2;
    return z2;
  }
  float div(float num1, float num2)
  {
    float z3 = num1 / num2;
    return z3;
  }
  int multi(int num1, int num2)
  {
    int z4 = num1 * num2;
    return z4;
  }
  void display()
  {
    cout << "the sum of the numbers are given as " << sum(num1, num2) << endl;
    cout << "the sub of the numbers are given as " << sub(num1, num2) << endl;
    cout << "the div of the numbers are given as " << div(num1, num2) << endl;
    cout << "the multi of the numbers are given as " << multi(num1, num2) << endl;
  }
};
class scientificcal
{
protected:
  int nim;
  int nim2;

public:
  void setnim(int x , int y)
  {
    nim = x ;
    nim2 =  y=1 ;
  }
  double sqr(double nim)
  {
    double y1 = nim *  nim;

    return  y1;
  }
  float sqroot(float nim)
  {
    float y2 = sqrt(nim);

    return  y2;
  }
   cube(double nim)
  {
    double y3 = nim * nim * nim;
    return y3;
  }
  double cbroot(double nim)
  {
    double y4 = cbrt(nim);
    return y4;
  }
  void display()
  {

    cout << "the squares of theS numbers are given as  " << sqr(nim) << endl; //"and "<<sqr(num2) << endl;
    cout << "the sqrt of the numbers are given as  " << sqrt(nim) << endl;   // "and" <<sqrt(num2) << endl;
    cout << "the cube of the numbers are given as  " << cube(nim) << endl;   //"and" <<cube(num2) << endl;
    cout << "the cube of the numbers are given as  " << cbrt(nim) << endl;   //"and"<<cbrt(num2 ) << endl;
  }
};
class hybridcal : public simplecal, public scientificcal
{
public:
void setdata(int x ,  int y){
simplecal ::setnum(x,y);
scientificcal :: setnim(x,y);

}
void display(){
simplecal :: display();
scientificcal :: display();
}

};

int main()
{
  // simplecal c1;
  // c1.setnum(2);
  // c1.display();

  // scientificcal c2;
  // c2.setnim(9);
  // c2.display();

  hybridcal k;
  k.setdata(2,3);
  k.display();

  return 0;
}