#include "Vector3Dprivate.h" 
#include <cmath>
#include <sstream>

Vector3Dprivate::Vector3Dprivate() : Vector3D(){}

Vector3Dprivate::Vector3Dprivate(double x_val, double y_val, double z_val)
	: Vector3D(x_val, y_val, z_val) {}

Vector3Dprivate::Vector3Dprivate(const Vector3Dprivate& other) : 
	Vector3D(other) {}





Vector3Dprivate& Vector3Dprivate::operator = (const Vector3Dprivate& other)
{
	if (this != &other)
	{
		SetX(other.GetX());
		SetY(other.GetY());
		SetZ(other.GetZ());
	}
	return *this;
}

Vector3Dprivate& Vector3Dprivate::operator ++ ()
{
	SetX(GetX() + 1);
	SetY(GetY() + 1);
	SetZ(GetZ() + 1);
	return *this;
}

Vector3Dprivate Vector3Dprivate::operator++(int) {
	Vector3Dprivate temp(*this);
	++(*this);
	return temp;
}

Vector3Dprivate& Vector3Dprivate::operator -- ()
{
	SetX(GetX() - 1);
	SetY(GetY() - 1);
	SetZ(GetZ() -1);
	return *this;
}

Vector3Dprivate Vector3Dprivate::operator -- (int)
{
	Vector3Dprivate temp(*this);
	--(*this);
	return temp;
}

Vector3Dprivate::operator std::string() const
{
	std::stringstream ss;
	ss << "Priv(" << GetX() << ", " << GetY() << ", " << GetZ() << ")";
	return ss.str();
}

Vector3Dprivate operator + (const Vector3Dprivate& lhs, const Vector3Dprivate& rhs)
{
	return Vector3Dprivate(lhs.GetX() + rhs.GetX(), lhs.GetY() + rhs.GetY(), rhs.GetZ() + rhs.GetZ());

}

Vector3Dprivate operator * (const Vector3Dprivate& vec, double scalar)
{
	return Vector3Dprivate(vec.GetX() * scalar, vec.GetY() * scalar, vec.GetZ() * scalar);
}

Vector3Dprivate operator * (double scalar, const Vector3Dprivate& vec) { return vec * scalar; }
double operator * (const Vector3Dprivate& lhs, const Vector3Dprivate& rhs) {
	return (lhs.GetX() * rhs.GetX()) + (lhs.GetY() * rhs.GetY()) + (lhs.GetZ() * rhs.GetZ());
}

bool operator==(const Vector3Dprivate& lhs, const Vector3Dprivate& rhs)
{
	const double eps = 1e-7;
	return (std::fabs(lhs.GetX() - rhs.GetX()) < eps) &&
		(std::fabs(lhs.GetY() - rhs.GetY()) < eps) &&
		(std::fabs(lhs.GetZ() - rhs.GetZ()) < eps);
}

bool operator!=(const Vector3Dprivate& lhs, const Vector3Dprivate& rhs)
{
	return !(lhs == rhs);
}

bool operator < (const Vector3Dprivate& lhs, const Vector3Dprivate& rhs)
{
	return lhs.Length() < rhs.Length();
}

bool operator > (const Vector3Dprivate& lhs, const Vector3Dprivate& rhs)
{
	return lhs.Length() > rhs.Length();
}


std::ostream& operator<<(std::ostream& out, const Vector3Dprivate& vec)
{
	out << (const Vector3D)vec;
	return out;
}

std::istream& operator>>(std::istream& in, Vector3Dprivate& vec)
{
	in >> (Vector3D&)vec;
	return in;
}


