#include <iostream>
#include <vector>

using namespace std;

class base 
{
public:
	virtual void show() {};
};

template <typename T> class Point2D 
{
protected:
	T x, y;
public:
	Point2D(T x, T y) 
	{
		this->x = x;
		this->y = y;
	}
};

template <typename T> class Z 
{
protected:
	T z;
public:
	Z(T z) 
	{
		this->z = z;
	}
};

template <typename T> class H 
{
protected:
	T h;
public:
	H(T h) 
	{
		this->h = h;
	}
};

template <typename T> class Point3Dh : public Point2D <T>, Z <T>, H <T>, base {
protected:
	bool flag;
public:
	Point3Dh(T x, T y, T z, T h) : Point2D <T>(x, y), Z <T>(z), H <T>(h) {
		flag = false;
		if (this->h == 0) {
			flag = true;
		}
	}
	void show() {
		if (flag == 0)
		{
			cout << "Реальные координаты объекта : " << "(" << this->x / this->h << ", " << this->y / this->h << ", " << this->z / this->h << ")" << endl;
		}
		else {
			cout << "ERROR. 4 координата объекта не должна быть равна 0." << endl;
		}
	}
};

int main() {
	setlocale(LC_ALL, "ru");

	Point3Dh <int> point1(2, 3, 2, 3);
	cout << "Однородные координаты точки : (2, 3, 2, 3), тип int" << endl;
	point1.show();

	system("pause");
	cout << endl;

	Point3Dh <double> point2(6.666, 5.555, 5.555, 2);
	cout << "Однородные координаты точки : (6.666, 5.555, 5.555, 2), double" << endl;
	point2.show();

	system("pause");
	cout << endl;

	Point3Dh <short> point3(10, 10, 4, 4);
	cout << "Однородные координаты точки : (10, 10, 4, 4), short." << endl;
	point3.show();

	system("pause");
	cout << endl;

	Point3Dh <long> point4(120, 90, 66, 15);
	cout << "Однородные координаты точки : (120, 90, 66, 15), long." << endl;
	point4.show();

	system("pause");
	cout << endl;

	Point3Dh <float> point5(10.4, 11.7, 12.1, 9.9);
	cout << "Однородные координаты точки : (10.4, 11.7, 12.1, 9.9), float." << endl;
	point5.show();

	system("pause");
	system("cls");

	vector <base*> v;

	v.push_back((base*)&point1);
	v.push_back((base*)&point2);
	v.push_back((base*)&point3);
	v.push_back((base*)&point4);
	v.push_back((base*)&point5);

	for (int i = 0; i < 5; i++)
	{
		v[i]->show();
	}

	system("pause");
}