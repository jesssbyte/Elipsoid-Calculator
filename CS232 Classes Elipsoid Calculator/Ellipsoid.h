#ifndef _ELLIPSOID
#define _ELLIPSOID

class Ellipsoid {
private:
	double aHeight;
	double bHeight;
	double cHeight;
public:
	const double PI = 3.14159;
	//constructors 
	Ellipsoid(); // default constructor 
	Ellipsoid(double aHeightPar, double bHeightPar, double cHeightPar);  //overloaded constructor 

	//getters 
	double getAHeight();
	double getBHeight();
	double getCHeight();

	//setters 
	void setAHeight(double aHeightPar);
	void setBHeight(double bHeightPar);
	void setCHeight(double cHeightPar);

	//calculations 
	double calcSurfaceArea();
	double calcVolume();

};

#endif //!_ELLIPSOID 
