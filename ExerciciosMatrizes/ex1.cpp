//Exercício 1 — mais_percursos

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int m[16][16];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m[i][j];

    bool ok = true;

    for (int i = 0; i < n; i++)
        for (int j = 1; j < n; j += 2)
            if (i < j && m[i][j] <= 0)
                ok = false;

    if (ok) {
        int soma = 0, cont = 0;
        for (int i = 0; i < n; i++) {
            int j = n - 1 - i;
            if (m[i][j] % 2 == 0) {
                soma += m[i][j];
                cont++;
            }
        }
        if (cont > 0) cout << soma / cont;
        else cout << 0;
    } else {
        int soma = 0;
        for (int i = 0; i < n; i++)
            soma += m[i][n - 1];
        cout << soma;
    }

    return 0;
}
