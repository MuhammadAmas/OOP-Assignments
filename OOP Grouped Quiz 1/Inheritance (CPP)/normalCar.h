#include <iostream>
#include <string>
using namespace std;
class normalCar
{
    public:
    // declaration of variables
    string car,colour;
    int wheels, weight,engine,price;
    
    //null constructor
    normalCar();

    // parametrised constructor
     normalCar(string col ,string c ,int w, int wei, int e,int p);

    //copy constructor
    normalCar(const normalCar& userObj);

    //operator overloading
    ostream& operator<<(ostream& os);
    istream& operator>>(istream& is);

    // get specifications and show
    void getAndshow(normalCar car  ,normalCar colour, normalCar wheels, normalCar  weight, normalCar engine,normalCar price);

    //destructor
    ~normalCar();
};

   class sportsCar : public normalCar
    {
         public:
         // declaration of variables
        int passengerSpace;
        string edition,safeguard;

         //null constructor
        sportsCar();

        //parametrize constructor
        sportsCar( int passengerSpace , string edition ,string safeguard); 
    
        //get specifications and show
       void showEnhanced(normalCar car  ,normalCar colour,  normalCar wheels,normalCar weight,normalCar engine,normalCar price,sportsCar passengerSpace , sportsCar edition , sportsCar safeguard);

        //operator overloading
        ostream& operator<<(ostream& os);
        istream& operator>>(istream& is);


        //destructor
        ~sportsCar();

    };
   













