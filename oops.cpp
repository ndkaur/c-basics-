#include <iostream>
#include <math.h>
using namespace std;

// CLASS:-

// class rectangle
// {
//     public:
//        int length ;
//        int breadth;
//        int area()
//        {  
//            return length*breadth;
//        }
//        int perimeter()
//        {
//            return 2*(length+breadth);
//        }
// };

// int main()
// {
//     rectangle r1;
//     r1.length=10;
//     r1.breadth=5;
//     cout<<"area is"<<r1.area()<<endl;
//     cout<<"perimeter is"<<r1.perimeter()<<endl;
// }
// ..........................................................

// POINTERS TO OBJECTS:-
// class rectangle
// {
//     public:
//        int length ;
//        int breadth;
//        int area()
//        {  
//            return length*breadth;
//        }
//        int perimeter()
//        {
//            return 2*(length+breadth);
//        }
// };
// int main()
// {
//     rectangle r1;
//     rectangle *p;
//     p=&r1;
//     p-> length=10;
//     p-> breadth=5;
//     cout<<"area is"<<p->area()<<endl;
//     cout<<"perimeter is"<<p->perimeter()<<endl;
// }

// {
//     rectangle *p=new rectangle();
//     p-> length=10;
//     p-> breadth=5;
//     cout<<"area is"<<p->area()<<endl;
//     cout<<"perimeter is"<<p->perimeter()<<endl;
// }
// ...........................................................

// class rectangle
// {
//     private:
//        int length;
//        int breadth;
//     public:
//        void setlength(int l )
//        {
//            if(l<0)
//              length=1;
//            else
//               length=l;
//        }
//        void setbreadth(int b)
//        {
//            if(b<0)
//               breadth=1;
//            else 
//               breadth =b;
//        }
//        int getlength()
//        {
//            return length;
//        }
//        int getbreadth()
//        {
//            return breadth; 
//        }
//        int area()
//        {  
//            return length*breadth;
//        }
//        int perimeter()
//        {
//            return 2*(length+breadth);
//        }
// };
// int main()
// {
//     rectangle r1;
//     r1.setlength(-10);
//     r1.setbreadth(-5);
//     cout<<r1.getlength()<<endl;
//     cout<<r1.getbreadth()<<endl;
//     cout<<r1.area()<<endl;
//     cout<<r1.perimeter()<<endl;

// }
// .........................................................
// CONSTRUCTORS:-

// class rectangle
// {
//     private:
//        int length;
//        int breadth;
//     public:
//     //  NON PARAMATERIZED CONSTRUCTOR
//        rectangle()
//        {
//            length =1;
//            breadth=1;
//        }
//     //  PARAMARTIZED CONSTRUCTOR
//        rectangle(int l , int b)
//        {
//            setlength(l);
//            setbreadth(b);
//        }
//     //    COPY CONSTRUCTOR
//        rectangle(rectangle &r)
//        {
//            length=r.length;
//            breadth=r.breadth;
//        }
//        void setlength(int l )
//        {
//            if(l<0)
//              length=1;
//            else
//               length=l;
//        }
//        void setbreadth(int b)
//        {
//            if(b<0)
//               breadth=1;
//            else 
//               breadth =b;
//        }
//        int getlength()
//        {
//            return length;
//        }
//        int getbreadth()
//        {
//            return breadth; 
//        }
//        int area()
//        {  
//            return length*breadth;
//        }
//        int perimeter()
//        {
//            return 2*(length+breadth);
//        }
// };
// int main()
// {
//     rectangle r1(5,12);
//     rectangle r2(r1);
//     cout<<r2.area()<<endl;
// }
// ...........................................................

// SCOPE RESOLUTION:-

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
// int main()
// {
//     rectangle r1(1,10);
//    cout<<"area is"<<r1.area()<<endl;
//    if(r1.issquare())
//       cout<<"yes"<<endl;
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
// ..............................................................

// STRUCTURE :-

// struct demo
// {
//     int x;
//     int y;
//     void display()
//     {
//         cout<<x<<" "<<y<<endl;
//     }
// };
// int main()
// {
//     demo d;
//     d.x=10;
//     d.y=20;
//     d.display();
// }

// in structure everything is public
// in class things become private.
// ...........................................................

// PROGRAM WITH A CLASS FOR STUDENTS:-

class student
{
private:
      int roll;
      string name;
      int mathmarks;
      int phymarks;
      int  chemarks;
public:
  student( int r,string n ,int m, int p, int c)
  {
      roll=r;
      name=n;
      mathmarks=m;
      phymarks=p;
      chemarks=c;
  }
  int total()
  {
      return mathmarks+phymarks+chemarks;
  }
  char grade()
  {
      float average=total()/3;
      if (average>60)
        return 'A';
      else if(average>=40 && average<60)
        return 'B';
      else
         return 'C';
  }
};
int main()
{
  int roll;
  string name;
  int m,p,c;
  cout<<"enter roll no of student";
  cin>>roll;
  cout<<"enter name ";
  cin>>name;
  cout<<"marks in 3 subjects";
  cin>>m>>p>>c;
  student s(roll,name,m,p,c);
  cout<<"total marks:"<<s.total()<<endl;
  cout<<"grade of student:"<<s.grade()<<endl;

}
