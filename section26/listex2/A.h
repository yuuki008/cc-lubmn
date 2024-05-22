#ifndef _A_H
#define _A_H

class B;

class A
{
private:
  B *m_pB;

public:
  A();
  void foo();
  void bar();
};

#endif // _A_H