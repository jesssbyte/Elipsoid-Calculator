#include<iostream>
#include"Ellipsoid.h"
using namespace std;

int main() {
	//declerations 
	double aHeight;
	double bHeight;
	double cHeight;
	double surfaceArea;
	double volume; 

	Ellipsoid myEgg;

	// get user input 
	cout << "Elliposid Calculator" << endl << endl;
	cout << "Enter the A height value: ";
	cin >> aHeight;
	cout << "Enter the B height value: ";
	cin >> bHeight;
	cout << "Enter the C height value: ";
	cin >> cHeight;

	//calculation
	myEgg.setAHeight(aHeight);
	myEgg.setBHeight(bHeight);
	myEgg.setCHeight(cHeight);

	surfaceArea = myEgg.calcSurfaceArea();
	volume = myEgg.calcVolume();

	//output
	cout << "Surface area: " << myEgg.calcSurfaceArea() << endl;
	cout << "Volume: " << myEgg.calcVolume() << endl;

	return 0; 
}