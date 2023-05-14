#pragma once

#include "Verkehrsmittel.h"

class Radfahrzeug : public Verkehrsmittel
{
    protected:
    int _anzahl_raeder;

    public:
    Radfahrzeug(std::string name = "unbekannt" , int anzahl_raeder = -1);
    Radfahrzeug(Radfahrzeug const & radfahrz);
    int anzahlRaeder(void) const;
    std::string text(void) const;


};

