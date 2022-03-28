#include"student.h"
#include<iostream>
#include<string>
using namespace std;
student::student(){

}
student::student(string id,string depart,int year){
    this->name=id;
    this->department=depart;
    this->batch_no=year;
}
student::student(const student&stud){
    name=stud.name;
    department=stud.department;
    batch_no=stud.batch_no;

}
void student::set(string newname,int newdepart,int newbatch){
    name=newname;
    department=newdepart;
    batch_no=newbatch;
}

void student::show(){
    cout<<name<<endl<<department<<endl<<batch_no<<endl;

}
