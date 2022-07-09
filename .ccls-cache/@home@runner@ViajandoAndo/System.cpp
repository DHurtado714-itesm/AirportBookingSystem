#include <string>
#include "System.h"
#include <fstream>
#include <iostream>

System::System(){
  disponibilidad = "";
  reservar = "";
  cancelar = "";
}

//getters
string System::getDisponibilidad(){
  return disponibilidad;
}

string System::getReservar(){
  return reservar;
}

string System::getCancelar(){
  return cancelar;
}


//setters
void System::setDisponibilidad(string disponibilidad){
  cout<<"Los vuelos disponibles son:"<<endl;
}


void System::setReservar(string reservar){
  cout<<"Vuelo reservado"<<endl;
}


void System::setCancelar(string cancelar){
  cout<<"Vuelo cancelado"<<endl;
}