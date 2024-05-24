#include "pitcher.h"

Pitcher::Pitcher(string name, int number)
{
  m_name = name;
  m_number = number;
  m_kind = "投手";
}

void Pitcher::play()
{
  cout << "投球する" << endl;
}