#include <iostream>
#include <string>
#include "NewString.h"

using namespace std;

int main()
{
  NewString s1("HelloWorld"), s2;

  cout << "s1=" << s1.getValue() << endl;
  s2 = s1;
  cout << "s2=" << s2.getValue() << endl;
  NewString s3(s2);
  cout << "s3=" << s3.getValue() << endl;
  NewString s4("HELLOWORLD");
  cout << "s4=" << s4.getValue() << endl;

  if (s1 == s2)
  {
    cout << "s1==s2" << endl;
  }
  if (s1 == s4)
  {
    cout << "s1==s4" << endl;
  }

  return 0;
}
