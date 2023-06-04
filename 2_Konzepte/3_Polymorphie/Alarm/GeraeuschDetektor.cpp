#include "GeraeuschDetektor.h"
#include <iostream>

GeraeuschDetektor::GeraeuschDetektor(std::string name) : DetektorImpl(name)
{
}

void GeraeuschDetektor::ausloesen()
{
    std::cout << "Geraeuschdetektor " << liefereName() << " detektiert eine Garaeusch" << std::endl;

    for (unsigned int i = 0; i < empfaenger.size(); i++)
    {
        empfaenger[i]->alarmieren();
    }
}
