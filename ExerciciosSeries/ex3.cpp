//Exercício 3 — Progressão aritmética por valor limite

#include <iostream>
using namespace std;

int main() {
    int termo, razao, limite;
    cin >> termo >> razao >> limite;

    if ((razao > 0 && termo > limite) || (razao < 0 && termo < limite) || razao == 0) {
        cout << "Valor limite incorreto";
        return 0;
    }

    while ((razao > 0 && termo <= limite) || (razao < 0 && termo >= limite)) {
        cout << termo;
        int proximo = termo + razao;
        if ((razao > 0 && proximo <= limite) || (razao < 0 && proximo >= limite))
            cout << " ";
        termo = proximo;
    }

    return 0;
}
