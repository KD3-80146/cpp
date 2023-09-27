#ifndef CYLINDER_H
#define CYLINDER_H

#include <iostream>
using namespace std;

class Cylinder
{
private:
    double radius;
    double height;

public:
    Cylinder();
    Cylinder(double radius, double height);
    double getRadius();
    void setRadius();
    double getHeight();
    void setHeight();
    double getVolume();
    double calculateVolume();
    void printVolume();
};

#endif