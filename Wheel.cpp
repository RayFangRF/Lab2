//
// Created by Ray Fang on 1/27/2019.
//

#include "Wheel.h"
//
// Created by Ray Fang on 1/26/2019.
//

#include "Wheel.h"
#include <string>
using namespace std;
Wheel::Wheel():condition("fair"){
    leftOverMillage = 10000;
}


Wheel::Wheel(string condition):condition(condition) {
    if (condition == "poor") {
        leftOverMillage = 5000;
    } else if (condition=="fair") {
        leftOverMillage = 10000;
    } else {
        leftOverMillage = 20000;
    }
}

void Wheel::setLeftOverMillage(double leftOverMillage) {
    Wheel::leftOverMillage = leftOverMillage;
}

void Wheel::setCondition(double milage) {
    if(milage >= 10000){
        condition = "good";
    }else if(milage >= 5000){
        condition = "fair";
    }else if(milage < 5000){
        condition = "poor";
    }

}

string Wheel::getCondition(){
    return condition;
}

float Wheel::getLeftOverMillage() const {
    return leftOverMillage;
}
