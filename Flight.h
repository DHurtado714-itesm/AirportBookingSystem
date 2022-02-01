#include <string>

using namespace std;

class Flight{
private:
  string date, hour, name;
  int flightNumber, duration;
  float price;

public:
  Flight();
  ~Flight();
  
  //getters
  string getDate();
  string getHour();
  string getAirplaneModel();
  int getDuration();
  int getFlightNumber();
  float getPrice();
  
  //setters
  void setDate(string const&);
  void setHour(string const&);
  void setAirplaneModel(string const&);
  void setDuration(int const&);
  void setPrice(float const&);
  void setFlightNumber(int const&);
};