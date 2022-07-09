//librerías que están en uso
#include <string>
#include <iostream>
#include "Airport.h"

using namespace std;
//constructor con los datos
Airport::Airport(){
  
  city = "Querétaro";
  
  date = "08/02/2022";
  
  country = "México";
}

//getters

string Airport::getDate(){
  
  return date; 

}

string Airport::getCity(){

  return city;  

}

string Airport::getCountry(){

  return country;

}