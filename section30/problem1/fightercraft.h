#ifndef _FIGHTERCRAFT_H_
#define _FIGHTERCRAFT_H_

#include <iostream>
#include <string>
#include "airplane.h"

using namespace std;

class Fightercraft : public Airplane
{
private:
  string m_type;

public:
  Fightercraft();
  string getType();
  void fly();
  void fight();
};

#endif // _FIGHTERCRAFT_H_