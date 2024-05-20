#include <iostream>

using namespace std;

int main()
{
  string first, last;

  cout << "性を入力: ";
  cin >> first;
  cout << "名を入力: ";
  cin >> last;
  cout << "名前は「" << first + last << "」です。" << endl;
}