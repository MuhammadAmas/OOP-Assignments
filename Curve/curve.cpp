#include <iostream>
#include <cmath>
using namespace std;

class curve{
    private:
    enum equation {  };
    // int point[] = {};

    public:
    curve(){};
    virtual void computePoints () = 0;
    // friend ostream& operator<<(ostream&, const curve& c){};
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
        for (int i = 0; i <5; i++){
            cout << "x"<<i+1 <<"= " << pow(i,2) + 2<<endl;
        }
        for (int i = 0; i <5; i++){
            cout << "y"<<i+1 <<"= "<<3*i + 3<<endl;
        }        
    };
    // friend ostream& operator<<(ostream&, const parametericcurve& c){};
};

int main(){
    parametericcurve c1;
    c1.computePoints();
    return 0;

};

