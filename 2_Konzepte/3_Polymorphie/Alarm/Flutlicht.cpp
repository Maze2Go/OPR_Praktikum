#include <iostream>

#include "Flutlicht.h"

int Flutlicht::anzahl_flutlicht = 0;

Flutlicht::Flutlicht(int helligkeit_lumen) : AlarmierbarImpl("Flutlicht Nr. " + (anzahl_flutlicht + 1))
{
    this->helligkeit_lumen = helligkeit_lumen;
    anzahl_flutlicht++;
}

Flutlicht::~Flutlicht()
{
    std::cout << liefereName() << "abmelden" << std::endl;
}

void Flutlicht::alarmieren()
{
    std::cout << liefereName() << "erstrahlt mit" << helligkeit_lumen << "Lumen" << std::endl;
}

std::string Flutlicht::liefereName() const
{
    return name;
}
