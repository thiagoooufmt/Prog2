#include <iostream>
#include "ContaBancaria.h"

using namespace std;

int main() {
    ContaBancaria conta("12345-6");
    
    conta.depositar(500.0);
    cout << "Saldo apos deposito: " << conta.getSaldo() << endl;

    conta.sacar(200.0);
    cout << "Saldo apos saque: " << conta.getSaldo() << endl;

    conta.sacar(400.0);
    cout << "Saldo apos tentativa de saque invalido: " << conta.getSaldo() << endl;

    return 0;
}
