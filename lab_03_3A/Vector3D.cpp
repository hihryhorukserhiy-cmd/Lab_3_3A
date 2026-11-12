#include "Vector3D.h" 
#include <cmath>


Vector3D::Vector3D() : x(0.0), y(0.0), z(0.0) {}

Vector3D::Vector3D(double x_val, double y_val, double z_val)
	: x(x_val), y(y_val), z(z_val) {}

Vector3D::Vector3D(const Vector3D& other)
	: x(other.x), y(other.y), z(other.z) {}

Vector3D::~Vector3D() {}


double Vector3D::Length() const
{
	return std::sqrt(x * x + y * y + z * z);
}


std::ostream& operator<<(std::ostream& out, const Vector3D& vec)
{
	out << "(" << vec.x << ", " << vec.y << ", " << vec.z << ")";
	return out;
}

std::istream& operator>>(std::istream& in, Vector3D& vec)
{
	std::cout << " ¬вед≥ть X: "; in >> vec.x;
	std::cout << " ¬вед≥ть Y: "; in >> vec.y;
	std::cout << " ¬вед≥ть Z: "; in >> vec.z;
	return in;
}










