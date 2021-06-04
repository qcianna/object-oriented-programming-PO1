#include "KontenerFigur.h"

void KontenerFigur::operator +=(Figura* f)
{
    _lista_figur.push_back(f);
}

std::ostream& operator <<(std::ostream& stream, const KontenerFigur& k)
{
    for(int i=0; i<k._lista_figur.size(); i++)
    {
        stream << *k._lista_figur[i];
    }
    return stream << "\n";
}