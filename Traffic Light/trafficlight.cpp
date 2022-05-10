#include <iostream>
#include "trafficlight.h"
using namespace std;

TrafficLight :: TrafficLight(){
    color = RED;
    }

void TrafficLight:: changeColor(){
    if (color == RED){
        color = GREEN;
    }
    else{
        color = RED;
    }
}

void TrafficLight :: showColor (){
    if (color == RED){
        cout<<"RED"<<endl;
    }
    else{
        cout<<"GREEN"<<endl;
    }
}

