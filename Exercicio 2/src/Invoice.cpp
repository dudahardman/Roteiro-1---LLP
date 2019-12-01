#include "Invoice.h"

using namespace std;

Invoice::Invoice()
{
    numero = 0;
    descricao = "";
    quantidade = 0;
    preco = 0.0;
}

Invoice::Invoice(int n, string d, int q, double p){
    numero = n;
    descricao = d;
    if(q>0){
        quantidade = q;
    }else{
        quantidade = 0;
    }
    if(p > 0){
        preco = p;
    }else{
        preco = 0;
    }
}

int Invoice::getNumero(){
    return numero;
}

string Invoice::getDescricao(){
    return descricao;
}

int Invoice::getQuantidade(){
    return quantidade;
}

double Invoice::getPreco(){
    return preco;
}

void Invoice::setNumero(int n){
    numero = n;
}

void Invoice::setDescricao(string d){
    descricao = d;
}

void Invoice::setQuantidade(int q){
    quantidade = q;
}

void Invoice::setPreco(double p){
    preco = p;
}

double Invoice::getInvoiceAmount(){
    double fatura = 0.0;
    fatura = quantidade * preco;
    return fatura;
}
