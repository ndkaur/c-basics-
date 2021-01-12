#include <iostream>
#include <math.h>
using namespace std;

int main()

// WHILE LOOP:-
// {
//    int n,i;
//    cout<<"enter n"<<endl;
//    cin>>n;
//    while(i<=n)
//    {
//        cout<<i<<endl;
//        i++;
//    }
//    cout<<i;
//    return 0;
// }

// {  int i=10;
//     while(i<=10)
//       {
//         cout<<"hello";
//         i++;
//       }
//       return 0;
// }


// {
//     int i=0;
//     do
//     {
//         cout<<i<<"hello"<<endl;
//         i++;
//     }while(i<5);
//     return 0;
// }

// .....................................................

// FOR LOOP:-
// {
//     int n,i;
//     cout<<"enter n"<<endl;
//     cin>>n;
    
//     for(i=1;i<=n;i++)
//     {
//         cout<<i<<endl;
//     }
// }


// {   int i;
//    for (i=0;i<5;i++)
//    {
//        cout<<i<<"hello"<<endl;
//    }
// }

// INFINITE LOOP:-
// {
//     int i=0;
//     for(;;)
//     {
//         cout<<i<<"heloo"<<endl;
//         i++;
//     }
//      return 0;
// }

// TO BREAK INFINTE LOOP:-
// {
//    int i=0;
//    for(;;)
//    {
//        cout<<i<<"hello"<<endl;
//        i++;
//        if(i<10);
//          break;
//    }
//    return 0;
// }

// ..................................................
// MULTIPLICATION TASK:-
// TABLE OF A NUMBER:-

// {
//   int n,i,p;
//   cout<<"enter n"<<endl;
//   cin>>n;
//   for (i=0;i<=10;i++)
//   {  
//     //  p=i*n;
//     //  cout<<p<<endl;
//     cout<<n<<"x"<<i<<"="<<i*n<<endl;

//   }
//   return 0;
// }

// ..................................................
// SUM OF N NATURAL NUMBERS:-

// {
//     int i,n,sum=0;
//     cout<<"enter n "<<endl;
//     cin>>n;
//     for(i=1;i<=n;i++)
//     {
//       sum+=i;
//     }
//     cout<<"sum is"<<sum<<endl;
//     return 0;
// }

// ...................................................

// FACTORIAL OF A NUMBER:-
// {
//   int i,n,fact=1;
//   cout<<"enter n";
//   cin>>n;
//   for(i=1;i<=n;i++)
//   {
//       fact=fact*i;
//   }
//   cout<<"fact is"<<fact;
//   return 0;
// }
// ....................................................

// FACTORS OF A NUMBER:-
// {
//     int i,n;
//     cout<<"enter n "<<endl;
//     cin>>n;
//     for(i=1;i<=n;i++)
//     {
//         if (n%i==0)
//          cout<<"factor of n is "<<i<<endl;
//     }
//     return 0;
// }

// ....................................................

// SUM OF FACTORS FOR A NUMBER:-
// {
//   int i,n,sum=0;
//   cout<<"enter a n"<<endl;
//   cin>>n;
//   for(i=1;i<=n;i++)
//   {
//       if(n%i==0)
//       {
//           sum=sum+i;
//           cout<<"facors is"<<i<<endl;
//       }
       
//   }
//   cout<<sum;
// }

// ................................................
// TO FIND WETHER A NUMBER IS PERFECT NUMBER OR NOT :-
// Perfect no is that no whose sum of factors = 2*number itself

// {
//    int i=1,n,sum=0;
//    cout<<"enter a n"<<endl;
//    cin>>n;
//      while(i<n)
//      {
//          if(n%i==0)
//              sum =sum+i; 
//              i++;
//      }

//     if(sum==n)
//        cout<<i<<"is a perfect number"<<endl;
//     else
//        cout<<i<<" is not a perfect number"<<endl; 
       
//     return 0;
// }


// .........................................................

// TO FIND PRIME NUMBER OR NOT:-

