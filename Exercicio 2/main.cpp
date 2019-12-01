#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    int n,q;
    string d;
    double p;

    Invoice produto = Invoice();
    produto = Invoice(n,d,q,p);

    cout << "Digite um produto(numero, descricao, quantidade e preco): ";
    cin >> n;
    cin >> d;
    cin >> q;
    cin >> p;

    produto = Invoice(n,d,q,p);
    cout << "Numero = " << produto.numero << "\nDescricao = " << produto.descricao << endl;
    cout << "Quantidade = " << produto.quantidade << "\nPreco = " << produto.preco << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Fatura = " << produto.getInvoiceAmount() << endl;

    return 0;
}
