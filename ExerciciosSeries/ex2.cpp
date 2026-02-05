//Exercício 2 — Progressão aritmética por quantidade de termos

#include <iostream>
using namespace std;

int main() {
    int termo, razao, qtd;
    cin >> termo >> razao >> qtd;

    if (qtd <= 0) {
        cout << "Numero de termos incorreto";
        return 0;
    }

    for (int i = 0; i < qtd; i++) {
        cout << termo;
        if (i < qtd - 1) cout << " ";
        termo += razao;
    }

    return 0;
}
