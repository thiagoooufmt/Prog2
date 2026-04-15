#include <iostream>

using namespace std;

int main() {
    int idade, autorizacao, nivel;

    cout << "Idade: ";
    cin >> idade;
    cout << "Autorizacao (0/1): ";
    cin >> autorizacao;
    cout << "Nivel (1 a 3): ";
    cin >> nivel;

    if (idade < 16) {
        cout << "Acesso negado\n";
    } else if (idade >= 16 && idade <= 17) {
        if (autorizacao == 1) {
            cout << "Acesso liberado com autorizacao\n";
        } else {
            cout << "Acesso negado: precisa de autorizacao\n";
        }
    } else if (idade >= 18) {
        switch (nivel) {
            case 1:
                cout << "Acesso basico\n";
                break;
            case 2:
                cout << "Acesso intermediario\n";
                break;
            case 3:
                cout << "Acesso total\n";
                break;
            default:
                cout << "Erro: Nivel invalido\n";
                break;
        }
    }

    return 0;
}