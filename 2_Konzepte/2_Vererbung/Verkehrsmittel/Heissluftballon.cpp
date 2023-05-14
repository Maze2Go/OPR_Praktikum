
#include "Heissluftballon.h"

#include <iostream>

Heissluftballon::Heissluftballon(std::string const &_name, int _maxFlughoehe, int _Volumen)
{
    this->_name = _name;
    this->_ballonVolumen = _Volumen;
    this->_maxFlughoehe = _maxFlughoehe;
}

Heissluftballon::Heissluftballon(const Heissluftballon &heissluftb) : Luftfahrzeug(heissluftb)
{
    std::cout << "Kopiere Heissluftballon" << std::endl;
    this->_ballonVolumen = heissluftb._ballonVolumen;
}

int Heissluftballon::ballonVolumen() const
{
    return _ballonVolumen;
}

std::string Heissluftballon::text() const
{
    std::stringstream sstr1;
    std::string str1;

    sstr1 << Luftfahrzeug::text() << ", ballonVolumen=" << ballonVolumen() << "m^3" << std::flush;
    str1 = sstr1.str();
    return str1;
}
