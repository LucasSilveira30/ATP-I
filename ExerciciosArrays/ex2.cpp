//Exercício 2 — Validação de cartão (Luhn)

#include <iostream>
using namespace std;

int main() {
    int d[16];

    for (int i = 0; i < 16; i++)
        cin >> d[i];

    int soma = 0;

    for (int i = 0; i < 16; i++) {
        int v = d[i];
        if (i % 2 == 0) {
            v *= 2;
            if (v > 9) v -= 9;
        }
        soma += v;
    }

    if (soma % 10 == 0)
        cout << "Valido";
    else
        cout << "Invalido";

    return 0;
}
