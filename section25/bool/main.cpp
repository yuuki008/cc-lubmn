#include <iostream>

using namespace std;

bool judge(int);

int main()
{
  int n;
  cout << "整数を入力: ";
  cin >> n;
  if (judge(n))
  {
    cout << "この数は0以上です" << endl;
  }
  else
  {
    cout << "この数は0未満です" << endl;
  }
  return 0;
}

bool judge(int n)
{
  return n >= 0;
}