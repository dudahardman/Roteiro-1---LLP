#include "ControleDePagamentos.h"
#include "Pagamento.h"
using namespace std;
#define S 2

ControleDePagamentos::ControleDePagamentos()
{
    //ctor
}

void ControleDePagamentos::setPagamentos(Pagamento p, int pos){
    pagamentos[pos] = p;
}
double ControleDePagamentos::calculaTotalPagamentos(){
    double total;
    for(int i = 0; i<S; i++){
        total += pagamentos[i].getValorPag();
    }
    return total;
}
bool ControleDePagamentos::existePagFunc(string nomeFunc){
   string nome;
    for(int j = 0; j<S; j++){
        nome = pagamentos[j].getNomeFunc();
        if(nomeFunc == nome){
            return true;
        }
    }
    return false;
}
