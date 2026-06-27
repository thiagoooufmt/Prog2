#include <iostream>
#include "Termometro.h"

using namespace std;

int main() {
    Termometro t;
    cout << "Padrao Celsius: " << t.getTemperaturaCelsius() << endl;
    cout << "Padrao Fahrenheit: " << t.getTemperaturaFahrenheit() << endl;

    t.setTemperaturaCelsius(-300.0);
    cout << "Apos tentar burlar o zero absoluto: " << t.getTemperaturaCelsius() << endl;

    t.setTemperaturaCelsius(0.0);
    cout << "0 Celsius em Fahrenheit: " << t.getTemperaturaFahrenheit() << endl;

    return 0;
}
