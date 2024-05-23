#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
  int n;
  list<int> li;

  cout << "正の整数を入力: ";
  while (cin >> n)
  {
    if (n == -1)
      break;
    li.push_back(n);
  }

  li.remove(2);

  list<int>::iterator it;

  for (it = li.begin(); it != li.end(); it++)
  {
    cout << *it << " ";
  }

  cout << endl;

  return 0;
}