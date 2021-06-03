#pragma once
#include <iostream>
#include <math.h>

//klasa sinus
class Sinus
{
    public:
        //konstruktor dwuargumentowy
        //a, b - wspolczynniki
        Sinus(double a, double b);
        //przeladowanie operatowa ()
        //x - punkt
        //zreaca wartosc funkcji w punkcie
        double operator()(double x) const;

    //prywatne elementy - wspolczynniki a i b
    private:
        double _a;
        double _b;
};

//klasa funkcji pierwiastka kwadratowego
class PierwiastekKwadratowy
{
    public:
        //przeladowanie operatowa ()
        //x - punkt
        //zreaca wartosc funkcji w punkcie
        double operator()(double x) const;
};

//klasa funkcji liniowej
class Liniowa
{
    public:
        //konstruktor dwuargumentowy
        //a, b - wspolczynniki
        Liniowa(double a, double b);
        //przeladowanie operatowa ()
        //x - punkt
        //zreaca wartosc funkcji w punkcie
        double operator()(double x) const;

    //prywatne elementy - wspolczynniki a i b
    private:
        double _a;
        double _b;
};

