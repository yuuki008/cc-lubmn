#include <iostream>

using namespace std;

struct Data
{
  int n;
  double d;
};

int main()
{
  Data dt;
  dt.n = 100;
  dt.d = 12.34;
  cout << "dt.n = " << dt.n << endl
       << "dt.d = " << dt.d << endl;
  return 0;
}