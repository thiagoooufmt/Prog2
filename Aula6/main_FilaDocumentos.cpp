#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> filaDocumentos;
    int opcao;
    string doc;

    do {
        cout << "\n1. Adicionar Documento a Fila\n2. Processar Proximo Documento\n3. Ver Proximo Documento\n4. Sair\nOpcao: ";
        cin >> opcao;

        if (opcao == 1) {
            cout << "Nome do documento: ";
            cin >> doc;
            filaDocumentos.push(doc);
            cout << "Documento '" << doc << "' adicionado." << endl;
        } else if (opcao == 2) {
            if (!filaDocumentos.empty()) {
                cout << "Processando: " << filaDocumentos.front() << endl;
                filaDocumentos.pop();
            } else {
                cout << "Fila vazia! Nenhum documento para processar." << endl;
            }
        } else if (opcao == 3) {
            if (!filaDocumentos.empty()) {
                cout << "Proximo documento na fila: " << filaDocumentos.front() << endl;
            } else {
                cout << "Fila vazia!" << endl;
            }
        }
    } while (opcao != 4);

    return 0;
}
