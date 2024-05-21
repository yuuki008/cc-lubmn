#ifndef OBJECT_H
#define OBJECT_H

class Object
{
private:
  static int m_objectNum;

public:
  static int getObjectNum();
  Object();
  ~Object();
};

#endif // OBJECT_H
