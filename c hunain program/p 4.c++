# include <iostream>
# include <cmath>  // pow function ke liyae
    using namespace std;
   
 
    int a=2;
  //  i am practicing the global and local variale here a = 2  is global variable and a = 3 is local variable 
  //  when ever in the code :: is not used the sum is given of a = 3   local variable only in that function
  //  and when :: scope resolution operator is used  first a is taken as  a == 2 then a = 3   global variable  that can b used in all the functions.


     int main(){
     //  int a=4;
     //  cout<<"sum = "<<a+a;
  
  //  SIMILARLY;
 // by uing scope resolution operator

//       cout<<"\nsum = "<<::a+a;

// // ***********************GOOD HO GEYA HUNAIN***********************

//  // now just for recreation and practice  i am going to multiply the a   so,
//       cout<<"\nproduct = "<<a*a;
//  // also
//       cout<<"\nproduct = "<<::a*a;


      return 0;
    }

