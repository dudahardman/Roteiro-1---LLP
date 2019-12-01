#include <iostream>
#include "Empregado.h"

using namespace std;

int main()
{
    string n, s;
    double sal;

    Empregado empregado1 = Empregado();
    Empregado empregado2 = Empregado();

    cout << "Digite as informacoes do empregado 1(nome, sobrenome e salario: ";
    cin >> n;
    cin >> s;
    cin >> sal;
    empregado1.setNome(n);
    empregado1.setSobrenome(s);
    empregado1.setSalario(sal);

    cout << "Digite as informacoes do empregado 2(nome, sobrenome e salario: ";
    cin >> n;
    cin >> s;
    cin >> sal;
    empregado2.setNome(n);
    empregado2.setSobrenome(s);
    empregado2.setSalario(sal);

    cout << "\t\tEmpregado 1\nNome: " << empregado1.getNome() << " " << empregado1.getSobrenome() << endl;
    cout << "Salario: " << empregado1.getSalario() << endl;
    cout << "Salario Anual: " << empregado1.salarioAnual() << "\n" << endl;

    cout << "\t\tEmpregado 2\nNome: " << empregado2.getNome() << " " << empregado2.getSobrenome() << endl;
    cout << "Salario: " << empregado2.getSalario() << endl;
    cout << "Salario Anual: " << empregado2.salarioAnual() << "\n" << endl;
    cout << "----------------------------------------------------------------------------\n" << endl;
    cout << "Salario Empregado 1 Pos Bonus: " << empregado1.salarioAnual() * 1.1 << endl;
    cout << "Salario Empregado 2 Pos Bonus: " << empregado2.salarioAnual() * 1.1 << endl;

    return 0;
}
