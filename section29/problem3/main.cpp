#include <iostream>
#include <set>
#include <random>

using namespace std;

int main()
{
  set<int> s;
  random_device rd;
  mt19937 mt(rd());
  uniform_int_distribution<int> dice(1, 10);

  for (int i = 0; i < 10; i++)
  {
    int n = dice(mt);
    s.insert(n);
  }

  for (int n : s)
  {
    cout << n << " ";
  }

  cout << endl;

  return 0;
}