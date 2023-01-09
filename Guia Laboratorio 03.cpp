// Edimilton Ferreira 

#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

class Lampada
{
    private:
        int voltagem;
        int potencia;
        bool queimada;
        bool estado;
        bool conectada;
        string tipo;
        string cor;
        string marca;
    
    public:
        Lampada();
        Lampada(int v, string t);
        void esta_queimada();
        void conectar_desconectar();
        void ligar_desligar();
        void set_voltagem();
        bool get_estado();
        int get_voltagem();
        int get_potencia();
        string get_tipo();
        string get_cor();
        string get_marca();
        void imprime();
};

void Lampada::conectar_desconectar()
{
    conectada = !conectada;
}

void Lampada::esta_queimada()
{
    srand(time(NULL));
    int n = rand() % 10;
    if (marca == "luximinar") 
    {
        if (n <= 5)
            queimada = true;
        else
            queimada = false;
    }
    else
    {
        if (marca == "ledzep")
        {
            if (n == 1)
                queimada = true;
            else
                queimada = false;
        }
        else 
        {
            if (n <= 2)
                queimada = true;
            else
                queimada = false;
        }
    }
}

Lampada::Lampada()
{
    voltagem = 110;
    tipo = "incandescente";
    cor = "amarela";
    marca = "luximinar";
    potencia = 60;
    estado = false;
    conectada = false;
}

Lampada::Lampada(int v, string t)
{
    if (v == 110 || v == 220)
        voltagem = v;
    else
        voltagem = 110;

    for (char &ch:t)
        ch = tolower(ch);

    if (t == "led")
    {   
        tipo = t;
        potencia = 9;
        cor = "branca";
        marca = "ledzep";
        esta_queimada();
    }
    else 
    {
        if (t == "fluorescente")
        {
            tipo = t;
            potencia = 15;
            cor = "branca";
            marca = "florin";
            esta_queimada();
        }
        else
        {   
            tipo = "incandescente";
            potencia = 60;
            cor = "amarela";
            marca = "luximinar";
            esta_queimada();
        }
    }

    estado = false;
    conectada = false;
}

void Lampada::ligar_desligar()
{   
    if (conectada)
    {
        if (queimada) 
        {
          cout << "A lampada esta queimada" << endl;
        }
        else estado = !estado;
    }
    else cout << "A lampada nao esta conectada na energia" << endl;
}

void Lampada::set_voltagem()
{
    if (voltagem == 120)
    {
        voltagem = 220;
    }
    else voltagem = 120;

}

bool Lampada::get_estado()
{
    return estado;
}

int Lampada::get_voltagem()
{
    return voltagem;
}

int Lampada::get_potencia()
{
    return potencia;
}

string Lampada::get_tipo()
{
    return tipo;
}

string Lampada::get_cor()
{
    return cor;
}

string Lampada::get_marca()
{
    return marca;
}

void Lampada::imprime()
{
    cout << "Estado = " << estado << endl;
    cout << "Voltagem = " << voltagem << "V" << endl;
    cout << "Potencia = " << potencia << "W" << endl;
    cout << "Tipo = " << tipo << endl;
    cout << "Cor = " << cor << endl;
    cout << "Marca = " << marca << endl << endl;
}

int main(int argc, char const *argv[])
{
   Lampada sala(220, "leD"), cozinha(1120, "FlUorescente"), escritorio;
   
   sala.conectar_desconectar();
   sala.ligar_desligar();
   sala.imprime();
   sala.set_voltagem();
   sala.ligar_desligar();
   sala.imprime();

   cozinha.conectar_desconectar();
   cozinha.ligar_desligar();
   cozinha.imprime();
   cozinha.set_voltagem();
   cozinha.conectar_desconectar();
   cozinha.ligar_desligar();
   cozinha.imprime();

   escritorio.conectar_desconectar();
   escritorio.ligar_desligar();
   escritorio.imprime();
   escritorio.set_voltagem();
   escritorio.ligar_desligar();
   escritorio.imprime();
 
   return 0;
}
