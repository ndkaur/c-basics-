#include <vector>
#include <list>
#include <set>
#include <map>
#include <forward_list>
#include <iostream>
using namespace std;
// int main()

// vectors list forlist deque functions are same

// {
//     vector<int> v = {1,2,3,5,8,9};
//     v.push_back(5);
//     v.push_back(6);
//     v.pop_back();

//     vector<int>::iterator itr;
//     cout<<"using iterator"<<endl;
//     for(itr=v.begin();itr!=v.end();itr++)
//       // cout<<*itr<<endl;
//       cout<<++*itr<<endl;

//     cout<<"using for each loop"<<endl;
//     for (int x: v)
//       cout<<x<<endl;
// } 
// ..........................................................
// LIST:-
// {
//    list<int> v = {1,2,3,5,8,9};
//     v.push_back(5);
//     v.push_back(6);
//     v.pop_back();

//   list<int>::iterator itr;
//     cout<<"using iterator"<<endl;
//     for(itr=v.begin();itr!=v.end();itr++)
//       // cout<<*itr<<endl;
//       cout<<++*itr<<endl;

//     cout<<"using for each loop"<<endl;
//     for (int x: v)
//       cout<<x<<endl;
// }
// .............................................................
// FORWARD LIST:-in this push back doesnot exist
// {
//   forward_list<int> v = {1,2,3,5,8,9};
//     v.push_front(5);
//     v.push_front(6);
    

//     forward_list<int>::iterator itr;
//     cout<<"using iterator"<<endl;
//     for(itr=v.begin();itr!=v.end();itr++)
//       // cout<<*itr<<endl;
//       cout<<++*itr<<endl;

//     cout<<"using for each loop"<<endl;
//     for (int x: v)
//       cout<<x<<endl;
// }
// ..........................................................

// SET:-in set push back is changed by insert.
// values present twice doesnot get repeted.
// {
//   set<int> v = {1,2,3,5,8,9};
//     v.insert(5);
//     v.insert(6);
//     for (int x: v)
//       cout<<x<<endl;
// }
// ....................................................

// MAP:-
// {
//     map<int,string> m;
//     m.insert(pair<int,string>(1, "ndk"));
//     m.insert(pair<int,string>(2, "abc"));

//     map<int,string >::iterator itr;
//     for(itr=m.begin();itr!=m.end();itr++)
//     {
//       cout<<itr->first<<" "<<itr->second<<endl;
//     }

//     map<int,string>::iterator itr1;
//     itr=m.find(2);
//     cout<<itr1->first<<" "<<itr1->second<<endl;
// }
// .............................................................

// AUTO:-
// if we dont know the variable type we can use auto
// {
//   auto x=2*5.4+5;
//     cout<<x;
// }

// final keyword is used to restrict inheritence and overwriting.
// .....................................................................

// LAMBDA EXPRESSIONS:-
// [capture_list](parameter_list)->return_type{body};

// {
//   [](int x,int y){cout<<"sum is"<<x+y<<endl;}(10,20);
// }

// {
//     [](){cout<<"hello"<<endl;}();
// }

// {
//     cout<<([](int x,int y){return x+y;}(10,30));
// }

// {
//     int a=[](int x,int y)int{return x+y;}(10,20);
//     cout<<a;
// }

// {
//     int a=10;
//     [a](){cout<<a<<endl;};
// }

// {
//     int a=10;
//     // auto f=[a](){cout<<a<<endl;};
//     // f();
//     // a++;
//     // f();                 
//     // here the value of a doesnot increase from 10.
//     auto f=[&a]{cout<<a<<endl;};
//     f();
//     a++;
//     f();
//     // by adding reference &a the value increases to 11
// }
// ..................................................................

// ELLIPSIS:-

int sum(int n, ...)
{
     va_list list;
    va_start(list,n);
    int x;
    int s=0;
    for(int i=0;i<n;i++)
    {
       x=va_arg(list,int);
       s+=x;
    }
    return s;
}
int main()
{  
    cout<<sum(3,4,5,6,7);
}
