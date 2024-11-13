#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;



class solution{

double pow(double x;int y){
double y=n;
int count =1;
double result =1;
bool flag==0;
if(n==0)return 1;
if(n==1)return x;


if(n<0){
    n=-n;
    flag=1;
}
else{
    flag=0;
}
while(n>0){
    if(n%2==0){
        res=x*x;
        n=n-2(count);
        count++;

    }
    else{
        for(int i=1;i<=n;i++){
            res*=x;
        }
    }
}
if (flag==1){
    res=1.0/res;

}


}
return res;

}


int main()
{
    cout << "********************************************" << endl;
    cout << "*** PROGRAMMING FUNDAMENTALS-LAB ***" << endl;
    cout << "*** LAB WEEK 5 ***" << endl;
    cout << "*** FA24-BSE-083 ***" << endl;
    cout << "*** MUHAMMAD HUNAIN ***" << endl;
    cout << "********************************************" << endl;
    cout << "\n"
         << endl;

    // cout << "\t******************** TASK 1 ************************" << endl;
    // int num,counter =0;

    // do{
    //         cout<<"enter the number"<<endl;
    //         cin>>num;
    //     if(num<=1){
    //         cout<<"ERROR !"<<"\n Enter a valid number greater than 1"<<endl;
    //     }

    // }while(num<=1);  // for condition true it terminate the loop
    //                  // for condition false it return again at the loop

    // while(num>1){
    //       if(num%2==0){
    //         num/=2;
    //       }
    //         else{
    //             num = num*3+1;
    //         };
    //         if(num==1){
    //             break;
    //         }
    //         counter++;
    //         cout<<"next value is "<< num<<endl;
    //       };
    //       cout<<"the final value is "<<num<<"\n number of steps "<<counter<<endl;

    cout << "\n******************** TASK 2 ************************" << endl;
    // int num1, num2, counter1 = 1;

    // // while((num1>0)&&(num2>0)){
    // while (true)
    // {
    //     cout << "enter the value of num1 : ";
    //     cin >> num1;
    //     cout << "enter the value of num2 : ";
    //     cin >> num2;

    //     if (num1 % num2 == 0)
    //     {
    //         cout << "the loop is ended" << endl;
    //         break;
    //     }
    //     else
    //     {
    //         cout << "sum  is given as " << (num1 + num2) << endl;
    //     };
    //     counter1++; //= counter1*2;
    // };

    // cout << "total integers entered are:" << 2 * counter1 << endl;

    cout << "\n******************** TASK 3 ************************" << endl;
    // char choice;                          // variable decleration

    //     int patternNumber;

    //     do {
    //         cout << " \nEnter the pattern you want to print (1,2,3 or 4): ";
    //         cin >> patternNumber;  // input from user

    //         switch (patternNumber) {
    //             case 1:
    //                 for (int i = 1; i <= 10; i++) {
    //                     for (int j = 1; j <= i; j++) {
    //                         cout << "* ";
    //                     }
    //                     cout << endl;
    //                 }
    //             //     break;
    //             // case 2 :
    //                 for (int i = 10; i >= 1; i--) {
    //                     for (int j = 1; j <= i; j++) {
    //                         cout << "* ";
    //                     }
    //                     cout << endl;
    //                 }
    //                 // break;
    //             // case 3 :
    //                 for (int i = 1; i <= 10; i++) {
    //        for (int j = 10 - i; j >= 1; j--) {
    //                         cout << "  ";
    //             }
    //         for (int k = 1; k <= i; k++) {
    //          cout << "* ";
    //                }
    //             cout << endl;
    //                 }
    //     // break;
    //             // case 4:
    //  for (int i = 10; i >= 1; i--) {
    //             for (int j = 10 - i; j >= 1; j--) {
    //                         cout << "  ";
    //             }
    //                     for (int k = 1; k <= i; k++) {
    //         cout << "* ";
    //         }
    //     cout << endl;
    //                 }
    //         break;
    //     default:
    //                 cout << "Invalid pattern choice. Please enter 1,2,3 or 4." << endl;
    //                 break;
    //         }
    // cout << "\n\n Do you want to print another pattern? \n Enter \" y \" for yes and \" n \" for no (y/n): ";  // output if user like to print more

    // cin >> choice;

    //     } while (choice == 'y' || choice == 'Y');   //condition

    cout << "\n******************** TASK 4 ************************" << endl;
    //

    // outer loop  row ko control karti hae yani ke ye aik colum banate hae or
    // is ko agar print karna ho to hum outer loop main jo i hae use cout mai lae ate hain as in table
    // innner loop row ki age further values ko deter mine karti hae

    // int sum = 0;
    // int number = 0;
    // cin>>number;
    // while (number < 20)
    // {
    // number++;                                  // break loop samjhaya mam ne lab mai 6 wali
    // sum += number;
    // if (sum >= 100)
    // break;
    // }

    // cout << "The number is " << number << endl;
    // cout << "The sum is " << sum << endl;

    // asg no.2
    // Write computer programs in C++ with proper comments and indentations that
    // a. Takes a number (integer) as input from the user, check and print if the number is zero, positive, or negative. It also checks and handle (only once) for input failure.
    // b. Takes a number (integer) as input from the user and determine the day of the week based on the number (e.g., 1 for Monday, 2 for Tuesday, and so on). Before determining the day of the week, the program also checks for valid input (i.e., number must be between 1 and 7) repeatedly. (Note: Use switch for implementation of selection structure.)

    // int x;
    // cout<<"enetr an integer"<<endl;
    // cin >>x;
    // if(x>0){
    //     cout<<"enetered number is positive"<<endl;
    // }
    // else if(x<0){
    //     cout<<"enetered number is negative"<<endl;
    // }
    // else if(x=0){
    //     cout<<"enetered number is zero"<<endl;
    // }
    // else{
    //     cout<<"enter a numerical integer"<<endl;
    // }

    // int daynum;
    // cout<<"enter a number between 1 and 7"<<endl;
    // cin>>daynum;
    // if(1>daynum>7){
    //     cout<<"please enter a number between 1 and 7"<<endl;
    // };
    // if(1<=daynum<=7){
    //     switch (daynum)
    //     {
    //     case 1:
    //       cout<<"today is MONDAY "<<endl;
    //         break;
    //     case 2:
    //       cout<<"today is TUESDAY "<<endl;
    //         break;
    //     case 3:
    //       cout<<"today is WEDNESDAY "<<endl;
    //         break;
    //     case 4:
    //       cout<<"today is THURSDAY "<<endl;
    //         break;
    //     case 5:
    //       cout<<"today is FRIDAY "<<endl;
    //         break;
    //     case 6:
    //       cout<<"today is SATURDAY "<<endl;
    //         break;
    //     case 7:
    //       cout<<"today is SUNDAY "<<endl;
    //         break;

    //     default:
    //         break;
    //     }
    // }
    // else{
    //     cout<<"please enter a number between 1 and 7"<<endl;
    // };

    // Write a computer program in C++ with proper comments and indentations that asks the user to input a positive number. It then finds and prints all the divisors of that number.
    // Important instructions:
    //  In case a user enters a negative number or zero, repeatedly prompt the user for positive number.
    //  The divisors must be printed in decreasing order and one divisor per line.
    // int n,number;
    // do{
    //     // cin.clear();
    //     // cin.ignore();
    //     cout<<"enter positive number"<<endl;
    //     cin>> number;
    //     if(number<=0){
    //         cout<<"please enter positive number"
    //     }
    // }while(number<=0);

    // for(n=number;n>=1;n--){   //AGAR N KI JAGA MAI 10 YA 100 RAKHTA TO WO USE RANGE MAI DIVIDER DEKHTA
    //     if(number%n==0){
    //     cout<<"the divisor is : "<<setw(5)<<n<<endl;  }
    // }

    // for(int i=1;i<=5;i++){
    //     for(int j=5-i;j>=1;j--){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i;k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // };
    // for(int i=5;i>=1;i--){
    //     for(int j=5-i;j>=1;j--){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i;k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // };

    // for (int i = 1; i <= 10; i++) {
    // cout<<"*";}
    // cout<<endl;
    // for (int i = 1; i < 3; i++) {
    //     for(int j = 1; j <=i; j++){
    //         cout<<"*        *"<<endl;;
    //     }

    // }
    //********************************************************************************             lec 3 lab */   ****************************************
    // cout<< internal;
    // cout<<"*"<< internal<<setw(10)  <<-7.8 <<"*"<<endl;

    // cout << "*" << "Hi there!" << "*" << endl;
    // cout << "*" << setw(20) << "Hi there!" << "*" << endl;
    // cout << right;
    // cout << setw(10) << -8.6 << endl;

    // long double b=-4789932,i=40976;

    // cout<<showpos;
    // cout<<b<<  i<<endl<<endl;
    // cout<<showbase;
    // cout<<uppercase;
    // cout<<hex<<b<<endl;

    // cout<<fixed;
    // cout<<b;
    // cout<<i;   //ye  e mai values deta hae ya phiir point laga kar zeros laga deta haes....... fixed wala manipulator
    // cout<<scientific;
    // cout<<setprecision(6);

    // float x=3.67,k=9.8;
    // cout<<showpoint;
    // cout<<x<<endl<<k;

    //***************************************************************************************************************************************************************************** */
    // float d;
    // int dollar,quarter,dime,nickel,cents,peny;
    // cout<<"enter a decimal value"<<endl;
    // cin>>d;
    // cents=d*100;
    // cout<<"$"<<d<<"="<<cents<<endl;
    // dollar=cents/100;
    // cents%=100;
    // quarter=cents/25;
    // cents%=25;
    // dime=cents/10;
    // cents%=10;
    // nickel=cents/5;
    // cents%=5;
    // peny=cents;
    // cout<<dollar<<"dollars are equal to $"<<dollar<<" dollars, "<<quarter<<" quarter , "<<dime<<" dime, "<<nickel<<" nickel and "<<peny<<" pennies."<<endl;

    // int centimeter;
    // int inch,yard,foot;
    // float inchs;
    // cout<<"enter length in centimeters"<<endl;
    // cin>>centimeter;
    // //cout<<setprecision(2);
    // inch=centimeter/2.54;
    // yard=inch/36;
    // inch%=36;
    // foot=inch/12;
    // inch%=12;
    // inchs=inch;
    // cout<<centimeter<<" centimeter are equal to "<<yard<<" yards , "<<foot<<" foot and "<<inch<<" inches"<<endl;

    // int h,m,s;
    // cout<<"enter time inn hour min sec"<<endl;
    // cin>>h>>m>>s;
    // cout<<h<<":"<<m<<":"<<s<<" is equal to "<<((h*3600)+(m*60)+s)<<" seconds"<<endl;
    // cin>>s;
    // h=s/3600;
    // s%=3600;
    // m=s/60;
    // s%=60;
    // cout<<h<<" :"<<m<<" ;"<<s<<endl;

    // int number,num1,num2,num3;
    // cin>>number;
    // num1=number%10;
    // num2=(number/10)%10;
    // num3=(number/100)%10;
    // cout<<"sum of the digits are given as "<<num1+num2+num3<<endl;
    // c

    // int a,b,c ,sum=0;
    // cin>>a>>b>>c;
    // if(a>0){
    //     sum+=a;
    // }
    // if(b>0){
    //     sum+=b;
    // }
    // if(c>0){
    //     sum+=c;
    // }
    // cout<<sum<<endl;

    // int counter =1,sum=0,noi,number;
    // cout<<"how many numbers you want to enter ? "<<endl;
    // cin>>noi;
    // cout<<"now enter the integers one by one";
    // while(counter<=noi){
    //     cin>>number;
    //     counter++;
    //     sum=sum +number;
    // }
    // cout<<"the sum is given as "<<sum<<endl;
    // cout<<"the average is given as "<<sum/noi<<endl;

    // srand(time(0));
    // int num1 = rand() % 100;
    // int num2 = rand() % 100;
    // bool done = true;
    // int number;

    // while (done)
    // {
    //     cout << "what is the sum of " << num1 << " and " << num2 << endl;
    //     int sum = num1 + num2;
    //     cin >> number;
    //     if (number == sum)
    //     {
    //         cout << "test passed !";
    //         done = false;
    //     }
    //     else if(number < sum)
    //     {
    //         cout << "your number is less than answer \n"
    //              << "renter the number" << endl;
    //     }
    //     else
    //     {
    //         cout << "your number is greater than answer \n"
    //              << "renter the number" << endl;
    //     };
    // }

// 

// int sum,n;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// for(int i=1;i<=n;i++){

// sum+=(i*i*i);

// }
// cout<<"the sum of the cubes is given as "<<sum<<endl;
// int n,number,product=1,counter=0,count=1;
// cin>>n;

// while(counter<=n){
// product*=counter;
// counter++;

// }
// cout<<"the factorial is "<<product<<endl;

// cout<<"how many no. you want to enter "<<endl;
// cin>>n;

// while(count<=n){
//     cin>>number;
//     if(number%2==0){
//         counter++;
//     }
//     count++;
// }
// cout<<"the numbers of zero enteries are "<<counter<<endl;

// int n ;
// unsigned long long product=1;
// cout<<fixed;
// cout<<showbase;
// cout<<scientific;
// cout<<setprecision(6);
// for(n=2;n<=100;n+=2){

// product*=n;
// }
// cout<<product<<endl;

// int x,y;
// do{
//     cout<<"enter the value of x and y"<<endl;
//     cin>>x>>y;
// if((x<=0)||(y<=0)){
//     cout<<"reenter the numbers "<<endl;
// }

// }while((x<=0)||(y<=0));

// for(int i=x;x<=y;x++){
// if(x%2==0){
//     cout<<x;
// }
// }
// int n;
// // cin>>n;
// for(int i=4;i>=1;i--){
      
 
// for(int k=1;k<=i;k++){
//    cout<<"  ";
   
// }
//  cout<<"****";
// cout<<endl;
// }

// int x=0,y=1,n,z,m;
// cin>>n;
// m=n-2;
// for(int i=1;i<=m;++i){
// if(i==1){
//     cout<<x;
//     cout<<" ";
// }
// if(i==2){
//     cout<<y;
//     cout<<" ";
// }
// z=x+y;
// cout<<z;
// cout<<" ";
// x=y;
// y=z;

// }
// char ch;
// cin>>ch;
//   cout<<int(ch);


// int i=3;  // i ki value end pe update ho gi
// int j=i++;
// int k=++i;
// cout<<i<<j<<k<<endl;

//    for(int j=1;j<=5;j++){
//         cout<< "    "<<j<<" ";
//         }
//         cout<<endl;
// for(int i=1;i<=5;i++){
//     cout<<i<<" |" ;
 
//         for(int k=1;k<=5;k++){
//  cout<<setw(3)<<i*k<<"  ";   
//     }
//      cout<<endl;
//     // cout<<endl;
// }

// int count = 1, sum = 0,num;
// // cin>>num;
// while (count <= 20)
// {
// sum = sum + count;
// count++;
// // cin >> num;
// }
// cout<<sum;
// cout<<"product is given as "<<product<<endl;

	// int n, temp, x, y = 0;

	// cout << "Enter the number:";
	// cin >> n;

	// temp = n;

	// while (n >= 1)
	// {
	// 	x = n % 10;
	// 	y = y * 10 + x;
	// 	n = n / 10;
                                                    // palindromic sequence
	// }
	// if (y == temp)
	// {
	// 	cout << "Palindrome number";
	// }
	// else 
	// {
	// 	cout << "Not a palindrome number";
	// }






    return 0;
    }
//Respected authorities most respectfully i am a student of computer science in pakistan on scholarship My financial backgroung is not much stronger that i can buy the course the platform offer the oppurtunity towads me in order to carry out the degree with such a course . This course will surely increase my entry level knowledge about the basics of the computer skill and it may also helps me alot in making the things easy in my next comming adventurous journey of study .I believe that the path of glory and success is always full of hurdles and difficulties and the one who believe in hard work will achieve the things or the goals that he wants in his life therefore,i think that i am capable for this scholar ship and i hope that the managing authorities will surely help he increase my knowledge thank u soo much for such a huge support.




