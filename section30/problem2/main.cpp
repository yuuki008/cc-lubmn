#include "pitcher.h"
#include "fielder.h"
#include "catcher.h"
#include "baseballplayer.h"

int main()
{
  BaseballPlayer *players[9];
  players[0] = new Fielder("山田", 8);
  players[1] = new Fielder("高坂", 16);
  players[2] = new Fielder("ゴメス", 16);
  players[3] = new Fielder("中村", 6);
  players[4] = new Fielder("春日井", 32);
  players[5] = new Fielder("堀田", 5);
  players[6] = new Catcher("逢坂", 54);
  players[7] = new Fielder("トーマス", 11);
  players[8] = new Pitcher("斉藤", 34);

  for (int i = 0; i < 9; i++)
  {
    cout << "--------------------------------" << endl;
    cout << "名前: " << players[i]->getName() << endl;
    cout << "背番号: " << players[i]->getNumber() << endl;
    cout << "種類: " << players[i]->getKind() << endl;
  }

  for (int i = 0; i < 9; i++)
  {
    delete players[i];
  }

  return 0;
}
