//
// Created by Ray Fang on 1/27/2019.
//
//
// Created by Ray Fang on 1/26/2019.
//

#ifndef UNTITLED_CHASSIS_H
#define UNTITLED_CHASSIS_H


#include <string>
using namespace std;
class Chassis{
private:
    string size;
    string quality;
    int NumWheels;
    bool drive;


public:
    Chassis();
    explicit Chassis(string size);
    Chassis(string size, string quality);



    int getNumWheels();
    void newWheel();
    bool isBuilt();

    const string &getQuality() const;

    const string &getSize() const;
};




#endif //LAB2_CHASSIS_H
