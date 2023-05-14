#pragma once

#include "Verkehrsmittel.h"

#include <sstream>
#include <string>


class Luftfahrzeug : public Verkehrsmittel
{
protected:
    int _maxFlughoehe;

public:
    Luftfahrzeug(std::string const & _name = "unbekannt", int _maxFughoehe = -1);
    Luftfahrzeug(Luftfahrzeug const& luftfahrzeug1);
    int maxFlughoehe(void) const;
    std::string text() const;

};


