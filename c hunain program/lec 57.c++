#include <iostream>
#include <cstring>
using namespace std;

class htr
{
protected:
    string name;
    float rating;

public:
    htr(string n, float r)
    {
        name = n;
        rating = r;
    }
     virtual void display()       //agar yahan par virtual na hota to 3 dafa display main base wala display hi run ho ajna tha
    {
        cout << "the title of the string is given as " << name << " with the rating of " << rating << endl;
    }
};

class videos : public htr
{
protected:
    float vlength;

public:
    videos(string n, float r, double vl) : htr(n, r)
    {
        vlength = vl;
    }
    void display()
    {
        cout << "the title of the string is given as " << name 
             << "with the rating of " << rating
             << "and length of " << vlength << endl;
    }
};

class textcontent : public htr
{
protected:
    int words;

public:
    textcontent (string n, float r, int w) : htr(n, r)
    {
        words = w;
    }
    void display()
    {
        cout << " the title of the string is given as " << name 
             << " with the rating of " << rating 
             << " and the number of words are " << words << endl;
    }
};

int main()
{
    // htr obj;
    // string n = "HUNAIN TUTORIALS";
    // float t = 4.65;
    // double v = 4.00;
    // int w = 90;
    // obj.setdata(n, t);
    // obj.display();
    // videos obj1;
    // textcontent obj2;
    // htr *ptr[2];

    // ptr[0] = &obj1;
    // ptr[1] = &obj2;
    // ptr[0]->setdata(n, t, v);
    // ptr[0]->display();

string n = "NOOR TUTORIALS";
    float t = 4.65;
    double v = 4.00;
    int w = 90;
    // htr obj;
    htr obj(n,t);
    obj.display();

videos obj1(n,t,v);
textcontent obj2(n,t,w);

htr * ptr[3];
// ptr[0]= & obj;
ptr[1]= & obj1;
ptr[2]= & obj2;

// ptr[0]->display();
ptr[1]->display();
ptr[2]->display();

    return 0;
}


/*
rules for virtual functions
1. they can be static
2. they can be accessed by the object pointer
3.virtual function can be an objet of another class
4.there is no necessaty of redefining the funtion that is already defined in the virtual basee class
*/


