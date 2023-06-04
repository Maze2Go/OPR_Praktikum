#include "Bewegungsdetektor.h"
#include <iostream>

BewegungsDetektor::BewegungsDetektor(std::string name) : DetektorImpl(name)
{
}
BewegungsDetektor::~BewegungsDetektor()
{
    std::cout <<"Detektor " << liefereName() << " abbauen" << std::endl;
        
    for(unsigned int i = 0; i < empfaenger.size(); i++)
    {
        delete empfaenger[i];
    }
}

void BewegungsDetektor::ausloesen()
{
    std::cout << "Bewegungsdetektor " << liefereName() << " detektiert eine Bewegung" << std::endl;

    for (unsigned int i = 0; i < empfaenger.size(); i++)
    {
        empfaenger[i]->alarmieren();
    }
}
