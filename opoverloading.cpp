#include <iostream>
#include <math.h>
using namespace std;

// SUM OF IMAGINARY NOS:-

// class complex
// {
// public:
//   int real;
//   int img;
  
// //   complex add(complex c)
//   complex operator+(complex c)
//   {
//       complex temp;
//       temp.real=real+c.real;
//       temp.img=img+c.img;
//       return temp;
//   }
// };
// int main()
// {
//     complex c1,c2,c3;
//     c1.real=5;
//     c1.img=3;
//     c2.real=10;
//     c2.img=5;

//     // c3=c1.add(c2);
//     c3=c1+c2;
//     cout<<c3.real<<"+i"<<c3.img<<endl;
// }
// .............................................................

// FRIEND OPERATOR OVERLOADING:-

// class complex
// {
// private:
//   int real;
//   int img;
// public:
//   complex(int r=0,int i=0)
//   {
//       real=r;
//       img=i;
//   }
//   void display()
//   {
//       cout<<real<<"+i"<<img<<endl;
//   }
//   friend complex operator+(complex c1, complex c2);
// };

// complex operator+(complex c1,complex c2)
// {
//     complex temp;
//     temp.real=c1.real+c2.real;
//     temp.img=c1.img+c2.img;
//     return temp;
// }

// int main()
// {
//     complex c1(5,3),c2(5,7),c3;
//     c3=c1+c2;
//     c3.display();
// }

// ............................................................

// INSERTION OPERATOR OVERLOADING:-
 
// class complex
// {
// private:
//  int real;
//  int img;
// public:
//  complex(int r=0,int i=0)
//  {
//      real=r;
//      img=i;
//  }
//   friend ostream & operator<<(ostream &out,complex &c);
// };

// ostream & operator<<(ostream &out,complex &c)
// {
//     out<<c.real<<"+i"<<c.img<<endl;
//     return out;
// }
// int main()
// {
//     complex c(10,5);
//     cout<<c<<endl;
//     operator<<(cout,c);
// } 
// ..............................................................
