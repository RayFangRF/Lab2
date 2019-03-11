//
// Created by Ray Fang on 1/27/2019.
//
//
// Created by Ray Fang on 1/26/2019.
//

#ifndef UNTITLED_WHEELS_H
#define UNTITLED_WHEELS_H
#include <string>
using namespace std;
class Wheel{
private:
    double leftOverMillage;
    string condition;
public:
    Wheel();

    Wheel(string condition);

    string getCondition();

    float getLeftOverMillage() const;

    void setLeftOverMillage(double leftOverMillage);

    void setCondition(double);

};


#endif //LAB2_WHEELS_H
