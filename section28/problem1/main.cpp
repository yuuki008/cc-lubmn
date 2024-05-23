#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  vector<int> even;
  vector<int> odd;
  while (cout << "正の整数を入力: " && cin >> n && n != -1)
  {
    if (n % 2 == 0)
      even.push_back(n);
    else
      odd.push_back(n);
  }

  cout << "偶数: ";
  for (int i = 0; i < even.size(); i++)
  {
    cout << even[i] << " ";
  }
  cout << endl
       << "奇数: ";
  for (int i = 0; i < odd.size(); i++)
  {
    cout << odd[i] << " ";
  }

  return 0;
}
