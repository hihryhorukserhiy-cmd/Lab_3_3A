#pragma once 
#include "Vector3D.h"
#include <string>

class  Vector3Dprivate : private Vector3D
{
public:
	Vector3Dprivate();
	Vector3Dprivate(double x_val, double y_val, double z_val);
	Vector3Dprivate(const Vector3Dprivate& other);

	using Vector3D::Length;

	Vector3Dprivate& operator = (const Vector3Dprivate& other);


	Vector3Dprivate& operator ++ ();
	Vector3Dprivate operator ++ (int);
	Vector3Dprivate& operator -- ();
	Vector3Dprivate operator -- (int);
	operator std::string() const;

	friend Vector3Dprivate operator + (const Vector3Dprivate& lhs, const Vector3Dprivate& rhs);
	friend Vector3Dprivate operator * (const Vector3Dprivate& vec, double scalar);
	friend Vector3Dprivate operator * (double scalar, const Vector3Dprivate& vec);
	friend double operator * (const Vector3Dprivate& lhs, const Vector3Dprivate& rhs); // —кал€рний добуток

	friend bool operator == (const Vector3Dprivate& lhs, const Vector3Dprivate& rhs);
	friend bool operator != (const Vector3Dprivate& lhs, const Vector3Dprivate& rhs);
	friend bool operator <  (const Vector3Dprivate& lhs, const Vector3Dprivate& rhs);
	friend bool operator >  (const Vector3Dprivate& lhs, const Vector3Dprivate& rhs);
	friend bool operator <= (const Vector3Dprivate& lhs, const Vector3Dprivate& rhs);
	friend bool operator >= (const Vector3Dprivate& lhs, const Vector3Dprivate& rhs);

	
	friend std::ostream& operator << (std::ostream& out, const Vector3Dprivate& vec);
	friend std::istream& operator >> (std::istream& in, Vector3Dprivate & vec);

};