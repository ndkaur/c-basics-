#include <iostream>
#include <math.h>
using namespace std;

// BASE CLASS POINTER AND DERIVED CLASS OBJECT:-

// EXAMPLE 1:-  

// class base 
// {
// public:
//   void fun1()
//   {
//       cout<<"fun1 of base"<<endl;
//   }
// };
// class derived:public base
// {
// public:
//    void fun2()
//    {
//        cout<<"fun2 of derived"<<endl;
//    }
// };
// int main()
// {
//     derived d;
//     base *p=&d;
//     p->fun1();
//     // p->fun2();

// // fun2() cant be accesed cause pointer is from base class 
// // and base class doesnot have fun2 in it,

//     // d.fun1();
//     // d.fun2();

//     return 0;
// }
// .......................................................................

// EXAMPLE 2:-

// class rectangle
// {
// public:
//  void area()
//  {
//      cout<<"area of rectangle"<<endl;
//  }
// };
// class cuboid:public rectangle
// {
// public:
//    void volume()
//    {
//        cout<<"volume of cuboid"<<endl;
//    }
// };
// int main()
// {
//     cuboid c;
//     rectangle *p=&c;
//     // cuboid *p=&c;

//     p->area();
//     p->volume();

//     // c.area();
//     // c.volume();
// }
// ...................................................................

// EXAMPLE 3:-

// class basiccar
// {
// public:
//  void start()
//  {
//      cout<<"car started"<<endl;
//  }
// };
// class advancedcar:public basiccar
// {
// public:
//    void playmusic()
//    {
//        cout<<"music paly"<<endl;
//    }
// };
// int main()
// {
//     advancedcar a;
    
//     basiccar *p=&a;
    
//     p->start();
//     p->playmusic();

//     // a.start();
//     // a.playmusic();
// }
