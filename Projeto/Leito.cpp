#include "Leito.h"

using namespace std;

// Construtores //
Leito::Leito()
{
  set_id(-1);
  set_situacao("Indisponivel");
}

Leito::Leito(int temp_id)
{
  set_id(temp_id);
  set_situacao("Disponivel");
}

Leito::~Leito()
{
}
 
// Funcoes SET //

void Leito::set_id(int temp_id)
{
  id = temp_id;
}

void Leito::set_situacao(string temp_situacao)
{
  situacao = temp_situacao;
}

void Leito::set_paciente(Paciente temp_paciente)
{
  paciente = temp_paciente;
  set_situacao("Indisponivel");
}

// Funcoes GET //

int Leito::get_id()
{
  return id;
}

string Leito::get_situacao()
{
  return situacao;
}

Paciente Leito::get_paciente()
{
  return paciente;
}

// Funcoes EXIBE //

void Leito::exibe_id()
{
  cout << "Id: " << get_id() << endl;
}

void Leito::exibe_situacao()
{
  cout << "Situacao: " << get_situacao() << endl;
}

//Funcoes IMPRIME //

void Leito::imprime_leito()
{
  cout << "\n------ STATUS LEITO ------\n";
  exibe_id();
  exibe_situacao();
  paciente.imprime_ficha();
}