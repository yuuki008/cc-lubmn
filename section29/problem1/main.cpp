#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
  map<string, string> m;

  m["cat"] = "猫";
  m["dog"] = "犬";
  m["bird"] = "鳥";
  m["tiger"] = "トラ";

  cout << "英語で動物の名前を入力してください: ";
  string key;
  cin >> key;

  if (m.find(key) == m.end())
  {
    cout << "対応するデータは登録されていません" << endl;
  }
  else
  {
    cout << "「" << m[key] << "」です。" << endl;
  }

  return 0;
}
