//Exercício 6 — Josephus (ordem de execução)

#include <iostream>
using namespace std;

int main() {
    int n = 24, m = 11;
    int v[24];

    for (int i = 0; i < n; i++)
        v[i] = i + 1;

    int vivos = n;
    int pos = 0;

    while (vivos > 0) {
        int cont = 1;

        while (cont < m) {
            pos = (pos + 1) % n;
            if (v[pos] != 0) cont++;
        }

        cout << v[pos] << " ";
        v[pos] = 0;
        vivos--;

        while (vivos > 0 && v[pos] == 0)
            pos = (pos + 1) % n;
    }

    return 0;
}
