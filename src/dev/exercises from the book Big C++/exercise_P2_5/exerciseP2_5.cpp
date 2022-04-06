#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 double radius;
 double pi = 3.14159;
 cout<<"Please input the value for the radius:" << "\n"; 
 cin>> radius;
 cout<<"The area from the input radius value is:" << pow(radius,2) * pi << "\n";
 cout<<"The circumference from the input radius is:" << 2 * pi * radius << "\n"; 
 cout<<"The volume of the sphere from the radius given:" << 4.0/3.0 * pi * pow(radius, 3) << "\n";
 cout<<"The surface area of the sphere from the radius given is:" << 4 * pi * pow(radius,2) << "\n"; 
 
 
 /* the formulas I got are: circunference: C=2*pi*r.
 circle area is: A=pi*sqrt(r)
 volume is: 4/3 * pi * pow(r,3)
 surface area is: 4 * pi * sqrt(r) */
 return 0;
 
 
}

