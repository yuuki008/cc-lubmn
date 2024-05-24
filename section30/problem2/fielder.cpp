#include "fielder.h"

Fielder::Fielder(string name, int number)
{
  m_name = name;
  m_number = number;
  m_kind = "内野手";
}

void Fielder::play()
{
  cout << "内野ゴロを捌く" << endl;
}
