#ifndef _PASSENGERPLANE_H_
#define _PASSENGERPLANE_H_

#include <iostream>
#include <string>
#include "airplane.h"

using namespace std;

class PassengerPlane : public Airplane
{
private:
  string m_type;

public:
  PassengerPlane();
  string getType();
  void fly();
  void carryPassengers();
};

#endif // _PASSENGERPLANE_H_
