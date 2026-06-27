#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> historicoPalavras;
    int opcao;
    string palavra;

    do {
        cout << "\n1. Digitar Palavra\n2. Desfazer Ultima Palavra (Pop)\n3. Mostrar Texto Atual\n4. Sair\nOpcao: ";
        cin >> opcao;

        if (opcao == 1) {
            cout << "Digite a palavra: ";
            cin >> palavra;
            historicoPalavras.push(palavra);
        } else if (opcao == 2) {
            if (!historicoPalavras.empty()) {
                cout << "Palavra '" << historicoPalavras.top() << "' removida." << endl;
                historicoPalavras.pop();
            } else {
                cout << "Nada para desfazer!" << endl;
            }
        } else if (opcao == 3) {
            if (historicoPalavras.empty()) {
                cout << "[Texto vazio]";
            } else {
                stack<string> auxiliar = historicoPalavras;
                stack<string> ordemCorreta;
                
                while (!auxiliar.empty()) {
                    ordemCorreta.push(auxiliar.top());
                    auxiliar.pop();
                }
                
                cout << "Texto: ";
                while (!ordemCorreta.empty()) {
                    cout << ordemCorreta.top() << " ";
                    ordemCorreta.pop();
                }
            }
            cout << endl;
        }
    } while (opcao != 4);

    return 0;
}
