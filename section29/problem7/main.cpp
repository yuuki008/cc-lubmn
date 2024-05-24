#include <iostream>
#include <stack>

using namespace std;

int main()
{
  stack<string> s;

  cout << "英単語を入力: ";
  string word;
  cin >> word;

  for (char c : word)
  {
    string str(1, c);
    s.push(str);
  }

  while (!s.empty())
  {
    cout << s.top();
    s.pop();
  }

  cout << endl;

  return 0;
}