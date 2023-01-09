#include "Sala.h"

using namespace std;

//Construtores //

Sala::Sala(int temp_id, int temp_tamanho)
{
  set_id(temp_id);
  set_tamanho(temp_tamanho);
  n_leitos_ocupados = 0;  
  n_leitos_desocupados = 0; 
}

Sala::Sala()
{
  set_id(-1);
  set_tamanho(0);
  n_leitos_ocupados = 0;  
  n_leitos_desocupados = 0;
}

Sala::~Sala()
{
}

//Funcoes SET //

void Sala::set_id(int temp_id)
{
  id = temp_id;
}

void Sala::set_tamanho(int temp_tamanho)
{
  tamanho = temp_tamanho;
}

// Adicao e Remocao //

void Sala::add_leito(Leito temp_leito)
{
  if (leitos.size() < tamanho)
  {
    if(temp_leito.get_situacao() == "Disponivel")
    {
      n_leitos_desocupados++;
    }
    else
    {
      n_leitos_ocupados++;
    }

    leitos.push_back(temp_leito);
  }
  else
  {
    cout << "A sala está totalmente ocupada";
  }
}

void Sala::remove_leito(int temp_id)
{
  vector<Leito> temp_leitos;
  for (Leito i: get_leitos())
  {
    if(i.get_id() != temp_id)
    {
      temp_leitos.push_back(i);
    }
    else
    {
      if(i.get_situacao() == "Disponivel")
      {
        n_leitos_desocupados--;
      }
      else
      {
        n_leitos_ocupados--;
      }
    }
  }
  leitos = temp_leitos;
}


// Funcoes GET //

int Sala::get_id()
{
  return id;
}

int Sala::get_numero_leitos()
{
  return get_n_leitos_desocupados() + get_n_leitos_ocupados();
}

int Sala::get_tamanho()
{
  return tamanho;
}

vector<Leito> Sala::get_leitos()
{
  return leitos;
}

int Sala::get_n_leitos_ocupados()
{
  return n_leitos_ocupados;
}

int Sala::get_n_leitos_desocupados()
{
  return n_leitos_desocupados;
}


// funcao IMPRIME //
void Sala::imprime_sala()
{
  cout << "\n---------- INFO SALA ----------\n" << endl;

  cout << "Id: " << get_id() << endl;
  

  cout << "Porcentagem de Leitos ocupados: ";
  cout << (float)n_leitos_ocupados / ((float)get_numero_leitos()) * 100 << "%" << endl;
 
  cout << "Leitos Ocupados: " << get_n_leitos_ocupados() << endl;
  cout << "Leitos Desocupados: " << get_n_leitos_desocupados() << endl;

  for (Leito i: get_leitos())
  {
    i.imprime_leito();
  }
}