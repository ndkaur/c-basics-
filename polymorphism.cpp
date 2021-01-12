#include <iostream>
#include <math.h>
using namespace std;

// FUNCTION OVERRIDING:-

// class base
// {
// public:
//   void display()
//   {
//       cout<<"display of base"<<endl;
//   }
// };
// class derived:public base
// {
// public:
//   void display()
//   {
//       cout<<"dispaly of derived";
//   }
// };
// int main()
// {
//     derived d;
//     // d.display();
//     // d.base::display();
// }
// ........................................................................

// VIRTUAL FUNCTIONS:-
// when pointer of one class and object of other class
// to call the derived class function when pointer is of base class
// then we use the key word virtual; 
// pointer of base then fun of base will be called

// class base
// {
// public:
//   virtual void fun()
//   {
//       cout<<"fun of base"<<endl;
//   }
// };
// class derived:public base
// {
// public:
//     void fun()
//   {
//       cout<<"fun of derived";
//   }
// };
// int main()
// {
//     derived d;
//     base *p=&d;
//     p->fun();
//     // d.fun();
// }
// when added virtual in base class ..it helps to access the 
// fun of derived class no matter the pointer is of base class.


// class basecar
// {
// public:
//   virtual void start(){cout<<"basecar started"<<endl;}
// };
// class advcar:public basecar
// {
// public:
//    void start(){cout<<"advancar started"<<endl;}
// };
// int main()
// {
//     basecar *p=new advcar();
//     p->start();

// }
// ..............................................................

// POLYMORPHISM:-

// class car
// {
// public:
//   virtual void start(){cout<<"car started"<<endl;}
// };
// class innova:public car
// {
//     void start(){cout<<"innova started"<<endl;}
// };
// class swift:public car
// {
//    void start(){cout<<"swift started"<<endl;}
// };
// int main()
// {
//     car *p=new innova();
//     p->start();
//     p=new swift();
//     p->start();
// }
// ........................................................................

//  ABSTRACT CLASSES:-

// class car
// {
// public:
//   virtual void start()=0;
// };
// class innova:public car
// {
//     void start(){cout<<"innova started"<<endl;}
// };
// class swift:public car
// {
//    void start(){cout<<"swift started"<<endl;}
// };
// int main()
// {
//     car *p=new innova();
//     p->start();
//     p=new swift();
//     p->start();
// }

// .........................................................................
 
// SHAPE POLYMORPHISM:-

// class shape
// {
// public:
//   virtual float area()=0;
//   virtual float perimeter()=0;
// };

// class rectangle:public shape
// {
// private:
//   float lenght;
//   float breadth;
// public:
//   rectangle(int l=1 ; int b=1){lenght=l;breadth=b;}
//   float area(){ return lenght*breadth;}
//   float perimeter(){ return 2*(lenght+breadth);}
// };

// class circle:public shape
// {
// private:
//    float radius;
// public:
//   circle(float r){radius=r;}
//   float area(){return 3.14*radius*radius;}
//   float perimeter(){return 2*3.14*radius;}
// };

// int main()
// {
//     shape *s=new rectangle(10,5);
//     cout<<"area of rectangle"<<s->area()<<endl;
//     cout<<"perimeter of rectangle"<<s->perimeter()<<endl;

//     s=new circle(10);
//     cout<<"area of circle"<<s->area()<<endl;
//     cout<<"perimeter of circle"<<s->perimeter()<<endl;
// }
// .........................................................................

//  FRIEND FUNCTIONS:-
// hepls to access all members of public , protected and private.

// class fun;
// class test
// {
// private: int a;
// protected: int b;
// public: int c;
//   friend void fun();
// };
// void fun()
// {
//   test t;
//   t.a=10;
//   t.b=15;
//   t.c=5;
// }

