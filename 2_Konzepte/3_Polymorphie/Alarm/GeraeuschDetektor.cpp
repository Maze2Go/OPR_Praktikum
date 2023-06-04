#include "GeraeuschDetektor.h"
#include <iostream>

GeraeuschDetektor::GeraeuschDetektor(std::string name) : DetektorImpl(name)
{
}
GeraeuschDetektor::~GeraeuschDetektor()
{
    std::cout << "Detektor " << liefereName() << " abbauen" << std::endl;

    for (unsigned int i = 0; i < empfaenger.size(); i++)
    {
        delete empfaenger[i];
    }
}

void GeraeuschDetektor::ausloesen()
{
    std::cout << "Geraeuschdetektor " << liefereName() << " detektiert eine Garaeusch" << std::endl;

    for (unsigned int i = 0; i < empfaenger.size(); i++)
    {
        empfaenger[i]->alarmieren();
    }
}
