//
// Created by Ray Fang on 1/27/2019.
//

#include "Chassis.h"
//
// Created by Ray Fang on 1/26/2019.
//

#include "Chassis.h"
#include <string>
using namespace std;
// default constructors
Chassis::Chassis(): size("medium"),quality("fair"){
    NumWheels = getNumWheels();

}
Chassis::Chassis(string size):size(size),quality("fair") {
    NumWheels = getNumWheels();
}

Chassis::Chassis(string size, string quality): size(size),quality(quality){
    NumWheels = getNumWheels();
}
int Chassis::getNumWheels(){
    if(size== "small"){
        NumWheels = 3;
    }else if(size == "medium"){
        NumWheels = 4;
    }else if (size == "large"){
        NumWheels = 6;
    }
    return NumWheels;
}

const string &Chassis::getQuality() const {
    return quality;
}

const string &Chassis::getSize() const {
    return size;
}
