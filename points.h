#ifndef POINTS_H
#define POINTS_H

#include <iostream>

using namespace std;

class Point2D
{
public:
	int x;
	int y;
	Point2D(int myX, int myY);
};

class Z
{
public:
	int z;
	Z(int myZ);
};

class Point3D: public Point2D, Z
{
public:
	Point3D(int myX, int myY, int myZ);
	void PointInfo();
};

class H 
{
public:
	double h;
	H(double myH);
};

class Point3Dh : public Point2D, Z, H 
{
private:
	int flag;
public:
	Point3Dh(int myX, int myY, int myZ, double myH);
	void RealCoordinates();
};

#endif