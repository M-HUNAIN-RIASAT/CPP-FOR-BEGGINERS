# include<iostream>
 using namespace std;

// >> C++ control structure >>>>    Sequence       /   selection   /     loop structure


// *************************************************sequence controll  structure****************


// int main(){
//     int a=1 , b=3;
// cout<<"the value of a is "<<a<<endl;
// cout<<"the value of b is "<<b<<endl;
// return 0; 
// }




// ******************************************Selection control structure  *****************************************
// **********************************with if else****************************

 int main(){
    int age;
    cout<<"tell me your age:"<<endl;
    cin>>age;
 if((age <18) && (age>1)){
        cout<<" you are not eligible for this post    wait for the right time"<<endl;
 }
else if(age==18){
cout<<"you are eligible with specifiv conditions    visit my website hunain.org"<<endl;
    }
else if(age<1){

    cout<<"you are not yet born baby  >>>>>>>>> try when ever you are born (lol)"<<endl;       
}
// (for adding option for 0 i made changes in the main if statement)
else{
cout<<"you are eligible for this post man    congrats!"<<endl;
 }
    return 0;
 }


// **********************************with swithch key****************************
// switch (expression)
// {
// case /* constant-expression */:  ie  (98)
//     /* code */                   ie  you are 98
//     break;

// default:
//     break;
// }
// so
 
//  int main(){
//     int age;
//     cout<<"tell me your age:"<<endl;
//     cin>>age;

//     switch (age) 
//     {
//     case (18):
//     /* constant-expression */
//         /* code */
//         cout<<"you are 18"<<endl;
//         break;
//     case (22):
//      /* constant-expression */
//         /* code */
//         cout<<"you are 22"<<endl;
//         break;
//     case (55):
//     /* constant-expression */
//         /* code */
//         cout<<"you are 55"<<endl;
//         break;
//     case (66):
//     /* constant-expression */
//         /* code */
//         cout<<"you are 66"<<endl;
//         break;
    
//     default: 
//     cout<<"no special case explained for your age by HUNAIN better luck next time"<<endl;
//         break;
//     }

// cout<<"done with switch case alternate of IF ELSE "<<endl;
// // the above one is used every time the case is identified and then break at that specific point in the switch
//     return 0;
//  }







