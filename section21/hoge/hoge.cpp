#include "hoge.h"
#include <iostream>

using namespace std;

Hoge::Hoge()
{
  cout << "コンストラクタ" << endl;
}

void Hoge::foo()
{
  cout << "foo called" << endl;
}

Hoge::~Hoge()
{
  cout << "デストラクタ" << endl;
}