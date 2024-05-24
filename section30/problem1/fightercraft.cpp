#include "fightercraft.h"

Fightercraft::Fightercraft()
{
  m_type = "戦闘機";
}

string Fightercraft::getType()
{
  return m_type;
}

void Fightercraft::fly()
{
  cout << "攻撃に出るために飛行" << endl;
}

void Fightercraft::fight()
{
  cout << "戦闘します" << endl;
}