#include <iostream>
#include "Pessoa.h"
using namespace std;

int main()
{
    string n;
    int cont, i, S;
    int t;

    cout << "Quantas pessoas deseja cadastrar?" << endl;
    cin >> S;
    Pessoa people[S] = Pessoa();

    for(cont=0;cont<S;++cont){
        cout << "Digite as informacoes(nome, idade e telefone):" << endl;
        cin >> n;
        cin >> i;
        cin >> t;

        people[cont].setPessoa(n, i, t);

    }

    for(cont=0;cont<S;cont++){
        cout << "\t\t\Pessoa (" << cont << "):" << endl;
        cout << "Nome: " << people[cont].getNome() << endl;
        cout << "Idade: " << people[cont].getIdade() << endl;
        cout << "Telefone: " << people[cont].getTelefone() << endl;
        cout << "--------------------------------------------" << endl;
    }

    return 0;
}
