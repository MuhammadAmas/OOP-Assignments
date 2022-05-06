#include <iostream>
using namespace std;

class curve{
    curve(){};
    void computePoints (){};
    Friend ostream& operator<<(ostream&, const curve& c){};

class curve : public parametericcurve{
    parametericcurve (){};
    void computePoints (){};
    friend ostream& operator<<(ostream&, const parametericcurve& c){};
};