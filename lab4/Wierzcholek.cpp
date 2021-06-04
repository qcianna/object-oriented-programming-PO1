#include "Wierzcholek.h"

Wierzcholek::Wierzcholek(): _x(0), _y(0)
{}

Wierzcholek::Wierzcholek(int x, int y): _x(x), _y(y)
{}

double Wierzcholek::distance(const Wierzcholek& w) const
{
    return sqrt((_x - w._x) * (_x - w._x) + (_y - w._y) * (_y - w._y));
}

std::ostream& operator <<(std::ostream& stream, const Wierzcholek& w)
{
    return stream << " (" << w._x << "," << w._y << ")";
}

