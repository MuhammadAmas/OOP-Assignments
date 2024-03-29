#include<iostream>
#include<cmath>
using namespace std;

class curve{
    private:
    enum equation {x, y};
    int *point = new int[10];

    public:
    curve();
    virtual void computePoints () = 0;
    friend ostream& operator<<(ostream&, const curve& c);
};


class parametriccurve : public curve{
    private:
    float minT, maxT, val;

    public:
    parametriccurve ();
    void computePoints ();
       
    friend ostream& operator<<(ostream&, const parametriccurve& c);
};
