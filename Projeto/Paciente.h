#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Paciente
{
  private:
    string nome;
    int idade;
    string cpf;
    string endereco;
    string telefone;
    string tipo_sanguineo;
    string triagem;
    string situacao;
    vector<string> historico;
  
  public:
    Paciente();
    Paciente(string, int, string, string, string, string, string, string, string);
    ~Paciente();
    
    void set_cpf(string);
    void set_idade(int);
    void set_nome(string);
    void set_endereco(string);
    void set_telefone(string);
    void set_tipo_sanguineo(string);
    void set_triagem(string);
    void set_situacao(string);
    void set_registro(string, int, string, string);

    void set_ficha(string, string, string, string);

    void add_historico(string);

    string get_cpf();
    string get_nome();
    string get_endereco();
    string get_telefone();
    int get_idade();
    string get_tipo_sanguineo();
    string get_triagem();
    string get_situacao();
    vector<string> get_historico();

    void exibe_nome();
    void exibe_idade();
    void exibe_cpf();
    void exibe_endereco();
    void exibe_telefone();
    void exibe_tipo_sanguineo();
    void exibe_triagem();
    void exibe_situacao();
    void exibe_historico();
    
    void imprime_registro();
    void imprime_ficha();
    void imprime_informacoes();
};