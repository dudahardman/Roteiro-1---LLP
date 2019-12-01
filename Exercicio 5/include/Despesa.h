#ifndef DESPESA_H
#define DESPESA_H
#include <iostream>
using namespace std;

class Despesa
{
    public:
        Despesa();
        double valor;
        string tipoDeGasto;
        Despesa(string tp, double v);
        double getValor();
        string getTipoDeGasto();
        void setDespesa(string tp, double v);

};

#endif // DESPESA_H
