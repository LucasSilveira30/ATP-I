#include <iostream>
using namespace std;
int main () {
    int base, topping, crunch, proteina, nut, molho;
    int itens;
    float valor_base, valor_topping, valor_crunch, valor_proteina, valor_nut, valor_molho, valor_tamanho, total = 0.00;
    char tamanho;
    
    cout << "Bem-vindo ao Demac Poke!" << endl;
    
    cout << "Qual o tamanho do seu poke?" << endl;
    cout << "P - Pequeno (R$10.00)" << endl;
    cout << "M - Médio (R$12.00)" << endl;
    cout << "G - Grande (R$15.00)" << endl;
    cin >> tamanho;
    switch (tamanho) {
           case 'P':
                valor_tamanho = 10.00;
                total = total + 10.00;
                break;
           case 'p':
                valor_tamanho = 10.00;
                total = total + 10.00;
                break;
           case 'M':
                valor_tamanho = 12.00;
                total = total + 12.00;
                break;
           case 'm':
                valor_tamanho = 12.00;
                total = total + 12.00;
                break;
           case 'G':
                valor_tamanho = 15.00;
                total = total + 15.00;
                break;
           case 'g':
                valor_tamanho = 15.00;
                total = total + 15.00;
                break;
           default:
                cout << "Inválido" << endl;
                break;
                }
    cout << "O tamanho escolhido foi: " << tamanho << endl;
    
    cout << "Monte o seu poke!" << endl;
    
    while (itens != 7) {
    
    cout << "1) BASES" << endl;
    cout << "2) TOPPINGS" << endl;
    cout << "3) CRUNCHES" << endl;
    cout << "4) PROTEÍNAS" << endl;
    cout << "5) NUT" << endl;
    cout << "6) MOLHO" << endl;
    cout << "7) Finalizar pedido" << endl;
    cin >> itens;
    
    switch (itens) {
           case 1:
                cout << "As opções de bases são: " << endl;
                cout << "1 - Arroz branco (R$0.00)" << endl;
                cout << "2 - Arroz integral (R$1.00)" << endl;
                cout << "3 - Alface (0.50)" << endl;
                cout << "4 - Macarrão (1.50)" << endl;
                cout << "5 - Nenhuma" << endl;
                cout << "Escolha uma base" << endl;
                cin >> base;
                switch (base) {
                       case 1: 
                            cout << "Você escolheu a base: Arroz branco" << endl;
                            valor_base = 0.00;
                            total = total + 0.00;
                            break;
                       case 2:
                            cout << "Você escolheu a base: Arroz integral" << endl;
                            valor_base = 1.00;
                            total = total + 1.00;
                            break;
                       case 3:
                            cout << "Você escolheu a base: Alface" << endl;
                            valor_base = 0.50;
                            total = total + 0.50;
                            break;
                       case 4:
                            cout << "Você escolheu a base: Macarrão" << endl;
                            valor_base = 1.50;
                            total = total + 1.50;
                            break;
                       case 5:
                            cout << "Você não escolheu alguma base" << endl;
                            valor_base = 0.00;
                            total = total + 0.00;
                            break;
                       default:
                            cout << "Inválido" << endl;
                            break;
                            }
                cout << "O valor intermediário do seu poke é: R$" << total << endl;
                
           case 2:
              cout << "As opções de toppings são:" << endl;
              cout << "1 - Abacate (R$1.50)" << endl;
              cout << "2 - Cebola roxa (R$0.50)" << endl;
              cout << "3 - Cenoura ralada (R$0.75)" << endl;
              cout << "4 - Pepino (R$0.75)" << endl;
              cout << "5 - Nenhum" << endl;
              cout << "Escolha um topping" << endl;
              cin >> topping;
              switch (topping) {
                     case 1: 
                          cout << "Você escolheu o topping: Abacate" << endl;
                          valor_topping = 1.50;
                          total = total + 1.50;
                          break;
                     case 2:
                          cout << "Você escolheu o topping: Cebola roxa" << endl;
                          valor_topping = 0.50;
                          total = total + 0.50;
                          break;
                     case 3:
                          cout << "Você escolheu o topping: Cenoura ralada" << endl;
                          valor_topping = 0.75;
                          total = total + 0.75;
                          break;
                     case 4:
                          cout << "Você escolheu o topping: Pepino" << endl;
                          valor_topping = 0.75;
                          total = total + 0.75;
                          break;
                     case 5:
                          cout << "Você não escolheu um dos toppings disponíveis" << endl;
                          valor_topping = 0.00;
                          total = total + 0.00;
                          break;
                     default:
                          cout << "Invalido" << endl;
                          break;
                          }
              cout << "O valor intermediário do seu poke é: R$" << total << endl;
                          
        
           case 3:
                cout << "As opções de crunches são:" << endl;
                cout << "1 - Cebola crocante (R$0.50)" << endl;
                cout << "2 - Castanha de caju (R$1.00)" << endl;
                cout << "3 - Batata palha (R$0.75)" << endl;
                cout << "4 - Doritos (R$1.50)" << endl;
                cout << "5 - Nenhum" << endl;
                cout << "Escolha o seu crunch" << endl;
                cin >> crunch;
                switch (crunch) {
                       case 1:
                            cout << "Você escolheu o crunch: Cebola crocante" << endl;
                            valor_crunch = 0.50;
                            total = total + 0.50;
                            break;
                       case 2:
                            cout << "Você escolheu o crunch: Castanha de caju" << endl;
                            valor_crunch = 1.00;
                            total = total + 1.00;
                            break;
                       case 3:
                            cout << "Você escolheu o crunch: Batata palha" << endl;
                            valor_crunch = 0.75;
                            total = total + 0.75;
                            break;
                       case 4:
                            cout << "Você escolheu o crunch: Doritos" << endl;
                            valor_crunch = 1.50;
                            total = total + 1.50;
                            break;
                       case 5:
                            cout << "Você não escolheu um dos crunches disponíveis" << endl;
                            valor_crunch = 0.00;
                            total = total + 0.00;
                            break;
                       default:
                            cout << "Inválido" << endl;
                            break;
                            }
                cout << "O valor intermediário do seu poke é: R$" << total << endl;
                            
           case 4:
                cout << "As opções de proteínas são:" << endl;
                cout << "1 - Salmão (R$3.00)" << endl;
                cout << "2 - Atum (R$2.50)" << endl;
                cout << "3 - Tofu (R$1.50)" << endl;
                cout << "4 - Frango grelhado (R$2.00)" << endl;
                cout << "5 - Nenhuma" << endl;
                cout << "Escolha a sua proteína" << endl;
                cin >> proteina;
                switch (proteina) {
                       case 1:
                            cout << "Você escolheu a proteína: Salmão" << endl;
                            valor_proteina = 3.00;
                            total = total + 3.00;
                            break;
                       case 2:
                            cout << "Você escolheu a proteína: Atum" << endl;
                            valor_proteina = 2.50;
                            total = total + 2.50;
                            break;
                       case 3:
                            cout << "Você escolheu a proteína: Tofu" << endl;
                            valor_proteina = 1.50;
                            total = total + 1.50;
                            break;
                       case 4:
                            cout << "Você escolheu a proteína: Frango grelhado" << endl;
                            valor_proteina = 2.00;
                            total = total + 2.00;
                            break;
                       case 5:
                            cout << "Você não escolheu uma das proteínas disponíveis" << endl;
                            valor_proteina = 0.00;
                            total = total + 0.00;
                            break;
                       default:
                            cout << "Inválido" << endl;
                            break;
                            }
                cout << "O valor intermediário do seu poke é: R$" << total << endl;
           
           case 5:
                cout << "As opções de nuts são:" << endl;
                cout << "1 - Amêndoas (R$1.25)" << endl;
                cout << "2 - Amendoim (R$1.00)" << endl;
                cout << "3 - Nozes (R$1.50)" << endl;
                cout << "4 - Castanha do Pará (R$2.00)" << endl;
                cout << "5 - Nenhum" << endl;
                cout << "Escolha o seu nut" << endl;
                cin >> nut;
                switch (nut) {
                       case 1:
                            cout << "Você escolheu o nut: Amêndoas" << endl;
                            valor_nut = 1.25;
                            total = total + 1.25;
                            break;
                       case 2:
                            cout << "Você escolheu o nut: Amendoim" << endl;
                            valor_nut = 1.00;
                            total = total + 1.00;
                            break;
                       case 3:
                            cout << "Você escolheu o nut: Nozes" << endl;
                            valor_nut = 1.50;
                            total = total + 1.50;
                            break;
                       case 4:
                            cout << "Você escolheu o nut: Castanha do Pará" << endl;
                            valor_nut = 2.00;
                            total = total + 2.00;
                            break;
                       case 5:
                            cout << "Você não escolheu um dos nuts disponíveis" << endl;
                            valor_nut = 0.00;
                            total = total + 0.00;
                            break;
                       default:
                            cout << "Invalido" << endl;
                            break;
                            }
                cout << "O valor intermediário do seu poke é: R$" << total << endl;
                
           case 6:
                cout << "As opções de molhos são:" << endl;
                cout << "1 - Molho de gergelim (R$0.75)" << endl;
                cout << "2 - Molho teriyaki (R$0.50)" << endl;
                cout << "3 - Molho picante (R$1.00)" << endl;
                cout << "4 - Molho de maracujá (R$1.25)" << endl;
                cout << "5 - Nenhum" << endl;
                cout << "Escolha o seu molho" << endl;
                cin >> molho;
                switch (molho) {
                       case 1:
                            cout << "Você escolheu o molho: Molho de gergelim" << endl;
                            valor_molho = 0.75;
                            total = total + 0.75;
                            break;
                       case 2:
                            cout << "Você escolheu o molho: Molho teriyaki" << endl;
                            valor_molho = 0.50;
                            total = total + 0.50;
                            break;
                       case 3:
                            cout << "Você escolheu o molho: Molho picante" << endl;
                            valor_molho = 1.00;
                            total = total + 1.00;
                            break;
                       case 4:
                            cout << "Você escolheu o molho: Molho de maracujá" << endl;
                            valor_molho = 1.25;
                            total = total + 1.25;
                            break;
                       case 5:
                            cout << "Você não escolheu um dos molhos disponíveis" << endl;
                            valor_molho = 0.00;
                            total = total + 0.00;
                            break;
                       default:
                            cout << "Inválido" << endl;
                            break;
                cout << "O valor intermediário do seu poke é: R$" << total << endl;
                
           case 7:
                break;
                }
                
    cout << "Finalizando o seu pedido..." << endl;
    cout << "Você escolheu um poke de tamanho " << tamanho << "(R$" << valor_tamanho << ")" << " com as seguintes opções:
    cout << "BASES - (R$" << valor_base << ")" << endl;
    cout << base << endl;
    cout << "TOPPINGS - (R$" << valor_topping << ")" << endl;
    cout << topping << endl;
    cout << "CRUNCHES - (R$" << valor_crunch << ")" << endl;
    cout << crunch << endl;
    cout << "PROTEÍNAS - (R$" << valor_proteina << ")" << endl;
    cout << proteina << endl;
    cout << "NUT - (R$" << valor_nut << ")" << endl;
    cout << nut << endl;
    cout << "MOLHO - (R$" << valor_molho << ")" << endl;
    cout << molho << endl;
    cout << "O valor total do seu poke é: R$" << total << endl;
    
    return 0; 
           }
    }
}
