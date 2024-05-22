#include "Sample.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
  CSample s;
  cout << "定数: " << CSample::m_cst << endl;
  s.setStr("ABC");
  cout << s.getStr() << endl;
  return 0;
}