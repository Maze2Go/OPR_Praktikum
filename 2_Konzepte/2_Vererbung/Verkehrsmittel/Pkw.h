#pragma once

#include "Radfahrzeug.h"

#include <string>
#include <sstream>

class Pkw : public Radfahrzeug
{
private:
    int _anzahlTueren;

public:
    Pkw(std::string const &name, int _anzahlTueren);
    Pkw(Pkw const &pkw1);
    //~Pkw(void);
    int anzahlTueren(void) const;
    std::string text(void) const;
};
