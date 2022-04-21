#include "points.h"
#include <iostream>

using namespace std;

Point2D::Point2D(int myX, int myY)
{
	x = myX;
	y = myY;
}

Z::Z(int myZ)
{
	z = myZ;
}

H::H(double myH)
{
	h = myH;
}

Point3D::Point3D(int myX, int myY, int myZ) : Point2D(myX, myY), Z(myZ) {}

void Point3D::PointInfo() 
{
	cout << "Координаты точки : (" << x << ", " << y << ", " << z << ")" << endl;
}

Point3Dh::Point3Dh(int myX, int myY, int myZ, double myH) : Point2D(myX, myY), Z(myZ), H(myH)
{
	flag = 0;
	if (h == 0) {
		flag = 1;
	}
}

void Point3Dh::RealCoordinates() 
{
	if (flag == 0) 
	{
		cout << "Реальные координаты объекта : " << "(" << x / h << ", " << y / h << ", " << z / h << ")" << endl;
	}
	else {
		cout << "Ошибка, 4 координата объекта равна 0." << endl;
	}
}