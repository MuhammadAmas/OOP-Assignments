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
    friend ostream& operator<<(ostream&, const curve& c){};
};

class parametericcurve : public curve{
    private:
    float minT, maxT;

    public:
    parametericcurve (){};
    void computePoints ();
    friend ostream& operator<<(ostream&, const parametericcurve& c){};
};


