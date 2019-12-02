#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

using namespace std;

int main()
{
    int qt;
    string nome;
    double valor;
    ControleDePagamentos pt = ControleDePagamentos();
    Pagamento jp = Pagamento();

    cout << "Quantos pagamentos deseja fazer? ";
    cin >> qt;


    for(int cont = 0; cont<qt; cont++){
        cout << "Digite seu pagamento(nome do funcionario e valor: ";
        cin >> nome;
        cin >> valor;

        jp.setPag(nome, valor);
        pt.setPagamentos(jp,cont);
    }

    cout << "Total de Pagamentos: " << pt.calculaTotalPagamentos() << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "Digite o tipo de gasto que voce quer buscar: ";
    cin >> nome;
    cout << pt.existePagFunc(nome);

    return 0;
}
