#include "Termometro.h"

Termometro::Termometro() {
    temperaturaCelsius = 25.0;
}

void Termometro::setTemperaturaCelsius(double t) {
    if (t >= -273.15) {
        temperaturaCelsius = t;
    }
}

double Termometro::getTemperaturaCelsius() {
    return temperaturaCelsius;
}

double Termometro::getTemperaturaFahrenheit() {
    return (temperaturaCelsius * 9.0 / 5.0) + 32.0;
}
