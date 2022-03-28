#include<iostream>
using namespace std;
class Blood{
    public:
    float numberofRBC;
    int numberofWBC;
    int numberofPlt;
    Blood();
    Blood(float numberofRBC,int numberofWBC,int numberofPlt);
    Blood(const Blood & object);
    void display();
    void Compare();
    ~Blood();
};
    class RBC:public Blood{
    public:
    RBC(float numberofRBC);
    void Compare();
    ~RBC();
};    
    class WBC:public Blood
{

public:
    WBC(int numberofWBC);
    ~WBC();
    void Compare();
};
class Plt:public Blood
{
public:
    Plt(int numberofPlt);
    ~Plt();
    void Compare();
};


