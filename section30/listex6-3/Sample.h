#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include "IInf1.h"
#include "IInf2.h"
#include <iostream>

using namespace std;

class CSample : public IInf1, public IInf2
{
public:
  void func1() { cout << "func1" << endl; };
  void func2() { cout << "func2" << endl; };
  void func3() { cout << "func3" << endl; };
  void func4() { cout << "func4" << endl; };
};

#endif // _SAMPLE_H_
