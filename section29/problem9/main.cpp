#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
  map<char, string> m;

  m['r'] = "room";
  m['w'] = "wonderful";
  m['p'] = "pork";
  m['t'] = "trap";
  m['k'] = "kind";
  m['m'] = "money";
  m['d'] = "dog";
  m['g'] = "given";
  m['y'] = "yellow";
  m['e'] = "eat";
  m['a'] = "apple";
  m['n'] = "neighbor";

  vector<string> v;

  for (auto it = m.begin(); it != m.end(); it++)
  {
    v.clear();

    map<char, string> m2 = m;
    char key = it->first;
    while (true)
    {
      if (m.find(key) == m.end())
        break;

      v.push_back(m[key]);

      char temp = m[key][m[key].size() - 1];
      m2.erase(key);
      key = temp;
    }

    if (v.size() == m.size())
      break;
  }

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}