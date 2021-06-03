#pragma once
#include "Funkcje.h"
#include <functional>
#include <vector>

class ZlozenieFunkcji
{
    public:
        void insert(std::function<double(double x)> func);
        double wynik(double x);
        double operator[] (int i);

    private:
        std::vector<std::function<double(double x)>> _fun;
        std::vector<double> _results;
};