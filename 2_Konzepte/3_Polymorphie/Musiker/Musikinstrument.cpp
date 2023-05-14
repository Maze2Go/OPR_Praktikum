#include "Musikinstrument.h"

#include <iostream>

Musikinstrument::Musikinstrument(void)
{
    name = "irgendein Instrument";
}

Musikinstrument::Musikinstrument(const std::string &name)
{
    std::cout << "Konstruktor: Musikinstrument(string name): " << name << std::endl;

    this->name = name;
}

Musikinstrument::~Musikinstrument(void)
{
    std::cout << "Destruktor: ~Musikinstrument(): " << name << std::endl;
}

void Musikinstrument::spielen(void) const
{
    std::cout << "Ungueltige Operation" << std::endl;
}

std::string Musikinstrument::liefereName(void) const
{
    return name;
}
