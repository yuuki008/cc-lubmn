#include "NewString.h"
#include <algorithm>

NewString::NewString() : m_value("") {}
NewString::NewString(const string value) : m_value(value) {}
NewString::NewString(NewString &ns)
{
  m_value = ns.getValue();
}

NewString &NewString::operator=(const NewString &ns)
{
  m_value = ns.m_value;
  return *this;
}

bool NewString::operator==(const NewString &ns)
{
  string s1 = m_value;
  string s2 = ns.m_value;
  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
  return s1 == s2;
}

string NewString::getValue()
{
  return m_value;
}
