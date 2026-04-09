#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;

    cout << "Digite o nome completo: ";
    getline(cin, nome);

    cout << "Digite a idade: ";
    cin >> idade;

    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;

    return 0;
}