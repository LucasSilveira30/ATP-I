//Exercício 2 — Verificação de data válida

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
    int dia, mes, ano;
    cin >> dia >> mes >> ano;

    if (mes < 1 || mes > 12 || dia < 1 || dia > num_dias(mes, ano))
        cout << "0";
    else
        cout << "1";

    return 0;
}
