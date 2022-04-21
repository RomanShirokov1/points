#include "points.h"

int main() {
	setlocale(LC_ALL, "ru");

	Point3Dh point(2, 3, 2, 3);
	cout << "Однородные координаты точки : (2, 3, 2, 3)" << endl;
	point.RealCoordinates();

	system("pause");
	system("cls");

	Point3Dh point1(6, 5, 5, 0);
	cout << "Однородные координаты точки : (6, 5, 5, 0)" << endl;
	point1.RealCoordinates();

	system("pause");
	system("cls");

	Point3Dh point2(3, 6, 1, 8);
	cout << "Однородные координаты точки : (3, 6, 1, 8)" << endl;
	point2.RealCoordinates();

	system("pause");
}