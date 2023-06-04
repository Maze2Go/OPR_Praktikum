#include "Bewegungsdetektor.h"
#include <iostream>

 
BewegungsDetektor::BewegungsDetektor(std::string name) : DetektorImpl(name)
{
}

void BewegungsDetektor::ausloesen()
{
    std::cout << "Bewegungsdetektor " << liefereName() << " detektiert eine Bewegung" << std::endl;

    for (unsigned int i = 0; i < empfaenger.size(); i++)
    {
        empfaenger[i]->alarmieren();
    }
}
