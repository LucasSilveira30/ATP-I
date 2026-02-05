//Exercício 4 — Primeiro ciclo da permutação

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int v[1024];
    bool visitado[1024] = {false};

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int atual = 0;

    while (!visitado[atual]) {
        cout << atual << " ";
        visitado[atual] = true;
        atual = v[atual];
    }

    return 0;
}
