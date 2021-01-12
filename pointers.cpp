#include <iostream>
#include <math.h>
using namespace std;
int main()

// decleration :- int *p;
// initilazation :- p=&x;
// derefrencing:- cout<<*p;

// {
//     int a=10;
//     int *p=&a;

//     cout<<a<<endl;
//     cout<<&a<<endl;
//     cout<<p<<endl;
//     cout<<&p<<endl;
//     cout<<*p<<endl;

//     return 0;
// }


//  {
//     int *p = new int[5];
//     p[0]=12;
//     p[1]=13;
//     cout<<p[1]<<endl;
    
//     delete []p;
//     p=NULL ;
//     return 0;
//  }

// {
//     int size;
//     cout<<"enter number of elements";
//     cin>>size;
//     // int A[size];
//     // cout<<sizeof A<<endl;
//     int *p=new int[size];

//     cout<<"enter new size";
//     cin>>size;
//     p = new int[size];
//     return 0;
// }
// .................................................................

// POINTERS ARITHMETIC:-
// {
//     int A[5]{2,4,6,8,10};
//     int *p=A,*q=&A[4];
  
    // cout<<*p<<endl;
    // p++;
    // cout<<*p<<endl;
    // p--;
    // cout<<*p<<endl;
    // cout<<*p<<endl;
    // cout<<*(p+2)<<endl;
    
    // cout<<q-p<<endl;
    // cout<<p-q<<endl;
 
//    for (int i=0;i<5;i++)
//    cout<<p<<endl;
//    {
    //    cout<<i[A]<<endl;
    //    cout<<*(A+i)<<endl;
    //    cout<<(A+i)<<endl;
    // cout<<p[i]<<endl;
//     cout<<*p<<endl;
//     p++;
//    }
//    cout<<p<<endl;
//    return 0;
// }

// .........................................................

// inilazation method:-
// 1. p=&x;
// 2. p=(int*)0*5638;
// 3. p=new int[5];
// cout<<*p;
// ....................................................

//  {
//      int x=10;
//      int &y=x;
//      cout<<x<<endl;
//      y++;
//      x++;
//      cout<<x<<endl;
//      cout<<&x<<" "<<&y;

//  }
// ......................................................
// POINTER TO A FUNCTION:-

// int x,y;
// int max(int x,int y);
//    {
//     return x>y?x:y;
//    }
// int min (int x, int y);
// {
//     return x<y?x:y;
// }
// int x,y;
// {
//     int (*fp)(int,int);
//     fp=max;
//     (*fp)(10,5);
//     fp=min;
//     (*fp)(10,5);
// }