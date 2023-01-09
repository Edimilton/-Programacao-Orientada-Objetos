#include <iostream>
using namespace std;

#define P1 20
#define P2 20
#define P3 60

class Avaliacao
{
  float u1_1;
  float u1_2;
  float u2_1;
  float u2_2;
  float u3;
  float media;

  public:
    void boletim(float nota1, float nota2, float nota3, float nota4, float nota5)
    {
      u1_1 = nota1; 
      u1_2 = nota2;
      u2_1 = nota3;
      u2_2 = nota4;
      u3 = nota5;
    }

    void calculaMedia()
    {
      float unidade1, unidade2;

      unidade1 = (u1_1 + u1_2)/(float)2;
      unidade2 = (u2_1 + u2_2)/(float)2;

      media = (unidade1 * P1 + unidade2 * P2 + u3 * P3) / (float)(P1 + P2 + P3);
    }
  

    void resultado()
    {
      cout << "O estudante tem media: " << media << endl;
    }
};

int main()
{
  Avaliacao estudante1, estudante2;

  estudante1.boletim(8.1, 5.6, 7.4, 4.2, 2.9);
  estudante2.boletim(6.2, 9.6, 5.1, 2, 9.8);

  estudante1.calculaMedia();
  estudante2.calculaMedia();

  estudante1.resultado();
  estudante2.resultado();

  return 0;
}
