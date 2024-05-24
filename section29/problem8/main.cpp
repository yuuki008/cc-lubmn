#include <iostream>
#include <string>
#include <map>
#include <queue>

using namespace std;

int main()
{
  map<int, string> numToKanji = {
      {0, "⚪︎"}, {1, "一"}, {2, "二"}, {3, "三"}, {4, "四"}, {5, "五"}, {6, "六"}, {7, "七"}, {8, "八"}, {9, "九"}};

  cout << "整数を入力してください: ";
  int n;
  cin >> n;

  string s = to_string(n);
  int length = s.size();

  queue<string> q;
  for (int i = 0; i < length; i++)
  {
    int key = s[i] - '0';
    q.push(numToKanji[key]);

    int j = length - i - 1;
    if (j > 0 && j % 3 == 0)
    {
      q.push(",");
    }
  }

  while (!q.empty())
  {
    cout << q.front();
    q.pop();
  }

  cout << endl;
}