#include <iostream>
#include "fightercraft.h"
#include "passengerplane.h"

using namespace std;

int main()
{
  Fightercraft *fighter = new Fightercraft();
  PassengerPlane *airliner = new PassengerPlane();

  fighter->fly();
  fighter->fight();

  airliner->fly();
  airliner->carryPassengers();

  delete fighter;
  delete airliner;

  return 0;
}
