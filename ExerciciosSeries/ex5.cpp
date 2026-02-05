//Exercício 5 — Somatório com fatoriais (20 termos)

#include <iostream>
using namespace std;

long long fatorial(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

int main() {
    double x;
    cin >> x;

    double s = x;
    int sinal = -1;

    for (int i = 3; i <= 39; i += 2) {
        s += sinal * (fatorial((int)x) / (double)fatorial(i));
        sinal *= -1;
    }

    cout << s;
    return 0;
}
