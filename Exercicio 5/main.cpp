#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"

using namespace std;

int main()
{
    int qt;
    string tp;
    double v;
    ControleDeGastos pt = ControleDeGastos();
    Despesa jp = Despesa();

    cout << "Quantas despesas deseja adicionar?";
    cin >> qt;

    for(int cont = 0; cont<qt; cont++){
        cout << "Digite sua despesa(tipo de gasto e valor): " << endl;
        cin >> tp;
        cin >> v;

        jp.setDespesa(tp,v);
        pt.setDesp(jp,cont);
    }

    cout << "Total de Gastos: " << pt.calculaTotalDeDespesas() << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "Digite o tipo de gasto que voce quer buscar: ";
    cin >> tp;
    cout << pt.existeDespesasDoTipo(tp);

    return 0;
}
