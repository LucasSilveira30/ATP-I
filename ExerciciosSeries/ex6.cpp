//Exercício 6 — Decaimento radioativo

#include <iostream>
using namespace std;

int main() {
    double massa;
    cin >> massa;

    double inicial = massa;
    int tempo = 0;

    while (massa >= 0.5) {
        massa /= 2;
        tempo += 50;
    }

    int horas = tempo / 3600;
    int minutos = (tempo % 3600) / 60;
    int segundos = tempo % 60;

    cout << inicial << endl;
    cout << massa << endl;
    cout << horas << " " << minutos << " " << segundos;

    return 0;
}
