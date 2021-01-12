#include <iostream>
#include <math.h>
using namespace std;
int main()


// {
//     string name;
//     cin>>name;
//     int n = name.length();
//     for(int pos=0; pos<n; ++pos)
//         if(!(pos&1))
//             cout<<name[pos];
//     cout<<endl;
// }

// .................................................

// CONDITIONAL STATEMENT

// FIND MAXIMUM OF TWO NUMBERS:-
// {
//    int x,y;
//    cout<<"Enter 2 no's";
//    cin>>x>>y;
//    if (x>y) 
//    {
//        cout<<"max is "<<x;
//    }
//    else
//    {
//      cout<<"max is "<<y;
//    }
//    return 0;
// }

// DIVISION OF TWO NOS BY VALIDATION

// {
//     int a,b,c;
//     cout<<"enter 2 no's";
//     cin>>a>>b;
//     if(b==0)
//     {
//         cout<<"division is not valid"<<endl;    
//     }
//     else
//     {
//        c=a/b;
//        cout<<c<<endl;
//     }
//     return 0;
// }
// ...............................................

// LOGICAL OPERATORS:-

// {
//     int hour;
//     cout<<"enter hour";
//     cin>>hour;
//     if(hour>=9 && hour<=18)
//     {
//         cout<<"working ";
//     }
//     else
//     {   
//       cout<<"leisure";  
//     }
//     return 0;
// }

// AGE OF A PERSON:-
// {
//     int age;
//     cout<<"enter the age of a person";
//     cin>>age;
//     if (age>=12 && age<=50)
//     {
//         cout<<"the person is young";
//     }
//     else
//     {
//         cout<<"the person is old";
//     }
//     return 0;
// }

// AGE CONDITION FOR AN OFFER:-

// {
//     int age;
//     cout<<"enter age";
//     cin>>age;
//     if (age<12 || age>50)
//     {
//         cout<<"eligible";
//     }
//     else
//     {
//       cout<<"not eligible";
//     }
//     return 0 ;
// }
// .................................................

// NESTED IF :-

// GREATEST OF THREE NUMBERS:-
// {
//   int a,b,c;
//   cout<<"enter three nos"<<endl;
//   cin>>a>>b>>c;
//   if(a>b && a>c)
//   {
//       cout<<"a is greater"<<endl;
//   }
//   else
//       if(b>c)
//          {
//             cout<<"b is greater";
//          }
//        else
//        {
//            cout<<"c is greater";
//        }
//   return 0; 
// }

// NATURE OF ROOTS OF EQUATION:-


// {
//     float a,b,c,d,r1,r2;
//     cout<<"enter a,b,c";
//     cin>>a>>b>>c;
//     d= (b*b) - (4*a*c);
//     if(d==0)
//     {
//         cout<<"rootes are real and equal";
//         cout<<endl<<(-b/(2*a));
//     }
//     else if(d>0)
//          {
//              cout<<"roots are real and unequal";
//              cout<<endl<<(-b+sqrt(d)/(2*a));
//              cout<<endl<<(-b-sqrt(d)/(2*a));
//          }
//     else if (d<0)
//          {
//              cout<<"rotts are imaginary";
//          }
//     return 0;
// }

// DISPLAY GRADES:-
// {
//   int m1,m2,m3,total;
//   float average;
//   cout<<"enter marks of 3 subjects"<<endl;
//   cin>>m1>>m2>>m3;
//   total = m1+m2+m3;
//   cout<<total<<endl;
//   average = total/2;
//   cout<<average<<endl;

//   if (average>=60)
//   {
//     cout<<"grade is A"<<endl;
//   }
//   else if(average>=35 && average<=60)
//   {
//       cout<<"grade is B"<<endl;
//   }
//   else if (average<35)
//   {
//       cout<<"grade is C"<<endl;
//   }
//   return 0;
// }

// ..................................................

// ELSE IF LADDER:-

// {
//     int day;
//     cout<<"enter a day number";
//     cin>>day;
//     if(day==1)
//     {
//         cout<<"monday"<<endl;
//     }
//     else if (day==2)
//     {
//         cout<<"tuesady";
//     }
//     else if (day==3)
//     {
//         cout<<"wednesday";
//     }
//     else if (day==4)
//     {
//         cout<<"thrusday";
//     }
//     else 
//     {
//         cout<<"invalid";
//     }
//     return 0;
// }
// ..................................................

// SHORT CIRCUIT :-

// {
//     int a=10,b=5,i=5;
//     // if(a>b && ++i<=b)
//     if (a<b || ++i<=b)
//     {
//     //   cout<<i<<endl;  
//     }
//     cout<<i<<endl;
//     return 0 ;
// }
// .................................................

// SWITCH CASE:-
// {
//     int day;
//     cout<<"enter day no";
//     cin>>day;
//     switch(day)
//     {
//       case 1 : cout<<"mon";
//               break;
//       case 2 :  cout<<"tue";
//               break;
//       default : cout<<"invalid day";
//     }
// }


// {
//     int x;
//     cout<<"enter value for x"<<endl;
//     cin>>x;
//     switch(x)
//     {
//         case 1: cout<<"one";
//           break;
//         case 2 :cout<<"two";
//            break;
//         case 3 : cout<<"three";
//           break;
//         default : cout<<"invalid number";
//     }
//      cout<<endl<<endl;
//      return 0; 
//  }

// MENU OPTIONS:-

// {
//     cout<<"menu";
//     cout<<"1 . add"<<endl<<"2 . sub"<<endl<<"3.mult"<<endl<<"4.divide"<<endl;

//     int option;
//     cout<<"enter your choice"<<endl;
//     cin>>option;
//     int a,b,c;
//     cout<<"enter two nos";
//     cin>>a>>b;
//     switch(option)
//     {
//       case 1 : c=a+b;
//         break;
//       case 2 : c=a-b;
//         break;
//       case 3 : c=a*b;
//        break;
//       case 4 : c = a/b;
//        break;
//        default : cout<<"invalid no";
//     }
//     cout<<"result is "<<c<<endl;
//     return 0;
//     }

// .................................................

// LEAP YEAR OR NOT :-
//  {
//      int year;
//      cout<<"enter a year";
//      cin>>year;

//      if (year % 4 == 0)
//      {
//         if(year%100 ==0)
//         {
//             if (year%400==0)
//                 cout<<year<<"is a leap ";
//             else
//                 cout<<year<<"is not a leap";                
//         }
//         else
//             cout<<year<<"is a leap year";
//      }
//      else 
//          cout<< year <<" not a leap year";

//     return 0;
//  }

// OTHER METHOD FOR LEAP YEAR :- 

// {
//     int year = 2006;
//     // cin>>year;

//     if(year%400==0)
//         cout<<year<<" is Leap"<<endl;
//     else if(year%100==0)
//         cout<<year<<" is not Leap"<<endl;
//     else if(year%4==0)
//         cout<<year<<" is Leap"<<endl;
//     else
//         cout<<year<<" is not Leap"<<endl;

// }