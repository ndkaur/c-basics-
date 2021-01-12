#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

// WRITING IN A FILE:-

// out file stream:-
// int main()
// {
//     ofstream ofs("my.txt",ios::trunc);
//     ofs<<"ndk"<<endl;
//     ofs<<21<<endl;
//     ofs<<"google"<<endl;
// }
// ............................................................

// READING FROM A FILE:-
// in file stream:-

// int main()
// {
//     ifstream infile;
//     infile.open("my.txt");
//     if(!infile.isopen()){cout<<"file canot be opened";}
//     string str;
//     int x;
//     infile>>str;
//     infile>>x;
//     cout<<str<<" "<<x;

// // end of file
//     if(infile.eof()){cout<<"end of file reached";}
//     infile.close();
// }
// ................................................................

// SERIALIZATION:- 
// state of storing and retriving an object.
// to store data without specifying name rollno branch 
// friend operator id used.

// class student
// {
// public:
//     string name;
//     int roll;
//     int branch;
//     friend ofstream & operator<<(ofstream &ofs, student &s);
//     friend ifstream & operator>>(ifstream &ifs, student &s);
// };

//  friend ifstream & operator>>(ifstream &ifs, student &s);
// {
//     ifs>>s.name>>s.roll>>s.branch;
//     return ifs;
// }

// ofstream & operator <<(ofstream &ofs, student &s)
// {
//     ofs<<s.name<<endl;
//     ofs<<s.roll<<endl;
//     ofs<<s.branch<<endl;
//     return ofs;
// }

// int main()
// {
//     student s1;
//     s1.name="ndk";s1.roll=12;s1.branch="cs";

//     ofstream ofs("student.txt",ios::trunc);
//     ofs<<s1;
//     ifs>>s1;
//     cout<<"name"<<s1.name;
//     cout<<"roll"<<s1.roll;
//     cout<<"brancg"<<s1.branch<<endl;
//     ofs.close();
//     ifs.close();
// }
// ...........................................................


