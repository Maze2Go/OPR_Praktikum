
#include "Klavier.h"

Klavier::Klavier(void) : Musikinstrument("Klavier")
{
    std::cout << "Konstruktor: Klavier()" << std::endl;
}

Klavier::~Klavier(void)
{
    std::cout << "Destruktor: ~Klavier()" << std::endl;
}

void Klavier::spielen(void) const
{
    std::cout << "Klavier klimpert." << std::endl;
}
