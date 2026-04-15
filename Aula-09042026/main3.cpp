#include <iostream>

using namespace std;

int main() {
    int numero;
    int soma = 0;

    cout << "Digite um inteiro positivo: ";
    cin >> numero;

    if (numero > 0) {
        for (int i = 1; i < numero; i++) {
            if (numero % i == 0) {
                soma += i;
            }
            if (soma > numero) {
                break;
            }
        }

        if (soma == numero) {
            cout << "Numero perfeito\n";
        } else {
            cout << "Nao e perfeito\n";
        }
    }

    return 0;
}