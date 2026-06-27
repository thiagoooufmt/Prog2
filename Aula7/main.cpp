#include <iostream>
#include "Gato.h"

using namespace std;

int main() {
    Gato meuGato("Tom", 3, 4.5);
    cout << "Gato: " << meuGato.getNome() << " | Peso: " << meuGato.getPeso() << endl;

    meuGato.setPeso(-2.0);
    cout << "Peso apos tentar invalidar: " << meuGato.getPeso() << endl;

    meuGato.setPeso(5.2);
    cout << "Peso apos alteracao valida: " << meuGato.getPeso() << endl;

    return 0;
}
