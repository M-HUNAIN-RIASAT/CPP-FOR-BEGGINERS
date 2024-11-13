#include <iostream>
using namespace std;

class shopitem
{
    int itemid;
    float price;

public:
    void setdata(int a, float b)
    {
        itemid = a;
        price = b;
    }
    void getdata()
    {
        cout << "the id and price is given as " << itemid << "and "
             << price << endl;
    }
};

int main()
{
    int size = 3;
    //     shopitem c;
    //     c.setdata(1001,3.7);
    //     c.getdata();
    shopitem *ptr = new shopitem[size];      //s ixe = 3 so 3 objects are created.
    shopitem *ptrtemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {                                                                           //   1   2   3
        cout << "enter id and price" <<i+1<< endl;                              //           ^
        cin >> p >> q;                                                          //           |                 ptr++ 3 se age chala jae ga pr ptrtemp ni jae ga to koi error ni aye ga yani ke grbage value
        ptr->setdata(p, q);                                                     //           |                    kiun keptr ne 3 store kar liyae pr wapis zero par nahi aeee ge
        ptr->getdata();  //ye elehda for main likhoon ga                       //           ptr      
        ptr++;                                                                 // ptrtemp  
    }
    // for (i = 0; i < size; i++)
    // {    //     cout << "THE ITEM ID IS " <<i+1<< endl;
    //     ptrtemp->getdata();
    //     ptrtemp++;
    // }

    return 0;
}