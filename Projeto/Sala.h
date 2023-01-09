#include "Leito.h"

using namespace std;

class Sala
{
private:
  int id;
  int tamanho;
  vector<Leito> leitos;
  int n_leitos_ocupados;
  int n_leitos_desocupados;
 
public:
  Sala();
  Sala(int, int);
  ~Sala();
  
  void set_id(int);
  void set_tamanho(int);

  void add_leito(Leito);
  void remove_leito(int);

  int get_id();
  int get_numero_leitos();
  vector<Leito> get_leitos();
  
  int get_tamanho(); 
  
  int get_n_leitos_ocupados();
  int get_n_leitos_desocupados();
  
  void imprime_sala();
};