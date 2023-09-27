#include "cylinder.h"
int main()
{
     cout << "getVolume through constructor initialization list:\n"
          << endl;
     Cylinder c{12.22, 34.55};
     // Cylinder(12.22, 34.55);
     c.printVolume();

     cout << "getVolume with user defined values:\n"
          << endl;
     Cylinder c1;
     c1.setRadius();
     c1.setHeight();
     c1.calculateVolume();
     c1.printVolume();

     return 0;
}