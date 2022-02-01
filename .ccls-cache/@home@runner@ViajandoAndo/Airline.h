#include <string>

using namespace std;


class Airline {
  private:
  string shortName;
  
  
  public:
  Airline();    //constructor
  ~Airline();   //destructor
    
  //getters
  string getShortname();
  
  //setters
  void setShortname(string const&);
};
