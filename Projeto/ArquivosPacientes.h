#include "Paciente.h"

using namespace std;


class ArquivosPacientes
{
    private:
        vector<Paciente> pacientes;

    public:
        ArquivosPacientes();
     ArquivosPacientes(vector<Paciente>);
        ~ArquivosPacientes();

        Paciente get_paciente(string);
        vector<Paciente> get_pacientes();

        bool procura_paciente(string);
        void add_paciente(Paciente);
        void remove_paciente(string);
        
        void imprime_pacientes();
        
};
