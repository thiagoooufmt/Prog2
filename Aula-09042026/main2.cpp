#include <iostream>

using namespace std;

int main() {
    double saldo = 1000.0;
    double valor;
    int opcao;

    do {
        cout << "\n1. Ver saldo\n2. Depositar\n3. Sacar\n4. Sair\nEscolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Saldo: " << saldo << "\n";
                break;
            case 2:
                cout << "Valor do deposito: ";
                cin >> valor;
                if (valor > 0) {
                    saldo += valor;
                } else {
                    cout << "Valor invalido.\n";
                }
                break;
            case 3:
                cout << "Valor do saque: ";
                cin >> valor;
                if (valor > 0 && valor <= saldo) {
                    saldo -= valor;
                } else {
                    cout << "Saque invalido.\n";
                }
                break;
            case 4:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opcao invalida.\n";
                break;
        }
    } while (opcao != 4);

    return 0;
}