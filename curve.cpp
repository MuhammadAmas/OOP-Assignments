#include <iostream>
using namespace std;
class curve
{
protected:
    enum type{parametric, polar, cartesian};
    type curve_type;
    float *point;

public:
    curve(int n)
    {
        point = new float[n];
    }
    virtual void computepoints() = 0;
    virtual void printpoints() = 0;
};

class ParametricCurve : public curve
{
    float maxT, minT;
    int lenght;

public:
    ParametricCurve(int n, float minT, float maxT) : curve(n)
    {
        this->maxT = maxT;
        this->minT = minT;
    }

    void computepoints()
    {
        cout << "Enter the number of points: ";
        cin >> lenght;                               
        cout << "The minT is: "<<this->minT<<endl;
        cout << "The maxT is: "<<this->maxT<<endl;

        for (int i = 0; i < lenght; i++)
        {
            int num;
            cout << "Enter the " << i + 1 << "th point: ";
            cin >> num;
            if(num >= minT && num <= maxT){
                point[i] = num;
            }
            else{
                cout<<"can't compute this number"<<endl;
                i--;
            }
        }
    }                                                
    void printpoints()
    {
        cout << "The points are: ";
        for (int i = 0; i < lenght; i++)
        {
            cout << point[i] << " ";
        }
        cout << "\n";
    }
    friend ostream& operator<<(ostream &, const ParametricCurve *);
    ~ParametricCurve()
    {

        delete[] point;
    }
};
ostream& operator<<(ostream &out, const ParametricCurve *c){
    for (int i = 0; i < c->lenght; i++)
    {
        out << c->point[i] << " ";
    }
    return out;
}
int main()
{  
    ParametricCurve c(2,5,10);
    c.computepoints();
    c.printpoints();
    cout<<&c;
    
    return 0;
}