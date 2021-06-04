#pragma once
#include <iostream>
#include "Figura.h"

class KontenerFigur
{
    friend std::ostream& operator <<(std::ostream& stream, const KontenerFigur& k);
    public:
        void operator +=(Figura* f);
    
    private:
        std::vector<Figura*> _lista_figur;
};

std::ostream& operator <<(std::ostream& stream, const KontenerFigur& k);