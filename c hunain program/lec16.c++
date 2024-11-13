#include <iostream>
using namespace std;

int sum(int x, int y){                 
int z= x+y;                     
return z;
}
// this will not swap 
// void swap(int a ,int b){  //temp  a    b
// int temp = a;            //4     4    5
// a = b;                   //4     5    5              
// b = temp;   }             //4     5    4 

// this will swap                       // call by reference using Pointers***************
// void swapPointer(int* a ,int* b){  //temp  a    b
// int temp = *a;            //4     4    5
// *a = *b;                   //4     5    5              
// *b = temp;     }           //4     5    4

// this will alssoo   swap                    // call by reference using    c++ reference variable  ***************
// int & 
void swapReferenceVar(int &a ,int &b){  //temp  a    b
int temp = a;            //4     4    5
a = b;                   //4     5    5              
b = temp;  }
// return a;   }           //4     5    4

int main(){
    int a=4,b=5;
    // cout<<"the sum of 4  and  5   is "<<sum(a,b)<<endl;
    cout <<"the vallue of a is  "<<a<<" the value of b is  "<<b<<endl; 
    // swap(a,b);
    // swapPointer( &a,&b);
    swapReferenceVar( a,b);            //for chnagingb the value of a here (a,b)=760 and in the place of void>> int & is used and return a;  is used that give s a =760 in the answer.
    cout <<"the vallue of a is  "<<a<<" the value of b  "<<b<<endl; 
    return 0;
}