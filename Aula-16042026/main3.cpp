#include <iostream>
using namespace std;

inline double converterParaReal(double dolar, double taxa) {
    return dolar * taxa;
}

int main() {
    double quantiaDolar, taxaDolar;

    cout << "Digite a quantia em dolares: ";
    cin >> quantiaDolar;
    cout << "Digite a cotacao do dolar hoje: ";
    cin >> taxaDolar;

    cout << "Quantia convertida em reais: R$ " << converterParaReal(quantiaDolar, taxaDolar) << endl;

    return 0;
}