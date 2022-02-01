#include <string>
#include "Flight.h"

using namespace std;

Flight::Flight(){
  date= ""; 
  hour= ""; 
  duration=0;
  flightNumber=0;
  price=0;
  
}

Flight::~Flight(){

}

string Flight::getDate(){
  return date;
}

string Flight::getHour(){
  return hour;
}


int Flight::getDuration(){
  return duration;
}

int Flight::getFlightNumber(){
  return flightNumber;
}
  
float Flight::getPrice(){
  return price;
}

//setters

void Flight::setDate(string const&){

}

void Flight::setHour(string const&){

}

void Flight::setAirplaneModel(string const&){

}

void Flight::setDuration(int const&){

}

void Flight::setFlightNumber(int const&){

}

void Flight::setPrice(float const&){

};