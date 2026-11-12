#include "Vector3Dpublic.h" 
#include <cmath>
#include <sstream>



Vector3Dpublic::Vector3Dpublic() 
	: Vector3D() {}

Vector3Dpublic::Vector3Dpublic(double x_val, double y_val, double z_val)
	: Vector3D(x_val, y_val, z_val) {}


Vector3Dpublic::Vector3Dpublic(const Vector3Dpublic& other)
	: Vector3D(other) {}

Vector3Dpublic::Vector3Dpublic(const Vector3D& base) 
	: Vector3D(base) {}



Vector3Dpublic& Vector3Dpublic::operator=(const Vector3Dpublic& other)
{
	if (this != &other)
	{
		SetX(other.GetX());
		SetY(other.GetY());
		SetZ(other.GetZ());
	}
	return *this;
}

Vector3Dpublic& Vector3Dpublic::operator ++ ()
{
	SetX(GetX() + 1);
	SetY(GetY() + 1);
	SetZ(GetZ() + 1);
	return *this;
}

Vector3Dpublic Vector3Dpublic::operator ++ (int)
{
	Vector3Dpublic temp(*this);
	++(*this);
	return temp;
}

Vector3Dpublic& Vector3Dpublic::operator -- ()
{
	SetX(GetX() - 1);
	SetY(GetY() - 1);
	SetZ(GetZ() - 1);
	return *this;
}

Vector3Dpublic Vector3Dpublic::operator -- (int)
{
	Vector3Dpublic temp(*this);
	--(*this);
	return temp;
}

Vector3Dpublic::operator std::string() const {
	std::stringstream ss;
	ss << "Pub(" << GetX() << ", " << GetY() << ", " << GetZ() << ")";
	return ss.str();
}

Vector3Dpublic operator + (const Vector3Dpublic& lhs, const Vector3Dpublic& rhs)
{
	return Vector3Dpublic(lhs.GetX() + rhs.GetX(), lhs.GetY() + rhs.GetY(), lhs.GetZ() + rhs.GetZ());

}

Vector3Dpublic operator * (const Vector3Dpublic& vec, double scalar)
{
	return Vector3Dpublic(vec.GetX() * scalar, vec.GetY() * scalar, vec.GetZ() * scalar);
}

Vector3D operator * (double scalar, const Vector3D& vec)
{
	return vec * scalar;
}

double operator * (const Vector3Dpublic& lhs, const Vector3Dpublic& rhs)
{
	return (lhs.GetX() * rhs.GetX()) + (lhs.GetY() * rhs.GetY()) + (lhs.GetZ() * rhs.GetZ());
}

bool operator==(const Vector3Dpublic& lhs, const Vector3Dpublic& rhs)
{
	const double eps = 1e-7;
	return (std::fabs(lhs.GetX() - rhs.GetX()) < eps) &&
		(std::fabs(lhs.GetY() - rhs.GetY()) < eps) &&
		(std::fabs(lhs.GetZ() - rhs.GetZ()) < eps);
}

bool operator!=(const Vector3Dpublic& lhs, const Vector3Dpublic& rhs)
{
	return !(lhs == rhs);
}

bool operator < (const Vector3Dpublic& lhs, const Vector3Dpublic& rhs)
{
	return lhs.Length() < rhs.Length();
}

bool operator > (const Vector3Dpublic& lhs, const Vector3Dpublic& rhs)
{
	return lhs.Length() > rhs.Length();
}

bool operator<=(const Vector3Dpublic& lhs, const Vector3Dpublic& rhs)
{
	return !(rhs < lhs);
}

bool operator>=(const Vector3Dpublic& lhs, const Vector3Dpublic& rhs)
{
	return !(lhs < rhs);
}












