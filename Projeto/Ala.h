#include "Sala.h"

using namespace std;

class Ala
{
  private:
    string nome;
    const int tamanho = 4;
    vector<Sala> salas;
  public:
    Ala();
    Ala(string);
    ~Ala();

    void set_nome(string);

    void add_sala(Sala);

    string get_nome();
    int get_numero_salas();
    vector<Sala> get_salas();

    int numero_leitos();
    int taxa_ocupacao_leito();
    void imprime_ala();
};