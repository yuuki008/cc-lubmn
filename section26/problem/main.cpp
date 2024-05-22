#include "foo.h"
#include "bar.h"
#include <iostream>

using namespace std;

int main()
{
  Foo *pFoo;
  Bar *pBar;

  pFoo = new Foo();
  pBar = new Bar();

  pBar->func1(pFoo);
  pBar->func2();
  pFoo->fuga(pBar);
  pBar->func1(pFoo);

  delete pFoo;
  delete pBar;

  return 0;
}