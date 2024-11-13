#include <iostream>
using namespace std;
// revisiting pointer array new and delete keyword or operator
//       & mean value at
//       * mean at adress or *b means value at adress b
int main()
{
    // int a = 100;
    // int* b= &a;
    // cout<<"the value at adress b is "<<a<<endl;
    // cout<<"the value at adress b is "<<*b<<endl;

    //    new operator ;
    int *u = new int(30);
    cout << "the value at u is given as " << *u << endl;
    int a = 4;
    // int *b = new int (5);
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    // delete arr[]; // causes the garbage values

    cout << "the value of a is " << a << endl;
    // cout<<"the value at adress b is "<<*b<<endl;
    cout << "the value of arr [0] is " << arr[0] << endl;
    cout << "the value of arr [1] is " << arr[1] << endl;
    cout << "the value of arr [2] is " << arr[2] << endl;

    return 0;
}