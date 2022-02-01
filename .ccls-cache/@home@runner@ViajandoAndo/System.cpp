#include <string>
#include "System.h"
#include <fstream>
#include <iostream>

System::System(){
  disponibilidad = "";
  reservar = "";
  cancelar = "";
}

string System::getDisponibilidad(){
  return disponibilidad;
}

string System::getReservar(){
  return reservar;
}

string System::getCancelar(){
  return cancelar;
}



void System::setDisponibilidad(string disponibilidad){

}


void System::setReservar(string reservar){

}


void System::setCancelar(string cancelar){
  
}