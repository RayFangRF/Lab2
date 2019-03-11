
//
// Created by Ray Fang on 1/26/2019.
//

#include "Vehicle.h"
#include "Wheel.h"
#include "vector"
#include <iostream>
#include <iomanip>
using namespace std;

Vehicle::Vehicle(Chassis cha):chassis(cha){
    price = calculatePrice();
}
void Vehicle::addWheel(Wheel wheel){
    if(wheels.size() ==(unsigned) chassis.getNumWheels()){
        cout << "You've already added all the wheels!"<<endl;
        return;
    }
    wheels.push_back(wheel);
    calculatePrice();

}
bool Vehicle::isBuilt(){
    if(wheels.size() >=(unsigned) chassis.getNumWheels()){
        return true;
    }else{
        return false;
    }
}
Chassis Vehicle::getChassis(){
    return chassis;
}
void Vehicle::Drive(double a){
    if(!isBuilt()){
        printf("Vehicle not built. Literally un-drivable");
    }
    for(size_t i =1; i<wheels.size();i++){
        if(wheels[i].getLeftOverMillage() < wheels[i-1].getLeftOverMillage()){
            totalMillage = wheels[i].getLeftOverMillage();
        } else{
            totalMillage = wheels[0].getLeftOverMillage();
        }
    }
    if(totalMillage <= a){
        cout<<"Broke down! "<<"You've traveled "<<totalMillage<<" miles!"<<endl;
    }else{
        cout<<"You've traveled "<<a<<" miles!"<<endl;
    }
    for(size_t i = 0;  i<wheels.size();i++){
        if(totalMillage >a){
            wheels[i].setLeftOverMillage(wheels[i].getLeftOverMillage()-a);
            wheels[i].setCondition(wheels[i].getLeftOverMillage());
            calculatePrice();
        }else {
            wheels[i].setLeftOverMillage(wheels[i].getLeftOverMillage() - totalMillage);
            wheels[i].setCondition(wheels[i].getLeftOverMillage());
            calculatePrice();
        }
    }
}
void Vehicle::Display(){

    cout<<"Vehicle:\n"<<"\tPrice: "<<setprecision(1)<<fixed<<price<<endl;
    cout<<"Chassis:\n"<<"\tSize: "<<chassis.getSize()<<endl;
    cout<<"\tQuality: "<<chassis.getQuality()<<endl;
    cout<<"\tNumber of Wheels: "<<wheels.size()<<endl;
    for(int i = 0;(unsigned)i<wheels.size();i++){
        cout<<"Wheel "<<i+1<<":"<<endl;
        cout<<"\tMileage Left: "<<fixed<<setprecision(1)<<wheels[i].getLeftOverMillage()<<endl;
        cout<<"\tCondition: "<<wheels[i].getCondition()<<endl;

    }
}

double Vehicle::calculatePrice() {
    double defaultPrice = 500.0;
            for(size_t i = 0;i< wheels.size();i++){
                if(wheels[i].getCondition()=="poor" ){
                    defaultPrice*= 1.5;
                }else if(wheels[i].getCondition() == "fair"){
                    defaultPrice*= 1.8;
                }else{
            defaultPrice*= 2.2;
                }
            }
    if(chassis.getQuality()=="poor"){
        defaultPrice *= 5 ;
    }else if(chassis.getQuality()=="fair"){
        defaultPrice*= 8 ;
    }else{
       defaultPrice *= 12 ;
    }
    price = defaultPrice;
    return price;
}

