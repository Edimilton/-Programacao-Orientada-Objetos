#include "Hospital.h"

using namespace std;

// Construtores //
Hospital::Hospital()
{
  nome = "Nao cadastrado";
  endereco = "Nao cadastrado";
  telefone = "Nao cadastrado";
}

Hospital::Hospital(string temp_nome, string temp_endereco, string temp_telefone)
{
  nome = temp_nome;
  endereco = temp_endereco;
  telefone = temp_telefone;
}

Hospital::~Hospital()
{
}

// Funcoes GET //
string Hospital::get_nome()
{
  return nome;
}

string Hospital::get_endereco()
{
  return endereco;
}

string Hospital::get_telefone()
{
  return telefone;
}

int Hospital::get_tamanho()
{
  return tamanho;
}

vector<Ala> Hospital::get_alas()
{
  return alas;
}

// Outras Funcoes //
void Hospital::add_ala(Ala temp_ala)
{
  if (alas.size() < tamanho)
  {
    alas.push_back(temp_ala);
  }
  else
  {
    cout << "O Hospital está totalmente ocupado";
  }
}

void Hospital::relatorio_estatistico()
{
  cout << "\n------------------ INFO HOSPITAL ------------------\n" << endl;
  cout << "Nome: " << get_nome() << endl;
  cout << "Endereco: " << get_endereco() << endl;
  cout << "Telefone: " << get_telefone() << endl;

  for (Ala i: get_alas())
  {
    i.imprime_ala();
  }
}