#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;
    float altura;

    cout << "Nome completo: ";
    getline(cin, nome);

    cout << "Idade: ";
    cin >> idade;

    cout << "Altura: ";
    cin >> altura;

    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << endl;

    return 0;
}