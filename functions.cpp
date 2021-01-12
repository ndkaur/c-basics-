#include <iostream>
#include <math.h>
using namespace std;

// TO PRINT HELLO:-
// void display()
// {
//     cout<<"hello";
// }
// int main()
// {
//     display();
//     return 0;
// }
// ............................................................

// TO ADD TWO FLOAT NUMBERS:-

// float add(float x, float y)
// {
//     float z;
//     z=x+y;
//     return z;
// }
// int main()
// {
//     float x=2.3,y=7.9,z;
//     z=add(x,y);
//     cout<<z<<endl;
//     return 0;
// }
// ...................................................

// MAX OF TWO NOS:-

// int max(int a , int b, int c)
// {
//     if (a>b && a>c)
//       return a;
//     else if(b>c)
//       return b;
//     else return c;
// }

// int main()
// {
//     int x=10,y=15,z=5,r;
//     r=max(x,y,z);
//     cout<<r<<endl;
//     return 0;
// }
// ...........................................................
// FUNCTION OVERLOADING:-

// int sum(int a, int b)
// {
//     return a+b;
// }
// float sum(float a,float b)
// {
//     return a+b;
// }
// int sum(int a,int b,int c)
// {
//     return a+b+c;
// }

// int main()
// {
//     cout<<sum(10,5)<<endl;
//     cout<<sum(12.5f,11.2f)<<endl;
//     cout<<sum(12,1,2)<<endl;
// }
// .....................................................
// FUNCTION TEMPLATE:-

// template<class T>
// T max(T x, T y)
// {
//     if (x>y)
//       return x;
//     else 
//       return y;
// }
// int main()
// {
//     cout<<max(10,54)<<endl;
//     cout<<max(12.2f,45.6f)<<endl;
//     return 0;
// }
// ........................................................
// DEAFULT ARGUMENT:-

// int add(int x,int y,int z=0)
// {
//     return x+y+z;
// }
// int main()
// {
//     cout<<add(2,4)<<endl;
//     cout<<add(3,4,5)<<endl;
//     cout<<add(0,4,3)<<endl;
// }

// MAX OF NOS:-
// int max(int a=0,int b=0,int c=0)
// {
//     return a>b &&a>c ? a:(b>c?b:c);
// }
// int main()
// {
//   cout<<max()<<endl;
//   cout<<max(12,2,4)<<endl;
//   cout<<max(3,5)<<endl;
//   return 0;
// }
// ............................................................
// PASS BY VALUE:- CALL BY VALUE:-

// void swap(int a,int b)
// {
//     cout<<a<<" "<<b<<endl;
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<a<<" "<<b<<endl;
// }
// int main()
// {
//     int x=10,y=20;
//     swap(x,y);
//     cout<<x<<" "<<y<<endl; 
// }


// CALL BY ADDRESS:-
// void swap(int *a,int *b )
// {   
//     cout<<a<<" "<<b<<endl;
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
//     cout<<&a<<" "<<&b<<endl;
// }
// int main()
// {
//     int x=10,y=20;
//     swap (&x,&y);
//     cout<<x<<" "<<y<<endl;
//     cout<<&x<<" "<<&y;
// }

// CALL  BY REFRENCE:-
// void swap (int &a, int &b)
// {
//     cout<<&a<<" "<<&b<<endl;
//     cout<<a<<" "<<b<<endl;
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<a<<" "<<b<<endl;
//     cout<<&a<<" "<<&b<<endl;
// }
// int main()
// {
//     int x=10,y=20;
//     swap(x,y);
//     cout<<x<<" "<<y<<endl;
//     cout<<&x<<" "<<&y<<endl;
// }
// .......................................................
// RETURN BY ADDRESS:-

// int * fun(int size)
// {
//     int *p= new int [size];
//     for(int i=0;i<size;i++)
//     {
//         p[i]=5*i;
//     }
//     cout<<p<<endl;
//     return p;
// }
// int main()
// {
//     int *q = fun(5);
//     for(int i=0;i<5;i++)
//     cout<<q[i]<<endl;
//     cout<<q<<endl;
// }
// ......................................................

// RETURN BY REFERENCE:-

// int & fun(int &x)
// {
//     return x;
// }
// int main()
// {
//     int a=10;
//     fun(a)=54;
//     cout<<a<<endl;
// }
// ...........................................................

// STATIC VARIABLE :-

// static variable always remain always in the memoryjust as 
// global variables.

// void fun()
// {
//     static int v=0;
//     int a=10;
//     v++;
//     cout<<a<<" "<<v<<endl;
// }
// int main()
// { 
//     fun();
//     fun();
//     fun();
// }
// ............................................................

// RECURSIVE FUNCTIONS:-

// void fun(int n)
// {
//     if(n>0)
//     {
//         cout<<n<<endl;
//         fun(n-1);
//     }
// }
// int main()
// {
//     int x=5;
//     fun(x);
// }

// void fun(int n)
// {
//     if(n>0)
//     {
//         fun(n-1);
//         cout<<n<<endl;   ;
//     }
// }
// int main()
// {
//     int x=5;
//     fun(x);
// }

// ........................................................
// TO FIND ELEMENT IN AN ARRAY:-

// int search(int A[],int key,int n)
// {
//     for (int i=0;i<n;i++)
//     {
//         if (key==A[i])
//           return i;
//     }
//     return 0;
// }

// int main()
// {
//     int A[]={2,5,3,4,7,5,8};
//     int k;
//     cout<<"enter a key";
//     cin>>k;
//     int find=search(A,k,7);

//     cout<<"element found"<<" "<<find<<endl;
// }