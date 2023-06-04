#include "Sirene.h"
#include <iostream>

int Sirene::anzahl_sirene = 0;


Sirene::Sirene() : AlarmierbarImpl("Sirene Nr. " + std::to_string(anzahl_sirene + 1))
{
    anzahl_sirene++;
}

void Sirene::alarmieren()
{
    _istalamiert = true;
    std::cout << liefereName() << " geht an (heul)" << std::endl;

}

std::string Sirene::liefereName() const
{
    return name;
}

