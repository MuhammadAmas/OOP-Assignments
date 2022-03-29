#include <iostream>
#include <string>
#include "normalCar.h"
using namespace std;


    //null constructor
    sportsCar::sportsCar()
    {
        
    }
     //parametrize constructor
    sportsCar :: sportsCar(int passengerSpace , string edition ,string safeguard) 
    {
       this-> passengerSpace = passengerSpace;
       this-> edition = edition;
       this-> safeguard = safeguard;

    }

    //operator overloading
    ostream& operator<<(ostream& os, sportsCar& obj)
    {

    // write obj to stream
    os<<obj.passengerSpace<<obj.edition<<obj.safeguard;
    return os;
    }

    istream& operator>>(istream& is, sportsCar& obj)
    {

    // read obj from stream
    is>>obj.passengerSpace>>obj.edition>>obj.safeguard;
    return is;
    }

    //show upgraded features
    void sportsCar :: showEnhanced(normalCar car  ,normalCar colour,  normalCar wheels,normalCar weight,normalCar engine,normalCar price,sportsCar passengerSpace , sportsCar edition , sportsCar safeguard)
    {
            cout<<"car?"<<endl;
            cin>>car.car;
            cout<<"colour?"<<endl;
            cin>>colour.colour;
            cout<<"wheels?"<<endl;
            cin>>wheels.wheels;
            cout<<"weight?"<<endl;
            cin>>weight.weight;
            cout<<"input engine?"<<endl;
            cin>>engine.engine;
            cout<<"input price?"<<endl;
            cin>>price.price;
             cout<<"input passengerSpace"<<endl;
            cin>>passengerSpace.passengerSpace;
             cout<<"input edition?"<<endl;
            cin>>edition.edition;
             cout<<"input safeguard?"<<endl;
            cin>>safeguard.safeguard;
            cout<<"car = "<<car.car<<endl<<"colour = "<<endl<<colour.colour<<"weight = "<<weight.weight<<endl<<"engine = "<< engine.engine<<endl<<"price = "<<price.price<<endl<<"wheels ="<<wheels.wheels<<endl<<"passengerSpace =  "<<passengerSpace.passengerSpace<<endl<<"editon = "<<edition.edition<<endl<<"safeguard =  "<<safeguard.safeguard<<endl;


    }

    //destructor
     sportsCar::~sportsCar()
     {
     }
