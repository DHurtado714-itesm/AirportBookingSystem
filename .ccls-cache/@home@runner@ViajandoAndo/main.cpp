//
//Daniel Felipe Hurtado Giraldo (A01707774)
//8-02-2022
#include <iostream>
#include <fstream>
#include "Passenger.h"
#include "Airline.h"
#include "Flight.h"
#include "Airport.h"

using namespace std;

//declaraciones de variables
string B, NOMBRE, CONTRA, LINEA, DATO, USUARIO, NUEVO, NUEVA, DETALLES, CONFIRMAR, NAME, FECHA, AIRLINE, PHONE, NUMERO_VUELO;
int COLUMNA, FILA, DURACION, D;
float PRECIO;
string arreglo[2]; 
size_t pos = 0; 
int CONT = 0; 
int FIN = 0; 
int X = 0;


Airport w;//Asignar nombre al aeropuerto
Passenger x;//Asignar nombre al pasajero
Flight y;//Asignar nombre al vuelo
Airline z;//Asignar nombre al de la aerolínea


void reservas_cancelaciones(){
  D=1;
  y.seats[1][15]=true;
  y.seats[1][16]=true;
  y.seats[1][10]=true;
  y.seats[1][28]=true;
  y.seats[1][2]=true;
  y.seats[1][25]=true;

  //Sistema de cancelaciones
  cout<<"Seleccione columna y fila para el vuelo: "<<y.getFlightNumber()<<endl;
  cout<<"Columna(0-3): ";
  cin>>COLUMNA;

  while (COLUMNA > 3){
    cout<<"Solo existen 4 columnas."<<endl;
    cout<<"Columna(0-3): ";
    cin>>COLUMNA;
  }

  cout<<"Fila(0-29):";
  cin>>FILA;

  while (FILA > 29){
    cout<<"Solo existen 30 filas por vuelo."<<endl;
    cout<<"Fila(0-29): ";
    cin>>FILA;
  }

  while (y.seats[COLUMNA][FILA] == true){
    cout<<"Este asiento ya está reservado, escoja otro"<<endl;
    cout<<"Seleccione fila y asiento distinto al seleccionado previamente."<<endl;
    cout<<"Columna(0-3): ";
    cin>>COLUMNA;

    while (COLUMNA > 3){
      cout<<"Solo existen 4 columnas."<<endl;
      cout<<"Fila(0-3): ";
      cin>>COLUMNA;
    }

    cout<<"Fila(0-29):";
    cin>>FILA;

    while (FILA > 29){
      cout<<"Solo existen 30 filas por vuelo."<<endl;
      cout<<"Fila(0-29): ";
      cin>>FILA;
      }
    }

  
    cout<<"¿Desea confirmar su reservación?"<<endl;
    cin>>CONFIRMAR;

    if (CONFIRMAR == "No"||CONFIRMAR == "no"||CONFIRMAR == "NO"){
      cout<<"La reservación para el vuelo "<<y.getFlightNumber()<<"Asiento número: "<<FILA<<" y fila: "<<COLUMNA<<" del vuelo"<<y.getFlightNumber()<<" ha sido cancelada."<<endl;
      y.seats[COLUMNA][FILA] = false;//asiento desocupado
      }

    else{
      //al aceptar pide los datos

      cout<<"Introduzca su nombre completo separado por guiones: "<<endl;
      cin>>NAME;
      x.setName(NAME);
      cout<<"Introduce tu número de teléfono: "<<endl;
      cin>>PHONE;
      x.setPhone(PHONE);
      cout<<"Confirme precio: ($)"<<endl;
      cin>>PRECIO;
      y.setPrice(PRECIO);
      cout<<"Duración: (horas)"<<endl;
      cin>>DURACION;
      y.setDuration(DURACION);
      cout<<"Aerolinea: "<<endl;
      cin>>AIRLINE;
      z.setShortname(AIRLINE);
      cout<<"Fecha: "<<endl;
      cin>>FECHA;
      y.setDate(FECHA);

      y.seats[COLUMNA][FILA] = true;
      
      cout<<"\n\nEstimado "<<x.getName()<<endl;
      
      cout<<"Asiento número: "<<FILA<<"  Fila: "<<COLUMNA<<" reservado"<<endl;

      cout<<"Le llegará la confirmación a su teléfono: "<<x.getPhone()<< " en los próximos minutos."<<endl;
      cout<<"Su vuelo "<<y.getFlightNumber()<<" ha sido reservado"<<endl;

      cout<<"Estos son los detalles de su reservación"<<endl<<"Precio total: "<<y.getPrice()<<endl<<"Duración: "<<y.getDuration()<<endl<<"Fecha:"<<y.getDate()<<endl<<"Emitido por la Aerolínea: "<<z.getShortname()<<endl;

    }

}


