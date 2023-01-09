#include "ArquivosPacientes.h"

using namespace std;

class Leito
{
  private:
    int id;
    string situacao;
    Paciente paciente;

  public:
    Leito();
    Leito(int);
    ~Leito();

    void set_id(int);
    void set_situacao(string);
    void set_paciente(Paciente);

    int get_id();
    string get_situacao();
    Paciente get_paciente();

    void exibe_id();
    void exibe_situacao();

    void imprime_leito();
};