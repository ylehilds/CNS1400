#include <iostream>
#include <cmath>

using namespace std;

double Area(double theradius, double pivalue) {
	double area;
	area = pow(theradius, 2) * pivalue;
	return area;
}

double Circumference(double theradius, double pivalue) {
	double circumference;
	circumference = 2 * pivalue * theradius;
	return circumference;
}

double VolumeOfSphere(double theradius, double pivalue) {
	double volumeofsphere;
	volumeofsphere = 4.0/3.0 * pivalue * pow(theradius, 3);
	return volumeofsphere;
}

double SurfaceAreaOfSphere(double theradius, double pivalue) {
	double surfacearea;
	surfacearea = 4 * pivalue * pow(theradius, 2);
	return surfacearea;
}

int main()
{
	double radius;
	double pi = 3.14159;
	cout << "Please input the value for the radius:" << "\n"; 
	cin >> radius;
	cout << "The area from the input radius value is:" << Area(radius, pi) << "\n";
	cout << "The circumference from the input radius is:" << Circumference(radius, pi) << "\n"; 
	cout << "The volume of the sphere from the radius given:" << VolumeOfSphere(radius, pi) << "\n";
	cout << "The surface area of the sphere from the radius given is:" << SurfaceAreaOfSphere(radius, pi) << "\n"; 
	
	/* the formulas I got are: circunference: C=2*pi*r.
	circle area is: A=pi*sqrt(r)
	volume is: 4/3 * pi * pow(r,3)
	surface area is: 4 * pi * sqrt(r) */
	return 0; 
}
