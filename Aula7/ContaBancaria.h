#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include <string>

class ContaBancaria {
private:
    std::string numeroConta;
    double saldo;

public:
    ContaBancaria(std::string numero);
    double getSaldo();
    void depositar(double valor);
    void sacar(double valor);
};

#endif
