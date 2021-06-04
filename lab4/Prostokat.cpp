#include "Prostokat.h"

Prostokat::Prostokat(): Figura()
{}

Prostokat::Prostokat(std::string name) : Figura(name)
{
    std::cout << "Tak naprawdę jestem prostokątem. " << std::endl;
}

double Prostokat::pole() const
{
    return _lista_wierzcholkow[0].distance(_lista_wierzcholkow[1]) * _lista_wierzcholkow[0].distance(_lista_wierzcholkow[3]);
}