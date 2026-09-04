#include"Ellipsoid.h"
#include<cmath>

Ellipsoid::Ellipsoid() {
	setAHeight (0.0);
	setBHeight (0.0);
	setCHeight (0.0);

}
Ellipsoid::Ellipsoid(double aHeightPar, double bHeightPar, double cHeightPar) {
	setAHeight (aHeightPar);
	setBHeight (bHeightPar);
	setCHeight (cHeightPar);
}

double Ellipsoid::getAHeight() {
	return aHeight;
}
double Ellipsoid::getBHeight() {
	return bHeight;
}
double Ellipsoid::getCHeight() {
	return cHeight;
}

void Ellipsoid::setAHeight(double aHeightPar) {
	if (aHeightPar >= 0.0)
		aHeight = aHeightPar;
	else
		aHeight = 0.0;
}
void Ellipsoid::setBHeight(double bHeightPar) {
	if (bHeightPar >= 0.0)
		bHeight = bHeightPar;
	else
		bHeight = 0.0;
}
void Ellipsoid::setCHeight(double cHeightPar) {
	if (cHeightPar >= 0.0)
		cHeight = cHeightPar;
	else
		cHeight = 0.0;
}
double Ellipsoid::calcSurfaceArea() {
	return 4.0 * PI * pow((pow(aHeight*bHeight, 1.6) + pow(aHeight*cHeight, 1.6) + pow(bHeight*cHeight,1.6))/3.0, 1.0 / 1.6);

}

double Ellipsoid::calcVolume() {
	return (4.0 / 3.0) * PI * aHeight * bHeight * cHeight;
}


