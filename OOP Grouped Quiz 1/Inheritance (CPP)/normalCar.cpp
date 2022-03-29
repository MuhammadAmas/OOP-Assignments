#include <iostream>
#include <string>
#include "normalCar.h"
using namespace std;

    //null constructor
    normalCar::normalCar()
    {

    }

     //parametrize constructor
    normalCar :: normalCar(string c ,string col ,int w, int wei , int e,int p) 
    {
        car = c;
        colour = col;
        wheels = w;
        weight = wei;
        engine = e;
        price = p;

    }

    //copy constructor
    normalCar::normalCar(const normalCar& userObj)
    {
        car = userObj.car;
        colour = userObj.colour;
        wheels = userObj.wheels;
        weight = userObj.weight;
        engine = userObj.engine;
        price = userObj.price;
    }

    //operator overloading
    ostream& operator<<(ostream& os, normalCar& obj)
    {

    // write obj to stream
    os<<obj.weight<<obj.engine<<obj.price<<obj.wheels<<obj.car <<obj.colour;
    return os;
    }

    istream& operator>>(istream& is, normalCar& obj)
    {
        
    // read obj from stream
    is>>obj.weight>>obj.engine>>obj.price>>obj.wheels>>obj.car >>obj.colour;
    return is;
    }

    // get specifications and show
    void normalCar::getAndshow(normalCar car  ,normalCar colour,  normalCar wheels,normalCar weight,normalCar engine,normalCar price)
      { 
            cout<<"car"<<endl;
            cin>>car.car;
            cout<<"colour"<<endl;
            cin>>colour.colour;
            cout<<"wheels"<<endl;
            cin>>wheels.wheels;
            cout<<"weight"<<endl;
            cin>>weight.weight;
            cout<<"engine?"<<endl;
            cin>>engine.engine;
            cout<<"price?"<<endl;
            cin>>price.price;
            cout<<"car = "<<car.car<<endl<<"colour = "<<colour.colour<<endl<<"weight(lb) = "<<weight.weight<<endl<<"engine = "<<endl<< engine.engine<<endl<<"price = "<<price.price<<endl<<" wheels ="<<wheels.wheels<<endl;
      }

    
    //destructor
    normalCar::~normalCar()
    {
    
    }
