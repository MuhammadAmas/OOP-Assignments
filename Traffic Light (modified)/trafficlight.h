#include <iostream>
using namespace std;

const int RED = 1;
const int YELLOW =2;
const int GREEN = 3;
class TrafficLight {
    private:
    int color;
    public: 
    TrafficLight();
    void changeColor();
    void showColor();
};



