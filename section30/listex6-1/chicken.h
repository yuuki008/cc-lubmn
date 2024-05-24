#ifndef _CHICKEN_H_
#define _CHECKIN_H_

#include <iostream>
#include "bird.h"

class CChicken : public CBird
{
  void sing() { cout << "コケコッコー" << endl; }
  void fly() { cout << "にわとりは飛べません" << endl; }
};

#endif // _CHICKEN_H_
