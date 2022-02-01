#include "Airline.h"
#include <iostream>
#include "Flight.h"

using namespace std;

Airline::Airline() {
  shortName = " ";
}

Airline::~Airline() {

}

//getters

string Airline::getShortname() {
  return shortName;
}
//setters

void Airline::setShortname(string const& sN) {
  shortName = sN;
}