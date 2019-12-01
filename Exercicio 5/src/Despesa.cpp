#include "Despesa.h"
#include <iostream>
using namespace std;

Despesa::Despesa()
{
    valor = 0.0;
    tipoDeGasto = "";
}

Despesa::Despesa(string tp, double v){
    tipoDeGasto = tp;
    valor = v;
}

double Despesa::getValor(){
    return valor;
}

string Despesa::getTipoDeGasto(){
    return tipoDeGasto;
}

void Despesa::setDespesa(string tp, double v){
    tipoDeGasto = tp;
    valor = v;
}
