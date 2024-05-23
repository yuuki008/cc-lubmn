#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
  stack<int> stk;
  queue<int> que;

  int data[] = {1, 2, 3};
  int i;

  for (i = 0; i < 3; i++)
  {
    stk.push(data[i]);
    que.push(data[i]);
  }

  cout << "Stack: ";
  while (!stk.empty())
  {
    cout << stk.top() << " ";
    stk.pop();
  }
  cout << endl;

  cout << "Queue: ";
  while (!que.empty())
  {
    cout << que.front() << " ";
    que.pop();
  }
  cout << endl;

  return 0;
}
