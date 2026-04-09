#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome;
    double salario;

    cout << "Nome: ";
    getline(cin, nome);

    cout << "Salario: ";
    cin >> salario;

    cout << "Nome: " << nome << endl;
    cout << "Salario: R$ " << fixed << setprecision(2) << salario << endl;

    return 0;
}