#pragma once
#include "Vektor.h"

class Verkehrsmittel
{
protected:
    Vektor _position;
    std::string _name;

public:
    //Konstruktoren
    Verkehrsmittel(std::string const &name = "unbekannt");
    Verkehrsmittel(Verkehrsmittel const &verkm);
    
    //Destruktor
    ~Verkehrsmittel(void);

    //Elementfunktionen
    std::string name() const;
    const Vektor& position() const;
    void bewegeZu(Vektor const &vektor);
    std::string text() const;
};
