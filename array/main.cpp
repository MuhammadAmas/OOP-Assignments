#include<iostream>
using namespace std;
#include "student.h"

int main()
{

    const int n=4;
    //default
    student Student[n];//for in put
    for (int i = 0; i < n; i++){
         Student[i].input();     

    }
    //for showing
    
        for (int i = 0; i < n; i++){
         Student[i].show();
             

    }
    
    return 0;
};


