#include "cylinder.h"
Cylinder::Cylinder()
{
    this->height = 0;
    this->radius = 0;
}
Cylinder::Cylinder(double radius, double height) : radius(radius), height(height)
{
    this->height = height;
    this->radius = radius;
};

double Cylinder::getRadius()
{
    return this->radius;
}
void Cylinder::setRadius()
{
    double radius;
    cout << "enter radius" << endl;
    cin >> this->radius;
}
double Cylinder::getHeight()
{
    return this->height;
}
void Cylinder::setHeight()
{
    double height;
    cout << "enter height" << endl;
    cin >> this->height;
}

double Cylinder::getVolume()
{
    double volume = 3.14 * this->radius * height * radius;
    return volume;
}
double Cylinder::calculateVolume()
{
    double r = getRadius();
    double h = getHeight();
    double volume = 3.14 * r * r * h;
    return volume;
}
void Cylinder::printVolume()
{
    cout << "Volume of Cylinder having Radius " << getRadius() << " and Height " << getHeight() << " is :" << getVolume() << endl;

    cout << "------------------------------------\n";
}