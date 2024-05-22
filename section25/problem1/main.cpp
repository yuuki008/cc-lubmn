#include <iostream>

using namespace std;

int main()
{
  int a = 7;
  int &n = a;

  cout << "a = " << a << endl;
  cout << "a = " << a + 3 << endl;
}