#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  string n;
  vector<string> v;

  cout << "文字列を入力: ";
  while (getline(cin, n))
  {
    if (n.empty())
      break;
    v.push_back(n);
  }

  string longest = v[0];
  string shortest = v[0];

  for (int i = 0; i < v.size(); i++)
  {
    if (v[i].length() > longest.length())
      longest = v[i];
    if (v[i].length() < shortest.length())
      shortest = v[i];
  }

  cout << "最長の単語: " << longest << endl;
  cout << "最短の単語: " << shortest << endl;

  return 0;
}