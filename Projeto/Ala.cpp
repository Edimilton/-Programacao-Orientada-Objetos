#include "Ala.h"

using namespace std;

// Construtores //
Ala::Ala()
{
  set_nome("Nao Cadastrada");
}

Ala::Ala(string temp_nome)
{
  set_nome(temp_nome);
}

Ala::~Ala()     
{
}

// Funcoa SET //
void Ala::set_nome(string temp_nome)
{
  nome = temp_nome;
}

// Funcoes GET//
int Ala::get_numero_salas()
{
  return salas.size();
}

vector<Sala> Ala::get_salas()
{
  return salas;
}

string Ala::get_nome()
{
  return nome;
}

// Outras Funcoes //
void Ala::add_sala(Sala temp_sala)
{
  if (get_numero_salas() < tamanho)
  {
    salas.push_back(temp_sala);
  }
  else
  {
    cout << "A ala está totalmente ocupada";
  }
}

int Ala::numero_leitos()
{
  int leitos_desocupados = 0;
  int leitos_ocupados = 0;

  for (Sala s: get_salas())
  {
    leitos_desocupados = leitos_desocupados + s.get_n_leitos_desocupados();
    leitos_ocupados = leitos_ocupados + s.get_n_leitos_ocupados();
  }

  int leitos_total = leitos_desocupados + leitos_ocupados;

  return leitos_total;
}

int Ala::taxa_ocupacao_leito()
{
  int ocupados = 0;

  for (Sala i: get_salas())
  {
    ocupados = ocupados + i.get_n_leitos_ocupados();
  }
  
  int taxa = (((float)ocupados / (float)numero_leitos()) * 100);

  return taxa;
}

void Ala::imprime_ala()
{
  cout << "\n-------------- INFO ALA --------------\n" << endl;
  cout << "Id: " << get_nome() << endl;
  cout << "Taxa de Ocupacao de Leito: " << taxa_ocupacao_leito() << "%" << endl;

  for (Sala i: get_salas())
  {
    i.imprime_sala();
  }

  cout << "\n--------------------------------------\n";
}