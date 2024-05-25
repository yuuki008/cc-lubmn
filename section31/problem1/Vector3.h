#ifndef VECTOR3_H
#define VECTOR3_H

#include "Vector2.h"

class Vector3
{
public:
  double x, y, z;

public:
  Vector3 &operator=(const Vector3 &v);
  Vector3 &operator+=(const Vector3 &v);
  Vector3 &operator-=(const Vector3 &v);
};

Vector3 operator+(const Vector3 &, const Vector3 &);
Vector3 operator-(const Vector3 &, const Vector3 &);
Vector3 operator*(const double, const Vector3 &);

#endif
