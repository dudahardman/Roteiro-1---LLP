#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"
#include <iostream>
using namespace std;
#define S 2

class ControleDeGastos
{
    public:
        ControleDeGastos();
        Despesa despesas[S];
        void setDesp(Despesa d, int pos);
        double calculaTotalDeDespesas();
        bool existeDespesasDoTipo(string ddp);

};

#endif // CONTROLEDEGASTOS_H
