#include <iostream>
using namespace std;

class student{                  //class me mene ye note kia hae ke koi  b variable as a name ni likha ja raha har aik pr no. hi likhanee pare hain
private:
int name, grade, fee;
public:
int city, school;

void setdata(int a,int b ,int c){
name= a;
grade= b;
fee= c;
}
void getData(){
    cout<<"the name of the student is "<<name<<endl;
    cout<<"the grade of the student is "<<grade<<endl;
    cout<<"the fee  of the student is "<<fee<<endl;
    cout<<"the city of the student is "<<city<<endl;
    cout<<"the school of the student is "<<school<<endl;
}
};

int main(){
    student seerat;
    seerat.city= 23 ;
    seerat.school=   2011 ;
    seerat.setdata(889,9,89); 
seerat. getData();
    return 0;
}