// either go to its half by: i/2<=n
// or go to its square root by: i*i<=n

// METHOD 1:-

// {
//     int n,i;
//     bool isprime = true;
//     cout<<"enter n"<<endl;
//     cin>>n;

//     for(i=2; i*i<=n ;i++)                       

//     {
//         if(n%i==0)
//         {
//             isprime = false;
//              break;
//         }
//     }
//     if(isprime)
//       cout<<"is prime no";
//     else
//     cout<<"not prime no";

//     return 0;
// }

// METHOD 2:-
// {
//     int i,n,count=0;
//     cout<<"enter n";
//     cin>>n;
//     for (i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             count++;
//         }
//     }
//     if(count==2)
//       cout<<"is a prime";
//     else
//       cout<<"not a prime";

//     return 0;
// }

// .........................................................

// DISPLAY  REVERSE DIGIT OF A NUMBER:-
// {
//     int r ,n ;
//     cout<<"enter n"<<endl;
//     cin>>n;
//     while(n>0)
//     {
//         r=n%10;
//         n=n/10;
//         cout<<r;
//     }
//     return 0;
// }
// ...................................................

// TO CHECK ARMSTRONG NUMBER OR NOT:-

// Armstrong no is that that number whose sum of cube of numbers
// is equal to the number itself.
// 153 = (1 cube)+(5 cube)+(3 cube)

// {
//   int originaln,n,r,sum =0;
//   cout<<"enter n";
//   cin>>originaln;

//   n = originaln;

//   while (n>0)
//     {
//       r=n%10;
//       sum = sum + (r*r*r);
//       n=n/10;
//     }
//     cout<<sum<<endl;
//     {
//         if(sum==originaln)
//            cout<<originaln<<"armstrong";
//         else
//           cout<<originaln<<"not armstrong";  
//     } 
//  return 0;
// }
// ..................................................
// REVERSE OF A NUMBER:-

// {
//   int r,n ,reverse=0;
//   cout<<"enter a n"<<endl;
//   cin>>n;

//   while(n!=0)
//   {
//       r=n%10;
//       n=n/10;
//       reverse=reverse*10+r;
//     // cout<<r;
//   }
//   cout<<reverse<<endl;
//   return 0;
// }

// PALINDROME NUMBER:-
// whose reverse is equal to the original number

// {
//     int r,n, originaln ,rev=0;
//     cout<<"enter a n";
//     cin>>originaln;
//     n=originaln;

//     while(n!=0)
//     {
//         r=n%10;
//         n=n/10;
//         rev=rev*10+r;
//     }
//     cout<<rev<<endl;
//     {
//         if (rev==originaln)
//           cout<<"is a palindrome";
//         else
//           cout<<"not a palindrome";
//     }
//     return 0;
// }
// ......................................................

// DISPLAY NUMBER IN WORDS:-
{
    int r,n,rev=0;
    cout<<"enter a n";
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    n=rev;
    while(n>0)   
    {
        r=n%10;
        switch(r)
    {
        case 1 : cout<<"one";
             break;
        case 2 : cout<<"two";
             break;
        case 3 : cout<<"three";
              break;
        case 4 : cout<<"four";
              break;
        case 5 : cout<<"five";
             break;
        case 6 : cout<<"six";
             break;
        case 7 : cout<<"seven";
            break;
        case 8 : cout<<"eight";
            break;
        case 9 : cout<<"nine";
            break;
        case 0 : cout<<"zero";
            break;
        default: cout<<"invalid";
           break;
    }
    n=n/10;
    }
    return 0;
}

// ......................................................................

// GREATEST COMMON DIVISOR:-
// subtract the lowest no from the greatest no till both the no 
// become equual.

// {
//    int m,n;
//    cout<<"enter 2 no's";
//    cin>>m>>n;

//    while(m!=n)
//    {
//        if(m>n)
//          m=m-n;
//        else if(n>m)
//          n=n-m;
//    }  
//    cout<<"greatest common factor is"<<m<<endl;
// }