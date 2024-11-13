#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid()
    {
        cout << "Enter the id of the person: " << endl;
        cin >> id;
    }
    void getid()
    {
        cout << "the id of the employe is given as : " << id << endl;
    }
};
int main()
{
    // employee harry,hunain ,abdullah;          // ##&&*****zeyada objects ko arrray me dal kar for loop laga detae hain
    // harry.setid();
    // harry.getid();
    employee fb[5];
    for (int i = 0; i <= 5; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}