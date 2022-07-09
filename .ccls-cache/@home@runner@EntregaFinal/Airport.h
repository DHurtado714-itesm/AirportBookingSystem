#include <string>
#include <vector>

using namespace std;


class Airport{
 
  private:
 
    string date, city, country;

  public:
    //constructor
    
    Airport();

    //getters

    string getDate();
    string getCity();
    string getCountry();
};