#include <iostream>
#include <math.h>
using namespace std;
int main()

// .................................

// HELLO WORLD 
// { 
// std::cout<<"Hello NDK";
// return 0;
// }

// ......................................

// SUM OF TWO NUMBERS
// {
// int a,b,c;
// cout<<"Enter 2 no";
// cin>>a>>b;
// c=a+b;
// cout<<"addition is"<<c<<endl;
// return 0;
// } 

// ...................................

// TO PRINT NAME OF A PERSON 
// {
// string name;    
// cout<<"may i know your name";
// getline(cin,name);
// // cin>>name;
// cout<<"welcome mr/miss"<<name;
// }

// ( string is written to specify the name cause 
// its a string. Getline is used to print the whole 
// name . if we use cin name it will only print the 
// first letter of the name not the full name.)

// ................................................

// FORMULAS:-

// AREA OF A TRIANGLE :-
// {
//   float a,b,h;
//   cout<<"Enter base and height";
//   cin>>b>>h;
//   a=(b*h)/2;
//   cout<<"Area is"<<a;
// }
// ....................................

// SUM OF N NATURAL NUMBERS:-
// {
//   int n,s ;
//   cout<<"ENTER n";
//   cin>>n;
//   s=n*(n+1)/2;
//   cout<<"Sum is"<<s;
// }

// .....................................

// ROOT OF A QUADRATIC EQUATION :-
// {
//     int a,b,c;
//     float r1,r2;
//     cout<<"ENTER 3 values";
//     cin>>a>>b>>c;
//     r1 = ( -b + sqrt(b*b-4*a*c)) / (2*a);
//     r2 = (-b - sqrt(b*b-4*a*c)) / (2*a);
//     cout<<"ROOT are "<<r1<<" "<<r2;
//     return 0 ;
// }
// ...........................................

// AREA OF A CIRCLE 
// {
    // float r, a ;
    // cout<<"ENTER Radius";
    // cin>>r;
    // a= 22/7.0*r*r;
    // a=22/7*r*r;
    // a=3.1425f*r*r;
    // a = (float)22/7 *r*r;
    // cout<<"AREA IS "<<a<<endl;
// }
// .............................................

// FINDING THE SPEED OF A CAR 
// {
//    int u,v,a;
//    float s;
//    cout<<"ENTER U,V, S";
//    cin>>u>>v>>a ;
//    s=(v*v-u*u)/(2*a);
//    cout<<"SPEED is "<<s;
//    return 0;
// }
// ..............................................

// COMPOUND ASSIGNMENT:-
// {
//   int sum = 10;
//   int x=5;
//   sum = sum+x;
//   sum+=x;
//   cout<<sum;
//   return 0;
// }
// ...........................................

// INCREMENT AND DECREMENT:-
// {
    // int i=5,j;
    // i=i+1;
    // i+=1;
    // i++;
    // j=i++;(post increment)
    // j=++i;(pre increment)
    // j= 2* ++i + 2* i++;
    // cout<<i<<" "<<j;
// }
// ......................................

// // OVERFLOW :- (if the value is max +, it reutrns max - ve value.)
// {
//     char x = 128;
//     cout<<(int)x<<endl;
//     return 0;
// }
// ...........................................

// BITWISE OPERATOR(& and, | or ,^ XOR, ~ NOT,)
// {
//    int x=11, y=7, z;
// //    z=x&y;
// //    z=x|y;
//    y=~x;
//    z=x^y;
//    cout<<z;
// } 

// {
//     char x=20,y;
//     // y=x<<1;
//     y=x>>1;
//     cout<<(int)y;
// }
// when << left shift the numbers it is doubled by 2
// when >> right shift the numbers it is divided by 2

// .............................................
// ENUM AND TYPE DF 

// enum day {mon=1,tue,wed,thr=15,fri,sat,sun};
// int main()
// {
//     day d;
//     d=sun;
//     cout<<d;
// }

// typedef int marks;
// int main()
// {
//     marks m1,m2;
//     m1=30;
//     m2=36;
// }
// type def is used just to specify the type of int 
// or to tell that what the value of int is exactly.

// ...................................................
