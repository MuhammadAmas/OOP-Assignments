 #include<iostream>
#include<cmath>
 #include "curve.h"
using namespace std;

 
parametriccurve::parametriccurve (){};

 /*
Equation is;
x = t^2 + 2  y = 3t+3 
*/
void parametriccurve::computePoints (){
    cout << "        PARAMETERIC EQUATIONS \n" <<endl;
    cout<< "Test Case: 01 \n x = t^2 + 2  ,  y = 3t + 3""\n" << endl;
    for (float i = 0; i <5; i++){
        cout << "x"<<i+1 <<" = " << pow(i,2) + 2;
        cout <<"          y"<<i+1 <<" = "<<3*i + 3<<endl;
    }

    cout<< "\nTest Case: 02 \nx = sint  ,  y = cost""\n" << endl;
    for (float i = 1; i <6; i++){
        val = i*(3.14159/180);
        cout << "x"<<i <<" = " << sin(val);
        cout <<"          y"<<i <<" = "<<cos(val)<<endl;            
    }        
};
ostream& operator<<(ostream&, const parametriccurve& c){};
