//Exercício 1 — Número de dias do mês

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
    int mes, ano;
    cin >> mes >> ano;
    cout << num_dias(mes, ano);
    return 0;
}
