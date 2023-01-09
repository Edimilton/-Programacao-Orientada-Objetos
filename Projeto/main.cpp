#include "Hospital.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Hospital hospital1("Hospital Universitario", "Rua dos milagres", "79-999231423");

  Ala ala1("UTI");
  Ala ala2("Geral");

  Sala sala1(12, 2);
  Sala sala2(35, 3);
  Sala sala3(54, 7);

  Leito leito1(10);
  Leito leito2(20);
  Leito leito3(30);
  Leito leito4(40);
  Leito leito5(50);
  Leito leito6(60);
  Leito leito7(70);
  Leito leito8(80);
  Leito leito9;
  
  Paciente paciente1("Galileo", 25, "0098762221","Condominio Sereia", "79-999687526",  "A+", "Baixa", "Internado", "Lesão no músculo");
  
  Paciente paciente2("Isaac", 29, "0221692199","Rua Beira Rio", "79-995544600", "B+", "Alta", "Acidente de carro", "múltiplas fraturas");

  paciente1.add_historico("Fraturou o braço");

  Paciente paciente3("Ada", 14, "0668767241", "Condominio Morada real", "79-998527599",  "O-", "Baixa", "Dor abdominal", "Febre alta");

  Paciente paciente4("Albert", 82, "0768802141","Rua Carlos Gomes", "79-997621879",  "AB", "Alta", "Icterícia", "Cirrose");

  Paciente paciente5("Nikola", 42, "0328812190","Rua Antônio Maia", "79-993121800",  "B-", "Baixa", "Febre alta", "Dor de cabeça");

  Paciente paciente6;

  ArquivosPacientes arquivo1;
  arquivo1.add_paciente(paciente1);
  arquivo1.add_paciente(paciente2);
  arquivo1.add_paciente(paciente3);
  arquivo1.add_paciente(paciente4);
  arquivo1.add_paciente(paciente5);
  arquivo1.add_paciente(paciente6);

  arquivo1.imprime_pacientes();

  leito1.set_paciente(paciente1);

  leito2.set_paciente(paciente2);

  leito3.set_paciente(paciente3);

  leito4.set_paciente(paciente4);

  leito6.set_paciente(paciente6);
 
  sala1.add_leito(leito2);
  sala1.add_leito(leito4);
  
  sala2.add_leito(leito1);
  sala2.add_leito(leito3);

  sala3.add_leito(leito5);
  sala3.add_leito(leito6);
  sala3.add_leito(leito7);
  sala3.add_leito(leito8);
  sala3.add_leito(leito9);

  ala1.add_sala(sala1);
  
  ala2.add_sala(sala2);
  ala2.add_sala(sala3);
  
  hospital1.add_ala(ala1);
  hospital1.add_ala(ala2);

  hospital1.relatorio_estatistico();
}