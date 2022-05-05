#include<iostream>
#include<string>
using namespace std;
class student
{
public:
string name;
int rollno;
int year;


  student();
  student(string Name,int Rollno,int Year);
  student(const student&STUDENT);
  int input();
  void show();



 


};

