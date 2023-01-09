#include "Ala.h"

using namespace std;

class Hospital
{
  private:
    string nome;
    string endereco;
    string telefone;
    const int tamanho = 4;
    vector<Ala> alas;

  public:
    Hospital();
    Hospital(string, string, string);
    ~Hospital();

    string get_nome();
    string get_endereco();
    string get_telefone();
    int get_tamanho();
    vector<Ala> get_alas();
    
    void add_ala(Ala);
    
    void relatorio_estatistico();
};