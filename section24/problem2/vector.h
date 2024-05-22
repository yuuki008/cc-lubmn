#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
private:
  double m_x;
  double m_y;

public:
  Vector();
  Vector(double x, double y);
  void set(double x, double y);
  double getX();
  double getY();
  void print();
};

#endif // VECTOR_H
