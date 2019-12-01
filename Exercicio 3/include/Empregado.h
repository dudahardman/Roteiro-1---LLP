#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>
using namespace std;

class Empregado
{
    public:
        Empregado();
        string nome, sobrenome;
        double salario;
        Empregado(string n, string s, double sal);
        string getNome();
        string getSobrenome();
        double getSalario();
        void setNome(string n);
        void setSobrenome(string s);
        void setSalario(double sal);
        double salarioAnual();

};

#endif // EMPREGADO_H
