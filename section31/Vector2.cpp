#include "Vector2.h"

Vector2 operator+(const Vector2 &v1, const Vector2 &v2)
{
  Vector2 v;
  v.x = v1.x + v2.x;
  v.y = v1.y + v2.y;
  return v;
}

Vector2 operator-(const Vector2 &v1, const Vector2 &v2)
{
  Vector2 v;
  v.x = v1.x - v2.x;
  v.y = v1.y - v2.y;
  return v;
}

Vector2 operator*(const double d, const Vector2 &v)
{
  Vector2 result;
  result.x = d * v.x;
  result.y = d * v.y;
  return result;
}

Vector2 &Vector2::operator=(const Vector2 &v)
{
  x = v.x;
  y = v.y;
  return *this;
}

Vector2 &Vector2::operator+=(const Vector2 &v)
{
  x += v.x;
  y += v.y;
  return *this;
}

Vector2 &Vector2::operator-=(const Vector2 &v)
{
  x -= v.x;
  y -= v.y;
  return *this;
}
