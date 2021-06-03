#pragma once
#include <iostream>
#include <math.h>

class Sinus
{
    public:
        // Sinus();
        Sinus(double a, double b);
        double operator()(double x) const;

    private:
        double _a;
        double _b;
};

class PierwiastekKwadratowy
{
    public:
        PierwiastekKwadratowy();
        double operator()(double x) const;

    private:
};

class Liniowa
{
    public:
        // Liniowa();
        Liniowa(double a, double b);
        double operator()(double x) const;

    private:
        double _a;
        double _b;
};

