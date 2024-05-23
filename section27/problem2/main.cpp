#include <iostream>
#include "collectionint2.h"

using namespace std;

int main()
{
  int array[] = {1, 5, 4, 2, 3};
  CollectionInt<int> *c = new CollectionInt<int>(array, 5);
  c->showArray();
  cout << "最大値: " << c->getMax() << endl;
  cout << "最小値: " << c->getMin() << endl;
  delete c;

  double doubleArray[] = {1.2, 3.5, 8.1, 4.9, 2.0, 2.2};
  CollectionInt<double> *c2 = new CollectionInt<double>(doubleArray, 6);
  c2->showArray();
  cout << "最大値: " << c2->getMax() << endl;
  cout << "最小値: " << c2->getMin() << endl;
  return 0;
}