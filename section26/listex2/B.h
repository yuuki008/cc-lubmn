#ifndef _B_H
#define _B_H

class A;

class B
{
private:
  A *m_pA;

public:
  B(A *pA);
  void hoge();
};

#endif // _B_H
