#include "Pessoa.h"
#include <iostream>
using namespace std;


Pessoa::Pessoa()
{
    nome = "";
    idade = 0;
    telefone = 0;
}

Pessoa::Pessoa(string n){
    nome = n;
}

Pessoa::Pessoa(string n, int i, int t){
    nome = n;
    idade = i;
    telefone = t;
}

string Pessoa::getNome(){
    return nome;
}

int Pessoa::getIdade(){
    return idade;
}

int Pessoa::getTelefone(){
    return telefone;
}

void Pessoa::setPessoa(string n, int i, int t){
    nome = n;
    idade = i;
    telefone = t;
}
