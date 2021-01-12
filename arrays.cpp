 #include <iostream>
#include <math.h>
using namespace std;
int main()

// SUM OF NOS OF ARRAY:-
// {
//     int A[5]={1,2,3,4,5};
//     int n=5,sum=0,i;
//     for (int i=0;i<5;i++)
//     {
//       sum=sum+A[i];
//     }
//     cout<<"sum is"<<sum;
//     return 0 ;
// }
// // ..................................................
// MAX ELEMENT IN AN ARRAY:-
// {
//     int A[5]={1,2,3,4,5};
//     int i,n=5,max;
//     int max=INT_MIN;
//     max=A[0];
//     for(i=0;i<n;i++)
//     {
//        if (A[i]>max)
//        {
//            max=A[i];
//        }
//     }
//     cout<<"max no is "<<max;
//     return 0;
// }
// ........................................................

// LINEAR SEARCH:-
// {
//     int A[7], n=7,i,key;
//     cout<<"enter 7 no's";
//     for(i=0;i<n;i++)
//     {
//       cin>>A[i];
//     }
//     cout<<"enter key";
//     cin>>key;
//     for(i=0;i<7;i++)
//     {
//         if(A[i]==key)
//         {
//             cout<<"key found"<<i;
//             return 0;
//         }
//     }
//     cout<<"not found";
//     return 0;
// }
// ..........................................................
// BINARY SEARCH :-
// {
//     int A[9]={1,2,3,4,5,6,7,8,9};
//     int h=9,l=0,key,mid;
//     cout<<"enter a key"<<endl;
//     cin>>key;
//     while(l<=h)
//     {
//         mid=(l+h)/2;
//         if(key==A[mid])
//         {
//             cout<<"key found"<<mid;
//             return 0;
        
//         else if (key<A[mid])
//         {
//             h=mid-1;
//         }
//         else if (key>A[mid])
//         {
//             l=mid+1;
//         }
//     }
//     cout<<"not found"; 
// }
// ......................................................
// NESTED  FOR LOOPS:-
// {  
//   int i;
//   for(int i=1;i<=5;i++) 
//   {
//       cout<<i <<"";
//   }
//   return 0;
// }

// NUMBER PATTERN 1:-
// {
//   int i ,j;
//   for (i=1;i<=3;i++)
//   {
//       for(int j=1;j<=5;j++)
//       {
//           cout<<"("<<i<<j<<")"<<"";
//       }
//       cout<<endl;
//   }
//   return 0;
// }

// NUMBER PATTERN 2:-
// {
//    int i,j,count=1;
//    for(i=0;i<4;i++)
//    {
//        for(j=0;j<4;j++)
//        { 
//            cout<<count<<"     ";
//            count++;
//        }
//        cout<<endl;
//    }
// }

// STAR PATTERN 3:-
// {
//     int i,j;
//     for (i=0;i<4;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             if(i>=j)
//              cout<<"*";
//         }
//     cout<<endl;
//     }
// }

// STAR PATTERN 4:-
// {
//     int i,j;
//     for(i=0;i<4;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             if (i<=j)
//               cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// STAR PATTERN 4:-
// {
//     int i,j;
//     for (i=0;i<4;i++)
//     {
//         for(j=0;j<4;j++)
//         {
//             if(i>j)
//               cout<<" ";
//             else 
//               cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// STAR PATTERN 5:-
{
    int n =4;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; ++j)
        {
            if(i+j>=3)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
// ...................................................

// MULTIDIMENSIONAL ARRAY:-
// {
//     int A[2][3]={{2,4,6},{5,9,7}};
//     for (int i=0;i<2;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             cout<<A[i][j];
//         }
//         cout<<endl;
//     }
// }
// .....................................................

// ADDING TWO MATRICES:-
// {    
//     int A[2][3]={{2,3,1},{4,5,6}};
//     int B[2][3]={{7,4,1},{8,5,2}};
//     int C[2][3];
//     for (int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             C[i][j]=A[i][j]+B[i][j];
//             cout<<C[i][j];
//         }
//     }
//     // for(int i=0;i<2;i++){
//     //     for(int j=0;j<3;j++){
//     //         cout<<C[i][j];
//     //     }
//         cout<<endl;
//     // }  
//         return 0;
// }

// ..........................................................

// AVERAGE OF ALL ELEMENTS OF AN ARRAY:-
// {
//     int i,n;
//     float num[100], sum=0.0 , average;
//     cout<<"enter a no";
//     cin>>n;

//     for(i=0;i<n;++i)
//     {
//         cout<<i+1<<". enter no";
//         cin>>num[i];
//         sum+=num[i];
//     }
//     average= sum/n;
//     cout<<"average = "<<average ;
//     return 0;
// }

