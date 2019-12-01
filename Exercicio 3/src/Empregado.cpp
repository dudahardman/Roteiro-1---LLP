#include "Empregado.h"
#include <iostream>
using namespace std;

Empregado::Empregado()
{
    nome = "";
    sobrenome = "";
    salario = 0.0;
}

Empregado::Empregado(string n, string s, double sal){
    nome = n;
    sobrenome = s;
    if(sal > 0){
        salario = sal;
    }
}

string Empregado::getNome(){
    return nome;
}

string Empregado::getSobrenome(){
    return sobrenome;
}

double Empregado::getSalario(){
    return salario;
}

void Empregado::setNome(string n){
    nome = n;
}
void Empregado::setSobrenome(string s){
    sobrenome = s;
}
void Empregado::setSalario(double sal){
    salario = sal;
}

double Empregado::salarioAnual(){
    double salarioAnual = 0.0;
    return salarioAnual = 12*salario;
}
