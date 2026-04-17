#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int ANO = 2;
    const int TRIMESTRE = 4;
    double despesas[ANO][TRIMESTRE];
    double totalGeral = 0;

    for (int i = 0; i < ANO; i++) {
        cout << "\nAno " << i + 1 << "\n" << endl;
        for (int j = 0; j < TRIMESTRE; j++) {
            cout << "Digite a despesa do " << j + 1 << "o Trimestre: ";
            cin >> despesas[i][j];
            totalGeral += despesas[i][j];
        }
    }

    // Exibição da Tabela
    cout << "\nTABELA DE DESPESAS" << endl;
    cout << "Ano\tT1\tT2\tT3\tT4" << endl;
    
    for (int i = 0; i < ANO; i++) {
        cout << i + 1 << "\t";
        for (int j = 0; j < TRIMESTRE; j++) {
            cout << fixed << setprecision(2) << despesas[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nValor total de despesas nos dois anos: R$ " << totalGeral << endl;

    return 0;
}