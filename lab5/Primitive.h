#pragma once
#include <iostream>

//klasa podstawowa Primitive po ktorej dziedzicza klasy Product, Ratio oraz Sum
class Primitive
{
  public:
    //konstruktor bezparametrowy ustawia _l na 0
    Primitive();
    //konstruktor jednoparametrowy ustawia _l na przekazana liczbe l typu double
    //l - ustawiana liczba
    Primitive(double l);

    //funkcja drukujaca cale wyrazenie wykorzystujaca funkcje print_formula oraz get_l
    //(formula) = wynik
    void PrintWithValue() const;
    //funkcja ustawia wartosc _l na l
    //l - ustawiana liczba
    void Set(double l);
    //wirtualna funkcja zwraca wartosc wyrazenia
    virtual double get_l() const;
    //wirtualna funkcja drukuje formule
    virtual void print_formula() const;

  protected:
    //_l - liczba typu double dostepna dla klas, ktore dziedzicza po klasie Primitive
    double _l;
};
