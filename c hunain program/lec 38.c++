// *********************************   SINGLE INHERITENCE   ***********************************
#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int base ::getdata1()
{
    return data1;
}
int base ::getdata2()
{
    return data2;
}

class derived : public base
{
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    data3 = data2 * getdata1();
}
void derived ::display()
{
    cout << "the value of data1 is " << getdata1() << endl;
    cout << "the value of data2 is " << data2 << endl;
    cout << "the value of data3 is " << data3 << endl;
}

int main()
{
    derived object;
    object.setdata();
    object.process();
    object.display();
    return 0;
}
/*
note :
     agar main visibility mode ko private kar doon to base ke sare public wale derived ke private ban jaeen gae to phir main 
       setdata ko seda main main callni kar sakta 
       is ka hall ye hae ke main is koo processs main hi call karwaa dooo yani 
      
       void derived:: process(){
        sedata();   <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        data3 = data2 * getdata1();
       }
       
       is tarha ye call ho jae ga or sare results pehlae ke tarha hi mailain gaen
       */