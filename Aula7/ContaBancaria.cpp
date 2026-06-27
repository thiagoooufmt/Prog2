#include "ContaBancaria.h"

ContaBancaria::ContaBancaria(std::string numero) {
    numeroConta = numero;
    saldo = 0.0;
}

double ContaBancaria::getSaldo() {
    return saldo;
}

void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        saldo += valor;
    }
}

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && valor <= saldo) {
        saldo -= valor;
    }
}
