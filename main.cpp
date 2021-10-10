#include "Truck.hpp"

int main(){
    Truck truck1(10,true, true, 90, 100, 10);

    truck1.print_data();
    truck1.accelerate();
    truck1.print_data();
    truck1.decelerate();
    truck1.print_data();
    truck1.print_current_fuel();
}