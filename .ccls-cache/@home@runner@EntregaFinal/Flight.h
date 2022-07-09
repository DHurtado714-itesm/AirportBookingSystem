#include <string>

using namespace std;

//creación de clase
class Flight{//datos privados

  private:

    string date, hour, flightNumber, name;
    int duration;
    float price;

  public: //datos públicos

    Flight();

    bool seats[4][30];
    
    //getters
    
    string getDate();
    string getHour();
    string getName();
    int getDuration();
    string getFlightNumber();
    float getPrice();
    
    //setters

    void setDate(string fecha);
    void setHour(string hora);
    void setName(string nomb);
    void setDuration(int dur);
    void setPrice(float precio);
    void setFlightNumber(string vuelNumb);
    void vuelos();

};