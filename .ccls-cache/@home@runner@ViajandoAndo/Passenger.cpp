#include <iostream>
#include <string>
#include "Passenger.h"

using namespace std;

Passenger::Passenger(){
 
  name = "";
 
  user = "";
 
  phone="";
  
}


string Passenger::getName(){
 
  return name;

}

void Passenger::setName(string nom){

  name=nom;

}

string Passenger::getPhone(){

  return phone;

}

void Passenger::setPhone(string tel){

  phone=tel;

}

string Passenger::getUser(){

  return user;

}


void Passenger::setUser(string us){

  user=us;

};