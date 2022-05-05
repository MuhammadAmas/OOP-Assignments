#include<iostream>
#include<string>
#include"student.h"
using namespace std;




  student::student()
{
    this->name;
    this->rollno=0;
    this->year=0;

}

 student::student(string Name,int Rollno,int Year)
 {
    this-> name=Name;
    this-> rollno=Rollno;
    this-> year=Year;
 }

 int student::input(){
   cout<<"enter name of student:"<<endl;
   cin>>name;
   cout<<"enter roll no:"<<endl;
   cin>>rollno;
   cout<<"enter year:"<<endl;
   cin>>year;
   return 0;

 }

 void student::show(){
   cout<<name<<endl;
   cout<<rollno<<endl;
   cout<<year<<endl;
 }






