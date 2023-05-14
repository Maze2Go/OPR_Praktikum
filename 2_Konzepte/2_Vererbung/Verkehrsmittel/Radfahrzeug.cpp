#include "Radfahrzeug.h"
#include <sstream>
#include <iostream>

Radfahrzeug::Radfahrzeug(std::string name, int anzahl_raeder)
{

    this->_name = name;
    this->_anzahl_raeder = anzahl_raeder;
}

Radfahrzeug::Radfahrzeug(Radfahrzeug const &radfahrz) : Verkehrsmittel(radfahrz)
{
    std::cout << "Kopiere Radfahrzeug" << std::endl;
    this->_anzahl_raeder = radfahrz.anzahlRaeder();
}

int Radfahrzeug::anzahlRaeder(void) const
{
    return _anzahl_raeder;
}

std::string Radfahrzeug::text(void) const
{

    std::stringstream sstr1;
    std::string str1;

    sstr1 << Verkehrsmittel::text() << " Raeder" << anzahlRaeder() << std::flush;
    str1 = sstr1.str();
    return str1;
}
