#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> minhaLista;
    int opcao, valor;

    do {
        cout << "\n1. Inserir no Inicio\n2. Inserir no Final\n3. Remover por Valor\n4. Exibir Tamanho e Elementos\n5. Sair\nOpcao: ";
        cin >> opcao;

        if (opcao == 1) {
            cout << "Digite o valor: ";
            cin >> valor;
            minhaLista.push_front(valor);
        } else if (opcao == 2) {
            cout << "Digite o valor: ";
            cin >> valor;
            minhaLista.push_back(valor);
        } else if (opcao == 3) {
            cout << "Digite o valor a remover: ";
            cin >> valor;
            minhaLista.remove(valor);
        } else if (opcao == 4) {
            cout << "Tamanho total da lista: " << minhaLista.size() << endl;
            cout << "Elementos: ";
            for (int v : minhaLista) {
                cout << v << " ";
            }
            cout << endl;
        }
    } while (opcao != 5);

    return 0;
}
