#include "calculation.h"

void Calculation::setNumber1(int num1)
{
  number1 = num1;
};

void Calculation::setNumber2(int num2)
{
  number2 = num2;
};

int Calculation::getNumber1()
{
  return number1;
}

int Calculation::getNumber2()
{
  return number2;
}

int Calculation::add()
{
  return number1 + number2;
}

int Calculation::sub()
{
  return number1 - number2;
}