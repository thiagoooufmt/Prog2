#include <iostream>
using namespace std;

int soma(int a, int b) {
    return a + b;
}

int main() {
    int v1, v2;

    cout << "Digite o primeiro valor: ";
    cin >> v1;
    cout << "Digite o segundo valor: ";
    cin >> v2;

    cout << "A soma dos valores e: " << soma(v1, v2) << endl;

    return 0;
}