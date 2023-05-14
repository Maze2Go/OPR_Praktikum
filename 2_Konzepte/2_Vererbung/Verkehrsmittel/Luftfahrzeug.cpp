#include "Luftfahrzeug.h"

#include <iostream>

// Konstruktoren
Luftfahrzeug::Luftfahrzeug(std::string const &_name, int _maxFlughoehe)
{
    this->_name = _name;
    this->_maxFlughoehe = _maxFlughoehe;
}

Luftfahrzeug::Luftfahrzeug(Luftfahrzeug const &luftfahrzeug1) : Verkehrsmittel(luftfahrzeug1)
{
    std::cout << "Kopiere Luftfahrzeug" << std::endl;
    this->_position = luftfahrzeug1.position();
    this->_maxFlughoehe = luftfahrzeug1.maxFlughoehe();
}

// Elementfunktionen
int Luftfahrzeug::maxFlughoehe(void) const
{
    return _maxFlughoehe;
}

std::string Luftfahrzeug::text() const
{
    std::stringstream sstr1;
    std::string str1;

    sstr1 << Verkehrsmittel::text() << ", maxFlughoehe=" << maxFlughoehe() << "m" << std::flush;
    str1 = sstr1.str();
    return str1;
}
