#include <iostream>
#include <queue>

using namespace std;

int main()
{
  queue<string> q;

  while (cout << "文字列を入力: ")
  {
    string s;
    getline(cin, s);
    if (s == "")
      break;

    q.push(s);
  }

  while (!q.empty())
  {
    cout << q.front() << endl;
    q.pop();
  }

  return 0;
}