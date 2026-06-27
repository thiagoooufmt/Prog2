#ifndef TERMOMETRO_H
#define TERMOMETRO_H

class Termometro {
private:
    double temperaturaCelsius;

public:
    Termometro();
    void setTemperaturaCelsius(double t);
    double getTemperaturaCelsius();
    double getTemperaturaFahrenheit();
};

#endif
