#include <iostream>
#include "company.h"
using namespace std;

desk mydesk;
office *myoffice;
employee :: employee (office *o){
    myoffice = o;
    cout<<"employee :: employee()\n";
}

employee :: ~employee(){
    cout<<"employee :: ~employee()\n";
}
