#include <string>

using namespace std;

class System{
private:
  string disponibilidad, reservar, cancelar;
  
public:

  System();
  
  string getDisponibilidad();
  string getReservar();
  string getCancelar();

  void setDisponibilidad(string);
  void setReservar(string);
  void setCancelar(string);

};