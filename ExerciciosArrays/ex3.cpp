//Exercício 3 — Máximos locais

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int v[1024];

    for (int i = 0; i < n; i++)
        cin >> v[i];

    bool primeiro = true;

    if (n > 1 && v[0] > v[1]) {
        cout << v[0];
        primeiro = false;
    }

    for (int i = 1; i < n - 1; i++) {
        if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
            if (!primeiro) cout << " ";
            cout << v[i];
            primeiro = false;
        }
    }

    if (n > 1 && v[n - 1] > v[n - 2]) {
        if (!primeiro) cout << " ";
        cout << v[n - 1];
    }

    return 0;
}
