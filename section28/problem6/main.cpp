#include <iostream>
#include <list>
#include <string>

using namespace std;

void printList(const list<int> &li)
{
  for (int num : li)
  {
    cout << num << " ";
  }
  cout << endl;
}

int main()
{
  int n;
  list<int> li;

  while (cout << "正の整数を入力: " && cin >> n)
  {
    if (n == -1)
      break;

    auto it = li.begin();
    while (it != li.end() && *it < n)
    {
      ++it;
    }
    li.insert(it, n);

    cout << "入力された数: ";
    printList(li);
  }

  return 0;
}