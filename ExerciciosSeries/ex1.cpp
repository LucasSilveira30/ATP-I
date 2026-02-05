//Exercício 1 — 10 ímpares consecutivos após um número

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int atual = (n % 2 == 0) ? n + 1 : n;

    for (int i = 0; i < 10; i++) {
        cout << atual;
        if (i < 9) cout << " ";
        atual += 2;
    }

    return 0;
}
