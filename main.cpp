#include <iostream>
#include <fstream>
#include "Passenger.h"
#include "Airline.h"
#include "System.h"
#include "Flight.h" 



using namespace std;



string nombre; 

string contra; 

string linea; 

string arreglo[2]; 

size_t pos = 0; 

int contador=0; 

string dato; 

int fin = 0; 



int main()

{



cout << "Ingrese su usuario" << endl;

cin >> nombre;

cout << "Ingrese su contraseña" << endl;

cin >> contra;



ifstream archivo("cuentas.txt"); 



while(getline(archivo,linea)&&fin==0){ 

while ((pos = linea.find(",")) != std::string::npos){ 

    dato = linea.substr(0, pos); 

    arreglo[contador]=dato; 

    linea.erase(0, pos + 1); 

    contador++; 

}

        if (arreglo[0].find(nombre, 0) != string::npos){

            fin=1;

        }

contador=0;

}

if (nombre==arreglo[0]&&contra==arreglo[1]){

    cout << "\n\n\tBienvenido al sistema" << endl;  
    //Luis.getName();
    cout<<"\n  Sistema de reservacion de vuelos"<<endl;
    cout << "Ingresa fecha de incio: " << endl;
    //cin >> Aeromex.setDate() >>endl; 
    cout<<"Aquí está la lista de vuelos disponibles"<<endl;
    vuelos();

}

else{

    cout << "Los datos ingresados son incorrectos" << endl;

}



getchar();

}