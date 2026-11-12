#pragma once 
#include <iostream>
#include <string>

class  Vector3D
{
private:
	double x;
	double y;
	double z;

public:
	Vector3D();
	Vector3D(double x_val, double y_val, double z_val);
	Vector3D(const Vector3D& other);
	~Vector3D();

	double GetX() const { return x; }
	double GetY() const { return y; }
	double GetZ() const { return z; }

	void SetX(double value) { x = value; }
	void SetY(double value) { y = value; }
	void SetZ(double value) { z = value; }


	double Length() const; // довжина вектора
	
	friend std::ostream& operator << (std::ostream& out, const Vector3D& vec);
	friend std::istream& operator >> (std::istream& in, Vector3D& vec);

};