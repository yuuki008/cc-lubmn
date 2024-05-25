#ifndef NEWSTRING_H
#define NEWSTRING_H

#include <string>

using namespace std;

class NewString
{
private:
  string m_value;

public:
  NewString();
  NewString(const string value);
  NewString(NewString &vlue);
  NewString &operator=(const NewString &value);
  bool operator==(const NewString &value);
  string getValue();
};

#endif
