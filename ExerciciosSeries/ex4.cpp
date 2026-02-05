//Exercício 4 — Somatório S = 1/225 − 2/196 + 4/169 − ... + 16384/1

#include <iostream>
using namespace std;

int main() {
    double s = 0;
    int numerador = 1;
    int denominador = 225;
    int sinal = 1;

    while (denominador >= 1) {
        s += sinal * (double)numerador / denominador;
        numerador *= 2;
        denominador = (int)(sqrt(denominador) - 1);
        denominador *= denominador;
        sinal *= -1;
    }

    cout << s;
    return 0;
}
