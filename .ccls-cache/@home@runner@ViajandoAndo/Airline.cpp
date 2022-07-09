#include "Airline.h"
#include <iostream>
#include "Flight.h"
#include <fstream>
#include <cstdlib>


using namespace std;


Airline::Airline(){
  shortName = " ";

}

//getters

string Airline::getShortname() {
  return shortName;

}
//setters

void Airline::setShortname(string sN) {
  shortName = sN;

}

//otros métodos

void Airline::filtrar(){
  ifstream archivo_entrada("Airlines.txt");;

  string linea;

  int min;
  int contador = 0;
  int max;  

  cout << "\nEscribe el indice del vuelo: ";
  cin >> max;
  min=max+10;

  while(getline(archivo_entrada, linea)) {

    if(min == contador) {
      cout << linea << endl;
    }

    contador++;

    }

}

void Airline::filtrar2(){
  ifstream archivo_entrada("Flights.txt");;

  string linea;

  int min;
  int contador = 0;
  int max;  

  cout<< "\nConfirma el indice del vuelo: "<<endl;
  cin>>max;
  min = max;

  if (max > -1 && max <= 5){
    max = max - 1;
  }

  else if (max > 10){
    max = max + 1;
  }

  min = max;

  if (max == -1){
    cout<<"Saliendo del sistema"<<endl;
    exit(1);

  }

  while(getline(archivo_entrada, linea)) {

    if(min == contador) {
      cout << "\n" << linea << endl;
    }

    contador++;

  }

}

void Airline::airlines(){

  string texto;

  ifstream archivo("Airlines.txt");

  while (getline (archivo,texto)) {
    cout<<texto<<endl;

  }

  archivo.close();

};