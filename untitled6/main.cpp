#include <iostream>
#include <cassert>

float travelTime(float distance, float speed){
    assert(distance>0 && speed>0);
    float timeTravel=distance/speed;
    return timeTravel;
}

int main() {
    float distance, speed;
    std::cout << "Enter distance travel and speed: " << std::endl;
    std::cin>>distance>>speed;
    std::cout<<"Time travel: "<<travelTime(distance,speed);
}
