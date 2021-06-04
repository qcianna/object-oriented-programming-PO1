#pragma one
#include <iostream>
#include <math.h>

// klasa Wierzchołek
class Wierzcholek
{
    // deklaracja przyjaźni z funkcją
    friend std::ostream& operator <<(std::ostream& stream, const Wierzcholek& w);
    public:
        // konstruktor bezparametrowy
        Wierzcholek();
        // konstruktor dwuparametrowy
        // x, y - współrzędne wierzchołka
        Wierzcholek(int x, int y);
        // funkcja zwracająca odległość między wierzchołkami
        double distance(const Wierzcholek& w) const;
    
    // prywatne atrybuty klasy
    // _x, _y - współrzędne wierzchołka
    private:
        int _x;
        int _y;
};

// funkcja wypisująca współrzędne wierzchołka
std::ostream& operator <<(std::ostream& stream, const Wierzcholek& w);