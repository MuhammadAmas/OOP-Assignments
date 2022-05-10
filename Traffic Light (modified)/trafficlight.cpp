#include <iostream>
#include "trafficlight.h"
using namespace std;

TrafficLight :: TrafficLight(){
    color = RED;
    }

void TrafficLight:: changeColor(){
    if (color == RED){
        color = YELLOW;
    }
    else if(color == YELLOW){
        color = GREEN;
    }
    else{
        color = RED;
    }
}

void TrafficLight :: showColor (){
    if (color == RED){
        cout<<"RED\n"<<endl;
    }
    else if (color == YELLOW){
        cout<<"YELLOW\n"<<endl;
    }
    else{
        cout<<"GREEN\n"<<endl;
    }
}

