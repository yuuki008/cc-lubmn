#include <iostream>
#include <list>
#include <string>
#include <vector>

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
  string n;
  list<string> l1;

  while (cout << "文字列を入力" && getline(cin, n))
  {
    if (n.empty())
      break;
    l1.push_back(n);
  };

  vector<string> removeList;
  for (string s : l1)
  {
    if (s.length() < 5)
    {
      removeList.push_back(s);
    }
  }

  cout << "5文字未満の単語: ";
  for (string s : removeList)
  {
    cout << s << " ";
    l1.remove(s);
  }

  cout << endl;

  return 0;
}