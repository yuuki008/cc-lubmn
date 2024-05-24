#include <iostream>
#include <stack>

using namespace std;

int main()
{
  stack<string> s;

  while (cout << "文字列を入力: ")
  {
    string str;
    getline(cin, str);
    if (str == "")
      break;
    s.push(str);
  }

  while (!s.empty())
  {
    cout << s.top() << endl;
    s.pop();
  }

  return 0;
}