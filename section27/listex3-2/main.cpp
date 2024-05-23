#include <iostream>
#include <string>
#include "calc.h"

using namespace std;

int main()
{
  CCalc<int> *i1;
  i1 = new CCalc<int>();
  CCalc<string> *i2;
  i2 = new CCalc<string>();

  i1->set(1, 2);
  i2->set("ABC", "DEF");

  cout << i1->add() << endl
       << i2->add() << endl;

  return 0;
}
