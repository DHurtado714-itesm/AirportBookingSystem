#include <string>

using namespace std;

class Passenger{

  private:

    string name, user, password, phone;

  public:

    Passenger();
    Passenger(string);
    
    //getters

    string getName();
    string getUser();
    string getPassword();
    string getPhone();

    //setters

    void setName(string nom);
    void setPhone(string tel);
    void setUser(string us);
    void setPassword(string pas);
  
};

