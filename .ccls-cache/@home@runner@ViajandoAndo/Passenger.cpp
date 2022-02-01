#include <iostream>
#include <string>
#include "Passenger.h"

using namespace std;

Passenger::Passenger(){
  name = "";
  phone = 0;
  user = "";
  password = "";
  
}

Passenger::~Passenger(){
  cout<<"ok"<<endl;
}


void Passenger::Name(){
  cin>>name;
}

void Passenger::setName(string name){
  cout<<"ok"<<endl;
}

void Passenger::Password(){
  cin >> password;
}

void Passenger::setPassword(string password){
  cout<<"ok"<<endl;
}


void Passenger::User(){
  cin>>user;
}


void Passenger::setUser(string user){
  cout<<"ok"<<endl;
}