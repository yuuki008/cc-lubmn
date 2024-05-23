#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  vector<int> v;
  while (cout << "正の整数を入力: " && cin >> n && n != -1)
  {
    v.push_back(n);
  }

  int max = v[0];
  int min = v[0];
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] > max)
      max = v[i];
    if (v[i] < min)
      min = v[i];
  }
  cout << "最大値: " << max << endl;
  cout << "最小値: " << min << endl;

  return 0;
}
