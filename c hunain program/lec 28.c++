//                      **** FRIENDSHIP BETWEEN 2 CLASSES AND FUNCTION 
#include <iostream> //iss main colours se guidnace lae kar clas ke nmae or object ko compare karoo samaj ajaee ge
using namespace std;
class j; // forward declaration

class k
{
    int a;

public:
    void setdata(int v)
    {
        a = v;
    }
    friend void sum(k, j);
};
class j
{
    int b;

public:
    void setdata(int v)
    {
        b = v;
    }
    friend void sum(k, j);
};
void sum(k o1, j o2)
{
    cout << "the sum of the numbers is " << o1.a + o2.b << endl;
}
int main()
{
    k object1;
    object1.setdata(9);
    j object2;
    object2.setdata(7);
    sum(object1, object2);

    return 0;
}
