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

        void turn_on(){
            if (!started)
                started = true;
        }

        void turn_of(){
            if (started)
                started = false;
        }

        void accelerate(){
            if (started)
                speed += 5;
        }

        void decelerate(){
            if (speed > 0){
                speed -= 5;
                if (speed < 0)
                    speed = 0;
            }
        }

        void cruising_speed(){
            speed = speed;
        }

        void print_data(){
            if (direction){
                cout << "Started: " << started <<" Speed: " << speed << "km/h forward. Tank percentage remaining: " << tankPercentage << 
                " Consumption: " << consumption << " Tank size: " << tankSize << " l." << endl;
            }
            else{
                cout << "Started: " << started <<" Speed: " << speed << " km/h backwards. Tank percentage remaining: " << tankPercentage << 
                " Consumption: " << consumption << " km/l. Tank size: " << tankSize << endl;
            }
        }

        void print_speed(){
            cout << "Cuerrent speed: " << speed << "km/h" << endl;
        }

        void print_consumption(){
            cout << "Consumption: " << consumption << " km/l. Range with full tank: " << tankSize * consumption << " km." 
            << "Current range: " << (tankSize*(tankPercentage/100)) * consumption << "km." << endl;
        }

        void print_current_fuel(){
            cout << "You have " << (tankSize*(tankPercentage/100.0)) << "l left, which is " << tankPercentage << " per cent of your full tank." << endl;
        }

};

#endif