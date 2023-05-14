
#include "Trompete.h"

Trompete::Trompete(void): Musikinstrument("Trompete")
{
    std::cout << "Konstruktor: Trompete()" << std::endl;
}

Trompete::~Trompete(void)
{
    std::cout << "Destruktor: ~Trompete()" << std::endl;
}

void Trompete::spielen(void) const
{
    std::cout << "Trompete troetet." << std::endl;
}
