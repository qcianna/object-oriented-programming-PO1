#pragma once
#include "Funkcje.h"
#include <functional>
#include <vector>

//klasa zlozenia funkcji klasy funkcje
class ZlozenieFunkcji
{
    public:
        //funkcja dodajaca funkcje do klasy zlozenia funkcji
        void insert(std::function<double(double x)> func);
        //funkcjia zwracajaca wynik zlozenia typu double
        //x - argument
        double wynik(double x);
        //przeladowanie operatora [] pozwalajaca na dostep do posrednich wynikow zlozenia
        double operator[] (int i);

    //prywatne atrybuty klasy
    //_fun - wektor przechowywanych funkcji
    //_results - wektor wynikow
    private:
        std::vector<std::function<double(double x)>> _fun;
        std::vector<double> _results;
};