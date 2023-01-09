class Aluno {

  float uni_11, uni_12, uni_21, uni_22, uni_3, media;
  final int Peso1 = 20, Peso2 = 20, Peso3 = 60; 
  
  public void recebeNotas(float n1, float n2, float n3, float n4, float n5)
  {
    uni_11 = n1; 
    uni_12 = n2;
    uni_21 = n3;
    uni_22 = n4;
    uni_3 = n5;
  }

  public void mediaFinal()
  {
    float uni_1, uni_2;

    uni_1 = (uni_11 + uni_12)/(float)2;
    uni_2 = (uni_21 + uni_22)/(float)2;

    media = (uni_1 * Peso1 + uni_2 * Peso2 + uni_3 * Peso3) / (float)(Peso1 + Peso2 + Peso3);
  }

  public void imprimeMedia()
  {
    System.out.printf("A média do aluno é %.2f\n", media);
  }

  }

class Main
{
  public static void main(String[] args)
  {
    Aluno aluno1 = new Aluno(), aluno2 = new Aluno(); 

    aluno1.recebeNotas((float)5.8, (float)5.8, (float)7.5, (float)1.1, (float)3.5);
    aluno2.recebeNotas((float)6.8, (float)9.8, (float)4.5, (float)1.1, (float)4.8);

    aluno1.mediaFinal();
    aluno2.mediaFinal();

    aluno1.imprimeMedia();
    aluno2.imprimeMedia();
  }
}
