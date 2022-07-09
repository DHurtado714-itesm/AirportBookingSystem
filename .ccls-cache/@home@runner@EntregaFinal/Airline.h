#include <string>


using namespace std;


class Airline {
  private:
  string shortName;
  
  public:
  Airline();//constructor
    
  //getters
  
  string getShortname();
  
  //setters
  
  void setShortname(string sN);
  
  //otros metodos
  
  void filtrar();
  void filtrar2();
  void airlines();

};
