#include <string>

using namespace std;

class Passenger{
private:
  string name, user, password;
  int phone;

public:
  Passenger();
  Passenger(string);
  ~Passenger();
  
  //getters
  string getName();
  string getUser();
  string getPassword();
  void Name();
  void User();
  void Password();

  //setters
  void setName(string);
  void setUser(string);
  void setPassword(string);
  
};
