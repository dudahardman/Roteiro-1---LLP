#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>

using namespace std;
class Invoice
{
    public:
        Invoice();
        Invoice(int n, string d, int q, double p);
        int numero, quantidade;
        string descricao;
        double preco;
        int getNumero();
        string getDescricao();
        int getQuantidade();
        double getPreco();
        void setNumero(int n);
        void setDescricao(string d);
        void setQuantidade(int q);
        void setPreco(double p);
        double getInvoiceAmount();


};

#endif // INVOICE_H
