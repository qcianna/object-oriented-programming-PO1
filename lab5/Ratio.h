#pragma once
#include <iostream>
#include "Primitive.h"

//klasa Ratio dziedziczy po klasie Primitive
class Ratio: public Primitive
{
  public:
    //konstruktor dwuparametrowy ustawiajacy _a oraz _b
    //a, b - referencja do obiektu typu Primitive
    Ratio(Primitive& a, Primitive& b);

    //nadpisanie funkcji get_l zwraca wynik dzielenia wyrazen
    double get_l() const override;
    //nadpisanie funkcji print_formula (wyrazenie / wyrazenie)
    void print_formula() const override;

  //prywatne atrybuty
  //_a, _b - referencje na obiekty typu Primitive
  private:
    Primitive& _a;
    Primitive& _b;
};