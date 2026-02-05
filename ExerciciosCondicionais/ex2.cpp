//Exercício 2 — Verificação e tipo de triângulo

#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z) {
            cout << "Triângulo Equilátero";
        } else if (x == y || x == z || y == z) {
            cout << "Triângulo Isósceles";
        } else {
            cout << "Triângulo Escaleno";
        }
    } else {
        cout << "Essas medidas não formam um triângulo";
    }

    return 0;
}
