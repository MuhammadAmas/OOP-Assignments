#include "library.h"
#include"student.h"
#include<iostream>
#include<string>
using namespace std;
int main(){
    library l1;
    library l2("ubit","ku",2);
    l2.printdetails();
    student s1("nabiha","kubs",2021);
    s1.show();
};

