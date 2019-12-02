#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <iostream>

using namespace std;
class Pagamento
{
    public:
        Pagamento();
        double valorPagamento;
        string nomeFunc;
        double getValorPag();
        string getNomeFunc();
        void setPag(string nome, double pag);
};

#endif // PAGAMENTO_H
