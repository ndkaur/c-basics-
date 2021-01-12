#include <iostream>
#include <math.h>
using namespace std;

// int division (int a,int b)
// {
//     if (b==0)
//       throw 1;
//     else
//       return a/b;
// }

// int main()
// {
//     int x=10,y=2,e,z;

//     try
//     {
//        z=division(x,y);
//        cout<<z<<endl;
//     }

//     catch(int e)
//     {
//         cout<<"division by zero"<<e<<endl;
//     }
//    catch(double e)
//    {
//        cout<<"double catch"<<endl;
//    }
//    catch(...){cout<<"all catch"<<endl;}

//     cout<<"bye"<<endl;
// }
// ...........................................................

//  in catch child class is written first then comes the parent class.
// .....................................................................................
// TEMPLATE FUNCTION AND CLASSES:-

// template<class T>
// class stack
// {
// private:
//   T *stk;
//   int top;
//   int size;
// public:
//    stack(int sz)
//    {
//        size =sz;
//        top=1;
//        stk=new T[size];
//    }
//    void push(T x);
//    T pop();
// };

// template<class T>
// void stack<T>::push(T x)
// {
//     if (top==size-1)
//       cout<<"stack is full"<<endl;
//     else {top++; stk[top]=x;}
// }

// template<class T>
// T stack<T>::pop()
// {
//     T x=0;
//     if(top==-1){cout<<"stack is empty"<<endl;}
//     else{x=stk[top]; top--;}
//     return x;
// }

// int main()
// {
//     stack<float> s(10);
//     s.push(10);
//     s.push(23);
// }
// ...................................................................

// CONSTANTS, PREPROCESSOR DIRECTIVES AND NAMESPACES:-

// constant is used to fix a paricular term 
// constant int , constant*p=&x;

// preprocessor directives are basically then instructions that are given 
// to the compiler before running the programm.
// basically e define the values like
// #define PI 3.14;
// # define c cout;

// # define SQR(x)(x*x)
// int main()
// {cout<<SQR(5);}


// namespace is used to define same functions but when we have to call them
// to remove confusion namespace is used.

// namespace first
// {
//     void fun(){cout<<"first"<<endl;}
// };
// namespace second
// {
//     void fun(){cout<<"second"<<endl;}
// };

// using namespace first;
// int main()
// {
//     fun();
//     second::fun();
// }
// .....................................................................

// DESTRUCTOR:-
// used for deallocating the resources.
// destructors cant be overloaded.

// class demo
// {
// public: 
//  demo(){cout<<"constructor od demo"<<endl;}
//  ~demo(){cout<<"destructor of demo"<<endl;}
// };
// void fun()
// {
//     // demo d;
//     demo *p=new demo();
//     delete p;
// }

// int main()
// {
// fun();
// }
// ..................................................................

// VIRTUAL DESTRUCTORS:-

// virtual destructor is used to call the object no matter the pointer is of base

// class base
// {
// public:
   
//   virtual ~base(){cout<<"destructor of base"<<endl;}
// };

// class derived:public base
// {
// public:
//   ~derived(){cout<<"desturctor of derived"<<endl;}
// };

// void fun()
// { 
//     // derived d;
//     base *p=new derived();
//     delete p;
// }
// int main()
// { fun();}
