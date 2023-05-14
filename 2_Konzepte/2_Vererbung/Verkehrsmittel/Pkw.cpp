
#include "Pkw.h"
#include <iostream>

Pkw::Pkw(std::string const &name, int _anzahlTueren)
{
    this->_name = name;
    this->_anzahlTueren = _anzahlTueren;
    this->_anzahl_raeder = 4;
}

Pkw::Pkw(Pkw const &pkw1) : Radfahrzeug(pkw1)
{
    std::cout << "Kopiere Pkw" << std::endl;
    this->_anzahlTueren = pkw1._anzahlTueren;
}

int Pkw::anzahlTueren(void) const
{
    return _anzahlTueren;
}

std::string Pkw::text(void) const
{
    std::stringstream sstr1;
    std::string str1;

    sstr1 << Radfahrzeug::text() << ", Tueren=" << anzahlTueren() << std::flush;
    str1 = sstr1.str();
    return str1;
}
