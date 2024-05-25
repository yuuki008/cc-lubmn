#include "Vector3.h"

Vector3 operator+(const Vector3 &v1, const Vector3 &v2)
{
  Vector3 v;
  v.x = v1.x + v2.x;
  v.y = v1.y + v2.y;
  v.z = v1.z + v2.z;
  return v;
}

Vector3 operator-(const Vector3 &v1, const Vector3 &v2)
{
  Vector3 v;
  v.x = v1.x - v2.x;
  v.y = v1.y - v2.y;
  v.z = v1.z - v2.z;
  return v;
}

Vector3 operator*(const double d, const Vector3 &v)
{
  Vector3 result;
  result.x = d * v.x;
  result.y = d * v.y;
  result.z = d * v.z;
  return result;
}

Vector3 &Vector3::operator=(const Vector3 &v)
{
  x = v.x;
  y = v.y;
  z = v.z;
  return *this;
}

Vector3 &Vector3::operator+=(const Vector3 &v)
{
  x += v.x;
  y += v.y;
  z += v.z;
  return *this;
}

Vector3 &Vector3::operator-=(const Vector3 &v)
{
  x -= v.x;
  y -= v.y;
  z -= v.z;
  return *this;
}