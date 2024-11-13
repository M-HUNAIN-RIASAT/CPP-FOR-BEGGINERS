#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) 
    { 
        counter =0; // agar main yahan 1 kar doon to phir output mae aik zeroa '0' value phir b aye ge jis ki price garbage value ho gi is liyae pehle id ke counter ke sath +1 likh do

    }
    void setprice(void)
    {
        cout << "enter id of your item # " << counter+1 << endl;
        cin >> itemid[counter];
        cout << "enter price of your item # " << counter+1 <<endl;
        cin >> itemprice[counter];
        counter++;
    }
    void displayprice(void)
    {
        for (int i = 0; i < counter; i++)
        {
            cout << "the price for id " << itemid[i] << "  is given as " << itemprice[i] << endl;
        }
    }
};
// in this lecture i use to define he member funtions with in the class for better understanding
int main()
{
    shop hunainmart;
    hunainmart.initcounter();

    // hunainmart.setprice();
    // hunainmart.setprice();
    // hunainmart.setprice();
    char choice = 'y';
    
    while (choice == 'y')
    {
    hunainmart.setprice();
       cout<<"do you want to add another item? (y/n) "<<endl; 
       cin>>choice;
    }
    
    hunainmart.displayprice();

    return 0;
}