#include <iostream>
#include <math.h>
using namespace std; 

// class base
// {
// public:
//   int a;
//   void display()
//   {
//       cout<<"dispaly base"<<a<<endl;
//   }
// };
// class derived: public base
// {
// public:
//     void show()
//     {
//         cout<<"show derived";
//     }
// };
// int main()
// {
//     derived d;
//     d.a=100;
//     d.display();
//     d.show();
// }
// ..........................................................................
 
 
 
// class rectangle
// {
// private :
//   int length ;
//   int breadth;
// public:
//      rectangle();
//      rectangle(int l, int b);
//      rectangle(rectangle &r);
//      int getlength()  
//           {return length;}
//      int getbreadth() 
//             {return breadth;}
//      int setlength( int l);
//      int setbreadth(int b);
//      int area();
//      int perimeter();
//      bool issquare();
//      ~rectangle();
// };
// class cuboid:public rectangle
// {
//  private :
//    int height ;
// public:
//  cuboid(int h)
//  {
//      height =h;
//  }
//  int getheight(){return height;}
//  int setheight(int h){return height=h;}
//  int volume(){return getlength()*getbreadth()*height;}
 
// };
// int main()
// {
//    cuboid c(5);
//    c.setlength(10);
//    c.setbreadth(20);
//    cout<<c.volume()<<endl;
// }
// rectangle::rectangle()
// {
//     length=1;
//     breadth=1;
// }
// rectangle::rectangle(int l, int b)
// {
//     length=l;
//     breadth=b;
// }
// rectangle::rectangle(rectangle &r)
// {
//     length=r.length;
//     breadth=r.breadth;
// }
// int rectangle::setlength(int l)
// {
//     length=l;
// }
// int rectangle::setbreadth(int b)
// {
//     breadth = b;
// }
// int rectangle::area()
// {
//     return length*breadth;
// }
// int rectangle::perimeter()
// {
//     return 2*(length+breadth);
// }
// bool rectangle::issquare()
// {
//     return length==breadth;
// }
// rectangle::~rectangle()
// {
//     cout<<"rectangle destroyed";
// }
// ....................................................................

// CONSTRUCTORS IN INHERITENCE:-

// class base
// {
// public:
//   base(){cout<<"non-param base"<<endl;}
//   base(int x){cout<<"param of base"<<x<<endl;}
// };
// class derived:public base
// {
// public:
//   derived()
//   {
//       cout<<"non param of derived"<<endl;
//   }
//   derived(int y)
//   {
//       cout<<"pram of derived"<<y<<endl;
//   }
//   derived(int x,int y):base(x)
//   {
//       cout<<"param od derived"<<y<<endl;
//   }
// };
// int main()
// {  
//     // derived d;
//     // derived d(10);
//     derived d(5,4);
// }
// ..............................................................

// ACCESS SPECIFIERS:-

// class base
// {
// private:
//   int a;
// protected:
//   int d;
// public:
//   int c;

// void funbase()
//   {
//     a=10;
//     d=5;
//     c=15;
//   }
// };
// class derived:public base
// {
// public:
//    void funderived()
//     {
//         a=10;
//         d=5;
//         c=15;
//     }   
// };
// int main()
// {
//     base x;
//     x.a=10;
//     x.d=5;
//     x.c=20;
// }

// in main class only public members can be accessed
// in derived class only protected and public are accesed.
// .........................................................................

// WAYS OF INHERITENCE:-

// class parent
// {
// private: int a;
// protected: int b;
// public: int c;

//  void funparent()
//  {
//      a=10;
//      b=5;
//      c=15;
//  }
// };
// class child:public parent
// {
// public:
//   void funchild()
//   {
//     //   a=10;
//       b=5;
//       c=15;
//   }
// };
// class grandchil: public child
// {
// public:
//   void fungrandchild()
//   {
//     //   a=10;
//       b=5;
//       c=15;
//   }
// };
// int main()
// {
//     child c;
//     c.c=20;
// }
// ...........................................................


