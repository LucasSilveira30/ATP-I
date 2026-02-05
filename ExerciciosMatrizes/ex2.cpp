//Exercício 2 — campo_minado

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char* argv[]) {
    int n = atoi(argv[1]);
    int bombas = atoi(argv[2]);

    int m[32][32] = {0};

    srand(time(NULL));

    int colocadas = 0;

    while (colocadas < bombas) {
        int i = rand() % (n - 2) + 1;
        int j = rand() % (n - 2) + 1;

        if (m[i][j] == -1) continue;

        m[i][j] = -1;
        colocadas++;
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (m[i][j] != -1) {
                int c = 0;
                for (int x = -1; x <= 1; x++)
                    for (int y = -1; y <= 1; y++)
                        if (i + x >= 0 && i + x < n && j + y >= 0 && j + y < n)
                            if (m[i + x][j + y] == -1) c++;
                m[i][j] = c;
            }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (m[i][j] == -1) cout << "B ";
            else if (m[i][j] == 0) cout << ". ";
            else cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
