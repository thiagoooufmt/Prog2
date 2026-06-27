#ifndef GATO_H
#define GATO_H

#include <string>

class Gato {
private:
    std::string nome;
    int idade;
    double peso;

public:
    Gato(std::string n, int i, double p);
    void setPeso(double p);
    std::string getNome();
    int getIdade();
    double getPeso();
};

#endif
