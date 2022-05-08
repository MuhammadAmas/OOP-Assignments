#include<iostream>
#include<cmath>
// #include "curve.h"
using namespace std;

class curve{
    private:
    enum equation {  };
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
    private:
    float minT, maxT;

    public:
    parametericcurve (){};
    void computePoints (){
        cout << "PARAMETERIC EQUATION " <<endl;
        cout<< "x = t^2 + 2  ,  y = 3t + 3""\n" << endl;
        for (int i = 0; i <5; i++){
            cout << "x"<<i+1 <<" = " << pow(i,2) + 2;
            cout <<"          y"<<i+1 <<" = "<<3*i + 3<<endl;
        }
        for (int i = 0; i <5; i++){
            
        }        
    };
    friend ostream& operator<<(ostream&, const parametericcurve& c);
};

int main(){
    parametericcurve c1;
    c1.computePoints();
    return 0;

};

