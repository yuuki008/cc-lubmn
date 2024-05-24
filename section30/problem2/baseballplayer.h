#ifndef _BASEBALLPLAYER_H_
#define _BASEBALLPLAYER_H_

#include <iostream>
#include <string>

using namespace std;

class BaseballPlayer
{
public:
  int m_number;
  string m_kind;
  string m_name;

public:
  int getNumber();
  string getKind();
  string getName();

  virtual void play() = 0;
};

#endif // _BASEBALLPLAYER_H_
