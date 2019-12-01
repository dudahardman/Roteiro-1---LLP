#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
using namespace std;


class Pessoa
{
    public:
        Pessoa();
        string nome;
        int idade;
        int telefone;
        Pessoa(string n);
        Pessoa(string n, int i, int t);
        string getNome();
        int getIdade();
        int getTelefone();
        void setPessoa(string n, int i, int t);
};

#endif // PESSOA_H