void sistema(){
  
  cout << "\nIngrese su usuario" << endl;
  cin >> NOMBRE;
  x.setName(NOMBRE);
  cout << "Ingrese su contraseña" << endl;
  cin >> CONTRA;

  ifstream archivo("cuentas.txt"); 
  //abre el archivo seleccionado arriba
  while(getline(archivo,LINEA) && FIN == 0){ 

    while ((pos = LINEA.find(",")) != std::string::npos){ 
      
      //busca en la base de datos el usuario
    
      DATO = LINEA.substr(0, pos);
      arreglo[CONT] = DATO; 
      LINEA.erase(0, pos + 1);
      CONT++; 
    
    }

    if (arreglo[0].find(NOMBRE, 0) != string::npos){
        //busca la contraseña, si la halla asigna 1 al contador
        FIN = 1;
    
      }
    //si no lo halla asigna un 0 y no permite el acceso
    CONT = 0;

  }
  //si la contraseña y el usuario coinciden con el archivo txt se inicia el sistema
  if (NOMBRE == arreglo[0] && CONTRA == arreglo[1]){

      cout << "\n\n\t"<<x.getName()<<" Bienvenid@ al sistema" << endl;  

      int A = 1;

      while(A < 4){

      cout<<"\n  Sistema de reservacion de vuelos"<<endl;
      cout<<"¿Busca por alguna especificación?"<<endl;
  
      cin>>DETALLES;
      
      if (DETALLES == "Sí"||DETALLES == "sí"||DETALLES == "SÍ"||DETALLES == "si"||DETALLES == "Si"||DETALLES == "SI"){
        //muestra un archivo con detalles
        cout<<"No. Vuelo  Aerolínea  Precio  Duración Fecha"<<endl;
  
        y.vuelos();
  
        cout<<"-1. Salir"<<endl;
  
        z.filtrar2();
  
      }
  
      else{
        //si no, muestra opciones de destinos
        cout<<"Aquí está la lista de vuelos disponibles"<<endl;
        z.airlines();
        z.filtrar();
      
      }

      cout<< "\nElige la clave del vuelo: "<<endl;

      cin>>NUMERO_VUELO;
      
      z.filtrar2();
      //si escoge -1 se cierra el sistema
      if (y.getFlightNumber() == "-1"){
      
        cout<<"Saliendo del sistema"<<endl;
        exit(1);//cierra el sistema
      
      }
      
      else{
      //si no, manda al menú de reservaciones o cancelaciones
      reservas_cancelaciones();

      cout<<"¿Desea reservar más vuelos?"<<endl;
      
      cin>>B;

      if (B == "SÍ"| B == "SI" | B == "si" | B == "Sí" | B == "sí" | B == "Si"){
      
        A++;//reservaciones incrementa a 3
      }
    
      else{
        cout<<"Disfrute su vuelo.";
        exit(0);//cierra el programa 

        }

      }

    }

  }

  else{

      cout << "Los datos ingresados son incorrectos" << endl;
      X++;
    }

  getchar();

}


int main(){
  
  while (X<3){

    //inicio de sesión

    cout<<w.getDate()<<endl;
    cout<<w.getCountry()<<"\t\t\t\t"<<w.getCity()<<endl;
    cout<<"\n¿Cuenta con un usuario?"<<endl<<"Sí  No"<<endl;
    cin>>USUARIO;

    //Crear un usuario
    if (USUARIO == "No"){
      
      cout<< "\n-Registrar Usuario-"<<endl;
      cout<< "\nRegistre su usuario" << endl;
      cin>>NUEVO;
      cout<< "\nRegistre su contraseña" << endl;
      cin>>NUEVA;
      string filename("cuentas.txt");
      fstream file;
      //abrir archivo
      file.open(filename, ios_base::app);
      //añade usuario a la base de datos
      
      if (file.is_open())
        
        file << "\n";//agrega un salto de linea
        file.write(NUEVO.data(), NUEVO.size());//agrega el usuario
        file << ",";//agrega una coma después del usuario
        file.write(NUEVA.data(), NUEVA.size());//agrega la contraseña
        file << ",";//agrega una coma al final

      cout << "Agregado" << endl;
      getchar();//lee el bucle completo carácter por carácter
    }

    else{
    sistema();

    }
  }
  cout<<"\nDemasiados intentos, bloqueo de sistema."<<endl;
  exit(1);
}
