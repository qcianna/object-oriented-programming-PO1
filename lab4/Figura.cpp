#include "Figura.h"

Figura::Figura()
{
    _name = "pusta nazwa";
}

Figura::Figura(std::string name)
{
    std::cout << "Jestem nową figurą " << name << std::endl;
    _name = name;
}

Figura& Figura::operator +=(const Wierzcholek& w)
{
    _lista_wierzcholkow.push_back(w);
    return *this;
}

Figura& Figura::dodajW(const Wierzcholek& w)
{
    return *this += w;
}

std::string Figura::nazwa() const
{
    return _name;
}

bool Figura::operator ==(const Figura& f) const
{
    if(_lista_wierzcholkow.size() == f._lista_wierzcholkow.size())
    {
        return true;
    }
    return false;
}

std::ostream& operator<<(std::ostream& stream, const Figura& f)
{
	stream << "Figura " << f.nazwa() << ":\n";
	for(int i=0; i<f._lista_wierzcholkow.size(); i++)
	{
		stream << f._lista_wierzcholkow[i];
	}
	return stream << "\n";
}