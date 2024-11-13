
// #include <iostream>
// using namespace std;

// class Rectangle {
// private:
//     double length;
//     double width;
//     double area;

// public:
//     // Constructor to initialize length and width, and calculate area
//     Rectangle(double l, double w) {
//         length = l;
//         width = w;
//         area = length * width;
//     }

//     // Method to display the area of the rectangle
//     void showArea() {
//         cout << "The area of the rectangle is " << area << endl;
//     }
// };

// int main() {
//     double length, width;

//     // Prompt the user to enter the length and width
//     cout << "Enter the length of the rectangle: ";
//     cin >> length;
//     cout << "Enter the width of the rectangle: ";
//     cin >> width;

//     // Dynamically initialize the Rectangle object using the constructor
//     Rectangle c(length, width);

//     // Display the area of the rectangle
//     c.showArea();

//     return 0;
// }

#include <iostream>
using namespace std;

class BankDeposit {
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r); // r can be a value like 0.04
    BankDeposit(int p, int y, int r);   // r can be a value like 14
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r) {
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++) {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r) {
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++) {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit::show() {
    cout << endl << "Principal amount was " << principal
         << ". Return value after " << years
         << " year(s) is " << returnValue << endl;
}

int main() {
    BankDeposit bd1, bd2;
    int p, y;
    float r;     //interest rate as decimal
    int R;     // interest rate as percentage

    cout << "Enter the value of p, y, and r (as a decimal):" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p, y, and R (as an integer percentage):" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}
// first in the terminal enter the interest rate in the form of 0.05 ie in decimal bcz 1st i show the constructor with r in the class
// then secondly in the terminal enter the interest rate in the form of 5 ie in percentage bcz  i show the constructor with R in the class by a slight changes in the 
