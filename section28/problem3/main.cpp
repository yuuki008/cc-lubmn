#include <iostream>
#include <vector>
#include <limits>

using namespace std;

void printNumbersByLastDigit(const vector<vector<int>> &numbers)
{
  for (int i = 0; i < numbers.size(); i++)
  {
    cout << "一の位が" << i << ": ";
    if (numbers[i].empty())
    {
      cout << "なし";
    }
    else
    {
      for (int num : numbers[i])
      {
        cout << num << " ";
      }
    }
    cout << endl;
  }
}

int main()
{
  cout << "正の整数を入力してください (-1で終了): ";
  int n;
  vector<int> v;
  while (cin >> n)
  {
    if (n == -1)
      break;
    if (n < 0)
    {
      cout << "正の整数を入力してください。" << endl;
      continue;
    }
    v.push_back(n);
  }

  vector<vector<int>> v2(10);

  for (int num : v)
  {
    int unit = num % 10;
    v2[unit].push_back(num);
  }

  printNumbersByLastDigit(v2);

  return 0;
}