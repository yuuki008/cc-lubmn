#include <iostream>
#include <set>
using namespace std;

int main()
{
  string word;
  cout << "英単語を入力: ";
  cin >> word;

  set<char> s;

  for (char c : word)
  {
    s.insert(c);
  }

  for (char c : s)
  {
    cout << c << " ";
  }

  cout << endl;
  return 0;
}
