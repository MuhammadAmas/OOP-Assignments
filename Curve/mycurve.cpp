#include<iostream>
#include<cmath>
// #include "curve.h"
using namespace std;

class curve{
    protected:
    enum equation {x, y};
    int *point = new int[10];

    public:
    curve(){};
    virtual void computePoints () = 0;
    friend ostream& operator<<(ostream&, const curve& c);
};

/*
Equation is;
x = t^2 + 2  y = 3t+3 

*/
class parametericcurve : public curve{
    protected:
    float val, minT, maxT;

    public:
    parametericcurve (){};
    void computePoints (){
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
    friend ostream& operator<<(ostream&, const parametericcurve& c);
};

int main(){
    parametericcurve c1;
    c1.computePoints();
    return 0;

};
