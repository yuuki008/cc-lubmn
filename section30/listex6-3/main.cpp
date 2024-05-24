#include <iostream>
#include "Sample.h"
#include "IInf1.h"
#include "IInf2.h"

void foo(IInf1 *);
void foo(IInf2 *);

int main()
{
  CSample *s = new CSample();

  foo((IInf1 *)s);
  foo((IInf2 *)s);
}

void foo(IInf1 *p)
{
  p->func1();
  p->func2();
}

void foo(IInf2 *p)
{
  p->func3();
  p->func4();
}