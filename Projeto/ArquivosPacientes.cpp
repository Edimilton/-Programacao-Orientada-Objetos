#include "ArquivosPacientes.h"

using namespace std;

//Construtores
ArquivosPacientes::ArquivosPacientes()
{
}

ArquivosPacientes::ArquivosPacientes(vector<Paciente> temp_pacientes)
{
  pacientes = temp_pacientes;
}

//Destrutor
ArquivosPacientes::~ArquivosPacientes()
{
}

// Funcoes Get
Paciente ArquivosPacientes::get_paciente(string temp_cpf)
{
  for(int i = 0; i < pacientes.size(); i++)
  {
    if(pacientes.at(i).get_cpf() == temp_cpf)
      {
        return pacientes.at(i);
      }
  }
    Paciente paciente;
    return paciente;
}


vector<Paciente> ArquivosPacientes::get_pacientes()
{
  return pacientes;
}


// Outras Funcoes
bool ArquivosPacientes::procura_paciente(string temp_cpf)
{
  for(int i = 0; i < pacientes.size(); i++)
  {
      if((pacientes.at(i)).get_cpf() == temp_cpf)
      {
        return true;
      }
  }
  return false;
}


void ArquivosPacientes::add_paciente(Paciente temp_paciente)
{
  if(procura_paciente(temp_paciente.get_cpf()))
  {
    cout << "Paciente já cadastrado" << endl;
  }

  pacientes.push_back(temp_paciente);
}


void ArquivosPacientes::remove_paciente(string temp_cpf)
{
  vector<Paciente> temp_pacientes;
  for (Paciente i: get_pacientes())
  {
    if(i.get_cpf() != temp_cpf)
    {
      temp_pacientes.push_back(i);
    }
  }
  pacientes = temp_pacientes;
}


void ArquivosPacientes::imprime_pacientes()
{
  cout << "\n--- ARQUIVOS DOS PACIENTES --- \n\n";
  for (Paciente i: get_pacientes())
  {
    i.imprime_informacoes();
    cout << "\n";
  }
}

