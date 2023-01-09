#include "Paciente.h"

using namespace std;

Paciente::Paciente()
{
  // Definindo valores padroes para o Paciente //
  set_cpf("Nao cadastrado");
  set_nome("Nao cadastrado");
  set_endereco("Nao cadastrado");
  set_telefone("Nao cadastrado");
  set_idade(-1);
  set_tipo_sanguineo("Nao cadastrado");
  set_triagem("Nao cadastrado");
  set_situacao("Nao cadastrado");
}

Paciente::Paciente(string temp_nome, int temp_idade, string temp_cpf, string temp_endereco, string temp_telefone,  string temp_tipo_sanguineo, string temp_triagem, string temp_situacao, string temp_historico)
{
  set_nome(temp_nome);
  set_idade(temp_idade);
  set_cpf(temp_cpf);
  set_endereco(temp_endereco);
  set_telefone(temp_telefone);
  set_tipo_sanguineo(temp_tipo_sanguineo);
  set_triagem(temp_triagem);
  set_situacao(temp_situacao);
  add_historico(temp_historico);
}

Paciente::~Paciente()
{
}

// Funcoes SET //
void Paciente::set_nome(string temp_nome)
{
  nome = temp_nome; 
}

void Paciente::set_idade(int temp_idade)
{
  idade = temp_idade; 
}

void Paciente::set_cpf(string temp_cpf)
{
  cpf = temp_cpf; 
}

void Paciente::set_endereco(string temp_endereco)
{
  endereco = temp_endereco; 
}

void Paciente::set_telefone(string temp_telefone)
{
  telefone = temp_telefone; 
}

void Paciente::set_tipo_sanguineo(string temp_tipo_sanguineo)
{
  tipo_sanguineo = temp_tipo_sanguineo; 
}

void Paciente::set_triagem(string temp_triagem)
{
  triagem = temp_triagem; 
}

void Paciente::set_situacao(string temp_situacao)
{
  situacao = temp_situacao;
}

void Paciente::set_registro(string temp_nome, int temp_idade, string temp_cpf, string temp_endereco)
{
  set_nome(temp_nome);
  set_idade(temp_idade);
  set_cpf(temp_cpf);
  set_endereco(temp_endereco);   
}

void Paciente::set_ficha(string temp_nome, string temp_tipo_sanguineo, string temp_triagem, string temp_situacao)
{
  set_nome(temp_nome);
  set_tipo_sanguineo(temp_tipo_sanguineo);
  set_triagem(temp_triagem);
  set_situacao(temp_situacao);
}

//Adiciona ao Historico//
void Paciente::add_historico(string temp_historico)
{
  historico.push_back(temp_historico);
}

// Funcoes GET //
string Paciente::get_cpf()
{
	return cpf;
}

string Paciente::get_nome()
{
	return nome;
}

string Paciente::get_endereco()
{
	return endereco;
}

string Paciente::get_telefone()
{
	return telefone;
}

int Paciente::get_idade()
{
	return idade;
}

string Paciente::get_tipo_sanguineo()
{
	return tipo_sanguineo;
}

string Paciente::get_triagem()
{
	return triagem;
}

string Paciente::get_situacao()
{
	return situacao;
}

vector<string> Paciente::get_historico()
{
	return historico;
}


// FUNÇÕES Exibe // 
void Paciente::exibe_nome()
{
  cout << "Nome: " << get_nome() << endl;
}

void Paciente::exibe_idade()
{
  cout << "Idade: " << get_idade() << endl;
}

void Paciente::exibe_cpf()
{
  cout << "CPF: " << get_cpf() << endl;
}

void Paciente::exibe_endereco()
{
  cout << "Endereco: " << get_endereco() << endl;
}

void Paciente::exibe_telefone()
{
  cout << "Telefone: " << get_telefone() << endl;
}

void Paciente::exibe_tipo_sanguineo()
{
  cout << "Tipo Sanguineo: " << get_tipo_sanguineo() << endl;
}

void Paciente::exibe_triagem()
{
  cout << "Triagem: " << get_triagem() << endl;
}

void Paciente::exibe_situacao()
{
  cout << "Situacao: " << get_situacao() << endl;
}

void Paciente::exibe_historico()
{
  cout << "Historico: ";
  for (string i: get_historico())
  {
    cout << i << "; ";
  }
  cout << endl;
}

// Funcoes IMPRIME //
void Paciente::imprime_registro()
{
  cout << "\n-- REGISTRO DO PACIENTE --\n";
  exibe_nome();
  exibe_idade();
  exibe_cpf();
  exibe_endereco();
}

void Paciente::imprime_ficha()
{
  cout << "\n-- FICHA PACIENTE --\n";
  exibe_nome();
  exibe_tipo_sanguineo();
  exibe_triagem();
  exibe_situacao();
  exibe_historico();
}

void Paciente::imprime_informacoes()
{
  cout << "INFORMACOES DO PACIENTE : " << get_nome() << endl;
  //exibe_nome();
  exibe_idade();
  exibe_cpf();
  exibe_endereco();
  exibe_telefone();
  exibe_tipo_sanguineo();
  exibe_triagem();
  exibe_situacao();
  exibe_historico();
}