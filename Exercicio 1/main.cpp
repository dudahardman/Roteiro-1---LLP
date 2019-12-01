#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    int d, m, a;
    Data hoje = Data();

    cout << "Data: ";
    cin >> d;
    cin >> m;
    cin >> a;

    hoje = Data(d,m,a);
    cout << "Hoje: " << hoje.getDia() << "/" << hoje.getMes() << "/" << hoje.getAno() << endl;

    hoje.avancarDia();
    cout << "Amanha: " << hoje.getDia() << "/" << hoje.getMes() << "/" << hoje.getAno() << endl;

    return 0;
}
