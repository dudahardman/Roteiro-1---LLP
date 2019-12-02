#include "Pagamento.h"
#include <iostream>

using namespace std;
Pagamento::Pagamento()
{
    nomeFunc = "";
    valorPagamento = 0.0;
}

double Pagamento::getValorPag(){
    return valorPagamento;
}
string Pagamento::getNomeFunc(){
    return nomeFunc;
}
void Pagamento::setPag(string nome, double pag){
    nomeFunc = nome;
    valorPagamento = pag;
}
