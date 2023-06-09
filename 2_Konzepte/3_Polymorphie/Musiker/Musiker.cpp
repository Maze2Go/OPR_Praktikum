#include "Musiker.h"

Musiker::Musiker(void)
{
    this->name = "Unbekannt";
}

Musiker::Musiker(std::string name)
{
    std::cout << "Konstruktor: Musiker(string name): " << name << std::endl;
    this->name = name;
}

Musiker::~Musiker(void)
{
    std::cout << "Destruktor: ~Musiker(): " << name << std::endl;
    if (instrument != NULL)
        delete instrument;
}

void Musiker::weiseInstrumentZu(Musikinstrument const *musikinstr)
{
    if (instrument == NULL)
    {
        instrument = musikinstr;
        std::cout << name << " erhaelt " << musikinstr->liefereName() << std::endl;
    }
    else if (instrument != NULL)
    {
        delete instrument;
        instrument = musikinstr;
        std::cout << name << " erhaelt " << musikinstr->liefereName() << std::endl;
    }
}
void Musiker::spielen() const
{
    if (instrument != NULL)
    {
        std::cout << name << " spielt " << instrument->liefereName() << ":" << std::endl;
        instrument->spielen();
    }
}

std::string Musiker::liefereName() const
{
    return name;
}
