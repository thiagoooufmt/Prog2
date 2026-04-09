#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;
    float n1, n2, n3, media;

    cout << "Nome: ";
    getline(cin, nome);

    cout << "Idade: ";
    cin >> idade;

    cout << "Nota 1: ";
    cin >> n1;

    cout << "Nota 2: ";
    cin >> n2;

    cout << "Nota 3: ";
    cin >> n3;

    media = (n1 + n2 + n3) / 3;

    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Media: " << fixed << setprecision(2) << media << endl;

    return 0;
}