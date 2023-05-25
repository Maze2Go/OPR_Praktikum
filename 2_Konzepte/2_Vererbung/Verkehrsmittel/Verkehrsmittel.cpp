#include "Verkehrsmittel.h"

#include <string>
#include <sstream>
#include <iostream>

// Konstruktoren
Verkehrsmittel::Verkehrsmittel(std::string const &name)
{
    this->_name = name;
}

Verkehrsmittel::Verkehrsmittel(Verkehrsmittel const &verkm)
{
    std::cout << "Kopiere Verkehrsmittel (" << verkm.name()<< ")" << std::endl;
    this->_name = "Kopie von " + verkm.name();
    _position = verkm.position();
}

// Destruktor
Verkehrsmittel::~Verkehrsmittel(void)
{

    std::cout << name() << " geloescht" << std::endl;
}

// Elementfunktionen
std::string Verkehrsmittel::name() const
{
    return _name;
}

const Vektor &Verkehrsmittel::position() const
{
    return _position;
}

void Verkehrsmittel::bewegeZu(Vektor const &vektor)
{
    this->_position = vektor;
}

std::string Verkehrsmittel::text() const
{

    std::stringstream sstr1;
    std::string str1;

    sstr1 << name() << ": Position=" << _position.text() << std::flush;
    str1 = sstr1.str();
    return str1;
}
