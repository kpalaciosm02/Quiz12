#include <string>
#include <iostream>
using namespace std;

#ifndef TRUCK
#define TRUCK
class Truck{
    private:
        int speed;
        bool direction;
        bool started;
        int tankPercentage;
        int tankSize;
        int consumption;
    public:
        Truck(int pSpeed, bool pDirection, bool pStarted, int pTankPercentage, int pTankSize, int pConsumption){
            speed = pSpeed; direction = pDirection; started = pStarted; tankPercentage = pTankPercentage; tankSize = pTankSize; consumption = pConsumption; 
        }
};

#endif