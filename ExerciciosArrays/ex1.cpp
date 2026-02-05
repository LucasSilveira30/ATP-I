//Exercício 1 — Conversão para binário

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int bin[64], k = 0;

    while (n > 0) {
        bin[k++] = n % 2;
        n /= 2;
    }

    for (int i = k - 1; i >= 0; i--)
        cout << bin[i];

    return 0;
}
