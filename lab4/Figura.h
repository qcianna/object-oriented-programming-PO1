#pragma once
#include <iostream>
#include "Wierzcholek.h"
#include <vector>

//klasa Figura
class Figura
{
    // deklaracja przyjaźni z funkcją
    friend std::ostream& operator<<(std::ostream& stream, const Figura& f);
    public:
        // konstruktor bezparametrowy
        Figura();
        // konstruktor jednoparametrowy
        // name - nazwa figury
        Figura(std::string name);
        // przeładowanie operatora +=
        // funkcja dodaje wierzchołek do listy wierzchołków figury
        Figura& operator +=(const Wierzcholek& w);
        // funkcja działa jak +=
        Figura& dodajW(const Wierzcholek& w);
        // funkcja zwraca nazwę figury
        std::string nazwa() const;
        // funkcja sprawdza czy jest to ta sama figura co figura f
        bool operator ==(const Figura& f) const;
    
    // parametry chronione klasy
    protected:
        std::vector<Wierzcholek> _lista_wierzcholkow;
        std::string _name;
};

// funkcja wypisujaca informacje o figurze
std::ostream& operator<<(std::ostream& stream, const Figura& f);