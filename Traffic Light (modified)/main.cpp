#include <iostream>
#include "trafficlight.h"
using namespace std;

TrafficLight external_light;

int main(){
    external_light.changeColor(); //green
    for (int i =1; i <=3; i++){
        cout << "Times the loop has executed :" <<i<<endl;

        TrafficLight automaticLight;
        automaticLight.changeColor();//green

        static TrafficLight staticLight;
        staticLight.changeColor(); //green

        cout<<"The automatic light is ";
        automaticLight.showColor();

        cout<<"The static light is ";
        staticLight.showColor();
    }
    cout<<"The External light is ";
    external_light.showColor();

}