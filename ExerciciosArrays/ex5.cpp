//Exercício 5 — Convolução de dois vetores

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1024], b[1024];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++) {
        int temp = b[i];
        b[i] = b[n - 1 - i];
        b[n - 1 - i] = temp;
    }

    int r[2048] = {0};

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            r[i + j] += a[i] * b[j];

    for (int i = 0; i < 2 * n - 1; i++) {
        if (i > 0) cout << " ";
        cout << r[i];
    }

    return 0;
}
