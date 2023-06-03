#include "Sirene.h"
#include <iostream>

int Sirene::anzahl_sirene = 0;


Sirene::Sirene() : AlarmierbarImpl("Sirene Nr. " + (anzahl_sirene + 1))
{
    anzahl_sirene++;
}


Sirene::~Sirene()
{
    std::cout << liefereName() << "abmelden" << std::endl;
}


void Sirene::alarmieren()
{
    std::cout << liefereName() << "geht an (heul)" << std::endl;

}

std::string Sirene::liefereName() const
{
    return name;
}

