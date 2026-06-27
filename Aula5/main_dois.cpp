#include <iostream>

using namespace std;

int main() {
    const int TAM_MAX = 100;
    double a[TAM_MAX];
    int n;

    cout << "Quantos valores deseja digitar (pode no maximo: " << TAM_MAX << "): ";
    cin >> n;

    if (n <= 0 || n > TAM_MAX) {
        cout << "Quantidade invalida!" << endl;
        return 1;
    }

    cout << "\nDigite os " << n << " valores:" << endl;
    for (int j = 0; j < n; j++) {
        cout << "Valor [" << j << "]: ";
        cin >> *(a + j); 
    }

    double soma = 0.0;
    double *aPtr = a;

    for (int j = 0; j < n; j++) {
        soma += *(aPtr + j); 
    }

    double media = soma / n;

    cout << "Soma de todos os valores: " << soma << endl;
    cout << "Media dos valores: " << media << endl;

    return 0;
}
