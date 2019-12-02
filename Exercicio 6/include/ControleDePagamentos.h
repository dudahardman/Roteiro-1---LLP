#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"
#define S 2

using namespace std;

class ControleDePagamentos
{
    public:
        ControleDePagamentos();
        Pagamento pagamentos[S];
        void setPagamentos(Pagamento p, int pos);
        double calculaTotalPagamentos();
        bool existePagFunc(string nomeFunc);
};

#endif // CONTROLEDEPAGAMENTOS_H
