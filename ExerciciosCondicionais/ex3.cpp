#include <iostream>
using namespace std;

int main() {
    int codProduto, codPais;
    double pesoKg;
    cin >> codProduto >> pesoKg >> codPais;

    double pesoG = pesoKg * 1000;
    double precoPorGrama;

    if (codProduto >= 1 && codProduto <= 4)
        precoPorGrama = 10;
    else if (codProduto >= 5 && codProduto <= 7)
        precoPorGrama = 25;
    else
        precoPorGrama = 35;

    double precoTotal = pesoG * precoPorGrama;
    double imposto;

    if (codPais == 1)
        imposto = 0;
    else if (codPais == 2)
        imposto = precoTotal * 0.15;
    else
        imposto = precoTotal * 0.25;

    double valorTotal = precoTotal + imposto;

    cout << pesoG << endl;
    cout << precoTotal << endl;
    cout << imposto << endl;
    cout << valorTotal << endl;

    return 0;
}
