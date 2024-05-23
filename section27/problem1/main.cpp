#include <iostream>
#include <string>

using namespace std;

template <typename T>
T maxN(T a, T b)
{
  if (a > b)
    return a;
  return b;
}

int main()
{
  cout << maxN(1, 2) << endl;
  cout << maxN(1.75, 3.12) << endl;
  string s1 = "aiu", s2 = "eo";
  cout << maxN(s1, s2) << endl;
  return 0;
}
