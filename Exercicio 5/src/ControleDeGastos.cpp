#include "ControleDeGastos.h"
#include "Despesa.h"
#include <iostream>
#include <string>
using namespace std;
#define S 2

ControleDeGastos::ControleDeGastos()
{

}

void ControleDeGastos::setDesp(Despesa d, int pos){
    despesas[pos] = d;
}
double ControleDeGastos::calculaTotalDeDespesas(){
    int i;
    double total=0.0;
    for(i=0; i<S; i++){
        double cd = despesas[i].getValor();
        total+=cd;
    }
    return total;
}
bool ControleDeGastos::existeDespesasDoTipo(string ddp){
    string tipo;
    for(int j = 0; j<S; j++){
        tipo = despesas[j].getTipoDeGasto();
        if(tipo == ddp){
            return true;
        }
    }
    return false;
}
