#include <string>
#include <iostream>
#include "Flight.h"
#include <fstream>

using namespace std;
//constructor
Flight::Flight(){

  date = ""; 
  hour = ""; 
  name = "";
  duration = 0;
  flightNumber = "";
  price = 0;
  for (int i=0;i<4;i++)
    for(int j=0;j<30;j++)
      seats[i][j] = false;
}

//getters

string Flight::getDate(){
  return date;
}

string Flight::getHour(){
  return hour;
}

string Flight::getName(){
  return name;
}

int Flight::getDuration(){
  return duration;
}

string Flight::getFlightNumber(){
  return flightNumber;
}
  
float Flight::getPrice(){
  return price;
}

//setters

void Flight::setDate(string fecha){
  date=fecha;
}

void Flight::setHour(string hora){
  hour=hora;
}

void Flight::setName(string nomb){
  name=nomb;
}

void Flight::setDuration(int dur){
  duration=dur;
}

void Flight::setFlightNumber(string vuelNumb){
  flightNumber=vuelNumb;
}

void Flight::setPrice(float precio){
  price=precio;
}

//otros métodos
void Flight::vuelos(){
  string texto;
  ifstream archivo("Flights.txt");
  while (getline (archivo,texto)) {
    cout<<texto<<endl;
  }
  archivo.close();
};