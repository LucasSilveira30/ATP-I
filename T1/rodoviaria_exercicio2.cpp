#include <iostream>
using namespace std;
int main () {
    char destino;
    int horario, num_passagens;
    float valor_final, valor_passagem = 40.00;
    
    cout << "Bem vindo(a) à empresa de transporte rodoviário!" << endl;
    
    cout << "O valor da passagem é: R$" << valor_passagem << endl;
    
    cout << "Escolha o seu destino" << endl;
    cout << "A: Cidade(NORTE) --> Cidade(SUL)" << endl;
    cout << "B: Cidade(SUL) --> Cidade(NORTE)" << endl;
    cin >> destino;
    switch (destino) {
           case 'A':
                cout << "Você escolheu a rota A" << endl;
                break;
           case 'a':
                cout << "Você escolheu a rota A" << endl;
                break;
           case 'B':
                cout << "Você escolheu a rota B" << endl;
                break;
           case 'b':
                cout << "Você escolheu a rota B" << endl;
           default:
                cout << "Inválido" << endl;
                break;
                }
    
    cout << "Escolha um dos horários disponíveis:" << endl;
    cout << "1 - 8:00" << endl;
    cout << "2 - 10:00" << endl;
    cout << "3 - 12:00" << endl;
    cout << "4 - 14:00" << endl;
    cout << "5 - 16:00" << endl;
    cin >> horario;
    switch (horario) {
           case 1:
                cout << "Você escolheu viajar às 8:00" << endl;
                cout << "Neste horário, a posição do sol é a seguinte (indicada pelo símbolo '*')" << endl;
                cout << "    N    " << endl;
                cout << "O   Ô   *" << endl;
                cout << "    S    " << endl;
                break;
           case 2:
                cout << "Você escolheu viajar às 10:00" << endl;
                cout << "Neste horário, a posição do sol é a seguinte (indicada pelo símbolo '*'):" << endl;
                cout << "    N    " << endl;
                cout << "O   Ô   *" << endl;
                cout << "    S    " << endl;
                break;
           case 3:
                cout << "Você escolheu viajar às 12:00" << endl;
                cout << "Neste horário, a posição do sol é a seguinte (indicada pelo símbolo '*'):" << endl;
                cout << "    *    " << endl;
                cout << "O   Ô   L" << endl;
                cout << "    S    " << endl;
                break;
           case 4:
                cout << "Você escolheu viajar às 14:00" << endl;
                cout << "Neste horário, a posição do sol é a seguinte (indicada pelo símbolo '*'):" << endl;
                cout << "    *    " << endl;
                cout << "O   Ô   L" << endl;
                cout << "    S    " << endl;
                break;
           case 5:
                cout << "Você escolheu viajar às 16:00" << endl;
                cout << "Neste horário, a posição do sol é a seguinte (indicada pelo símbolo '*'):" << endl;
                cout << "    N    " << endl;
                cout << "*   Ô   L" << endl;
                cout << "    S    " << endl;
                break;
           default:
                cout << "Inválido" << endl;
                }
                
    cout << " No horário escolhido, os assentos ocupados estarão marcados com o símbolo (X), enquanto os assentos livres serão indicados pelo símbolo (0)" << endl;
    switch (horario) {
           case 1:
                cout << "Às 8:00, os seguintes assentos estarão disponíveis:" << endl;
                cout << "  A  B  C  D" << endl;
                cout << "1 0  X  0  0" << endl;
                cout << "2 0  0  0  X" << endl;
                cout << "3 X  0  0  0" << endl;
                cout << "4 0  0  0  0" << endl;
                cout << "5 X  0  0  X" << endl;
                break;
           case 2:
                cout << "Às 10:00, os seguintes assentos estarão disponíveis:" << endl;
                cout << "  A  B  C  D" << endl;
                cout << "1 X  0  X  0" << endl;
                cout << "2 0  X  0  0" << endl;
                cout << "3 0  0  0  X" << endl;
                cout << "4 X  0  0  0" << endl;
                cout << "5 X  0  0  0" << endl;
                break;
           case 3:
                cout << "Às 12:00, os seguintes assentos estarão disponíveis:" << endl;
                cout << "  A  B  C  D" << endl;
                cout << "1 0  0  0  0" << endl;
                cout << "2 0  X  X  0" << endl;
                cout << "3 0  X  0  0" << endl;
                cout << "4 X  0  X  0" << endl;
                cout << "5 0  0  X  X" << endl;
                break;
           case 4:
                cout << "Às 14:00, os seguintes assentos estarão disponíveis:" << endl;
                cout << "  A  B  C  D" << endl;
                cout << "1 X  X  0  0" << endl;
                cout << "2 0  0  0  X" << endl;
                cout << "3 X  0  0  X" << endl;
                cout << "4 0  X  0  0" << endl;
                cout << "5 0  0  X  0" << endl;
                break;
           case 5:
                cout << "Às 16:00, os seguintes assentos estarão disponíveis:" << endl;
                cout << "  A  B  C  D" << endl;
                cout << "1 0  0  0  X" << endl;
                cout << "2 X  X  0  0" << endl;
                cout << "3 0  0  0  X" << endl;
                cout << "4 0  0  X  0" << endl;
                cout << "5 X  0  0  0" << endl;
                break;
           default:
                cout << "Inválido" << endl;
                break;
                }
                
    cout << "Quantos assentos deseja comprar?" << endl;
    cin >> num_passagens;
    valor_final = num_passagens * valor_passagem;
    cout << "Valor final: R$" << valor_final << endl;
                
    if (destino == 'A' || destino == 'a' && horario == 1) {
                cout << "Colunas com sol: A e B" << endl;
                } else {
                       if (destino == 'A' || destino == 'a' && horario == 2) {
                                   cout << "Colunas com sol: A e B" << endl;
                                   } else {
                                          if (destino == 'A' || destino == 'a' && horario == 3) {
                                                      cout << "Colunas com sol: nenhuma" << endl;
                                                      } else {
                                                             if (destino == 'A' || destino == 'a' && horario == 4) {
                                                                         cout << "Colunas com sol: nenhuma" << endl;
                                                                         } else {
                                                                                if (destino == 'A' || destino == 'a' && horario == 5) {
                                                                                            cout << "Colunas com sol: C e D" << endl;
                                                                                            } else {
                                                                                                   if (destino == 'B' || destino == 'b' && horario == 1) {
                                                                                                               cout << "Colunas com sol: C e D" << endl;
                                                                                                               } else {
                                                                                                                      if (destino == 'B' || destino == 'b' && horario == 2) {
                                                                                                                                  cout << "Colunas com sol: C e D" << endl;
                                                                                                                                  } else {
                                                                                                                                         if (destino == 'B' || destino == 'b' && horario == 3) {
                                                                                                                                                     cout << "Colunas com sol: nenhuma" << endl;
                                                                                                                                                     } else {
                                                                                                                                                            if (destino == 'B' || destino == 'b' && horario == 4) {
                                                                                                                                                                        cout << "Colunas com sol: nenhuma" << endl;
                                                                                                                                                                        } else {
                                                                                                                                                                               if (destino == 'B' || destino == 'b' && horario == 5) {
                                                                                                                                                                                           cout << "Colunas com sol: A e B" << endl;
                                                                                                                                                                                           }                                                                                                                                                                                          

}
}
}
}
}
}
}
}
}
}   
