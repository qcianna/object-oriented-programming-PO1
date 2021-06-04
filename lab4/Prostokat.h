#pragma once
#include <iostream>
#include "Figura.h"

// klasa prostokąt dziedziczy po klasie Figura
class Prostokat: public Figura
{
    public:
        // konstruktor bezparametrowy
        Prostokat();
        // konstruktor jednoparametrowy
        // name - nazwa prostokąta
        Prostokat(std::string name);
        // funkcja zwraca pole prostokąta
        double pole() const;
};