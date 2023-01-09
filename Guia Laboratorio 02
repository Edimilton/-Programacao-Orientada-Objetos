#include <iostream>
#include <string>
 
using namespace std;
 
class Avaliacao{
   double u1_guialab1;
   double u1_guialab2;
   double u2_guialab1;
   double u2_guialab2;
   double projetofinal;
   double p1;
   double p2;
   double p3;
   double unidade1;
   double unidade2;
   double notafinal;
   int matricula;
   string nomeAluno;
 
   public:
   Avaliacao(){
       p1 = 0.2;
       p2 = 0.2;
       p3 = 0.6;      
   }
   double AvaliacaoUnidade1(){
       unidade1 = (u1_guialab1 + u1_guialab2)/2;
       return unidade1;
   }
 
   double AvaliacaoUnidade2(){
       unidade2 = (u2_guialab1 + u2_guialab2)/2;
       return unidade2;
   }
 
   void NotaFinal(){
       notafinal = (AvaliacaoUnidade1()*p1 +
                     AvaliacaoUnidade2()*p2 +
                     projetofinal*p3 )/(p1+p2+p3);
   }
 
   void MostrarNotaFinal(){
       cout << notafinal << endl;
   }
 
   void EntradaNotas(){
       cin >> u1_guialab1;
       cin >> u1_guialab2;
       cin >> u2_guialab1;
       cin >> u2_guialab2;
       cin >> projetofinal;
   }
 
   void SetNomeAluno(string nome){
     nomeAluno = nome;
   }

   void SetMatricula(int matri){
     matricula = matri;
    }

   double GetNotaFinal(){
     return notafinal;
    }
 
 
};
 
class Turma {
   Avaliacao avaliaAluno1,
             avaliaAluno2,
             avaliaAluno3;
   double mediaTurma;
   double maior;
   double menor;
   int codigoTurma;
   string nomeTurma;
 
   public:
       Turma(){ }

       void setNomeTurma(string nome){
         nomeTurma = nome;
       }

       void setCodigoTurma(int codigo){
         codigoTurma = codigo;
       }

       void registraEntradaNotasDosAlunos(){
         cout << "Insira as notas do Aluno1" << endl;
         avaliaAluno1.EntradaNotas();
         cout << "Insira as notas do Aluno2" << endl;
         avaliaAluno2.EntradaNotas();
         cout << "Insira as notas do Aluno3" << endl;
         avaliaAluno3.EntradaNotas();
       }

       void calculaMediaDaTurma(){
         avaliaAluno1.NotaFinal();
         avaliaAluno2.NotaFinal();
         avaliaAluno3.NotaFinal();

         mediaTurma = (avaliaAluno1.GetNotaFinal() + avaliaAluno2.GetNotaFinal() + avaliaAluno3.GetNotaFinal()) / 3;
       }
         
       void calculaNotaMaiorTurma(){
         if (avaliaAluno1.GetNotaFinal() >= avaliaAluno2.GetNotaFinal()){
           if (avaliaAluno1.GetNotaFinal() >= avaliaAluno3.GetNotaFinal()){
             maior = avaliaAluno1.GetNotaFinal();
           }
           else {maior = avaliaAluno3.GetNotaFinal();}
         }
         else {
           if (avaliaAluno2.GetNotaFinal() >= avaliaAluno3.GetNotaFinal()){
              maior = avaliaAluno2.GetNotaFinal();
           }
           else {maior = avaliaAluno3.GetNotaFinal();}
         }
       }

       void calculaNotaMenorTurma(){
         if (avaliaAluno1.GetNotaFinal() <= avaliaAluno2.GetNotaFinal()){
           if (avaliaAluno1.GetNotaFinal() <= avaliaAluno3.GetNotaFinal()){
             menor = avaliaAluno1.GetNotaFinal();
           }
           else {menor = avaliaAluno3.GetNotaFinal();}
         }
         else {
           if (avaliaAluno2.GetNotaFinal() <= avaliaAluno3.GetNotaFinal()){
              menor = avaliaAluno2.GetNotaFinal();
           }
           else {menor = avaliaAluno3.GetNotaFinal();}
         }
       }

       double getMediaDaTurma(){
         return mediaTurma;
       }

       double getNotaMaiorTurma(){
         return maior;
       }
       
       double getNotaMenorTurma(){
         return menor;
       }
};


 
 
int main(int argc, char const *argv[])
{
   Turma turmaPOO;
 
   turmaPOO.setNomeTurma("POO");
   turmaPOO.setCodigoTurma(10);
   turmaPOO.registraEntradaNotasDosAlunos();
   turmaPOO.calculaMediaDaTurma();
   turmaPOO.calculaNotaMaiorTurma();
   turmaPOO.calculaNotaMenorTurma();
   cout << turmaPOO.getMediaDaTurma() << endl;
   cout << turmaPOO.getNotaMaiorTurma() << endl;
   cout << turmaPOO.getNotaMenorTurma() << endl;
 
   return 0;
}
