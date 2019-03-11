//
// Created by Ray Fang on 1/27/2019.
//

#ifndef UNTITLED_VEHICLE_H
#define UNTITLED_VEHICLE_H

//
// Created by Ray Fang on 1/26/2019.
//

#include "Chassis.h"
#include "Wheel.h"
#include <vector>
class Vehicle {

private:
    double price;
    vector<Wheel> wheels;
    Chassis chassis;
    bool drivable;
    double totalMillage;

public:
    explicit Vehicle(Chassis x);
    void addWheel(Wheel Wheel);

    bool isBuilt();

    void Drive(double);

    Chassis getChassis();

    void Display();

    double calculatePrice();


};

#endif
