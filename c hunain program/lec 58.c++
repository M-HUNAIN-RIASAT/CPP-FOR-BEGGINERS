// **********************************   ___________ABSTRACT BASE CLASS AND PURE VIRTUAL FUNCTION:______
#include <iostream>
#include <cstring>
using namespace std;

class htr // abstract base class "class containing pure virtual function"**** it ensures the formation of derived classes having function that will replce the pure virtual function
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
    virtual void display() = 0; // do nothing function --->  pure virtual function   ***** yani ab is ki replacement main functions derived class mein dalna hi pare ga
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
    textcontent(string n, float r, int w) : htr(n, r)
    {
        words = w;
    }
    void display()
    {
        cout << "the title of the string is given as " << name
             << " with the rating of " << rating
             << " and the number of words are " << words << endl;
    }
};

int main()
{

    string n = "NOOR TUTORIALS";
    float t = 4.65;
    double v = 4.00;
    int w = 90;

    // htr obj(n, t);  //yahan is ki zaroorat ni kiunm  ke pure virtual functtion kuch ni kare ga ab wo pure hai with zero argument bas har dafa wo replace ho aje ag
    // obj.display();

    videos obj1(n, t, v);
    textcontent obj2(n, t, w);

    htr *ptr[3];
    // ptr[0]= & obj;
    ptr[1] = &obj1;
    ptr[2] = &obj2;

    // ptr[0]->display();
    ptr[1]->display();
    ptr[2]->display();

    return 0;
}
