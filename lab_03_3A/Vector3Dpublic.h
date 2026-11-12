#pragma once 
#include "Vector3D.h"
#include <string>

class  Vector3Dpublic : public Vector3D
{
public:
	Vector3Dpublic();
	Vector3Dpublic(double x_val, double y_val, double z_val);
	Vector3Dpublic(const Vector3Dpublic& other);
	Vector3Dpublic(const Vector3D& base);

	Vector3Dpublic& operator = (const Vector3Dpublic& other);

	Vector3Dpublic& operator ++ ();
	Vector3Dpublic operator ++ (int);
	Vector3Dpublic& operator -- ();
	Vector3Dpublic operator -- (int);
	operator std::string() const;

	friend Vector3Dpublic operator + (const Vector3Dpublic& lhs, const Vector3Dpublic& rhs);
	friend Vector3Dpublic operator * (const Vector3Dpublic& vec, double scalar);
	friend Vector3Dpublic operator * (double scalar, const Vector3Dpublic& vec);
	friend double operator*(const Vector3Dpublic& lhs, const Vector3Dpublic& rhs); // —кал€рний добуток

	friend bool operator == (const Vector3Dpublic& lhs, const Vector3Dpublic& rhs);
	friend bool operator != (const Vector3Dpublic& lhs, const Vector3Dpublic& rhs);
	friend bool operator <  (const Vector3Dpublic& lhs, const Vector3Dpublic& rhs);
	friend bool operator >  (const Vector3Dpublic& lhs, const Vector3Dpublic& rhs);
	friend bool operator <= (const Vector3Dpublic& lhs, const Vector3Dpublic& rhs);
	friend bool operator >= (const Vector3Dpublic& lhs, const Vector3Dpublic& rhs);

};