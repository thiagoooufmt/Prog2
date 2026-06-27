#include "Gato.h"

Gato::Gato(std::string n, int i, double p) {
    nome = n;
    idade = i;
    if (p > 0) {
        peso = p;
    } else {
        peso = 1.0;
    }
}

void Gato::setPeso(double p) {
    if (p > 0) {
        peso = p;
    }
}

std::string Gato::getNome() { return nome; }
int Gato::getIdade() { return idade; }
double Gato::getPeso() { return peso; }
