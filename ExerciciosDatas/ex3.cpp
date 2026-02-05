//Exercício 3 — Dias entre duas datas no mesmo ano

#include <iostream>
using namespace std;

int num_dias(int mes, int ano) {
    if (mes == 2) {
        if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
            return 29;
        return 28;
    }

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        return 30;

    return 31;
}

int main() {
    int d1, m1, d2, m2, ano;
    cin >> d1 >> m1 >> d2 >> m2 >> ano;

    int total = 0;

    if (m1 == m2) {
        cout << d2 - d1;
        return 0;
    }

    total += num_dias(m1, ano) - d1;

    for (int m = m1 + 1; m < m2; m++)
        total += num_dias(m, ano);

    total += d2;

    cout << total;

    return 0;
}
