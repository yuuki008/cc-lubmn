#include <iostream>
#include <string>
#include "catcher.h"

using namespace std;

Catcher::Catcher(string name, int number)
{
  m_name = name;
  m_number = number;
  m_kind = "捕手";
}

void Catcher::play()
{
  cout << "ボールをキャッチする" << endl;
}