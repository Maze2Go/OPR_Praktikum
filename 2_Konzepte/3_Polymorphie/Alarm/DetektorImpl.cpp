#include <iostream>

#include "DetektorImpl.h"

DetektorImpl::DetektorImpl(std::string name)
{
    this->name = name;
    std::cout << "Detektor " << liefereName() << " aufbauen" << std::endl;
    
}

DetektorImpl::~DetektorImpl()
{
    std::cout << "Detektor " << liefereName() << " abbauen" << std::endl;
    for (unsigned int i = 0; i < empfaenger.size(); i++)
    {
        std::cout << empfaenger[i]->liefereName() << " abmelden" << std::endl;
    }
}

void DetektorImpl::anschliessen(Alarmierbar &zu_alarmierendes_geraet)
{
    std::cout << zu_alarmierendes_geraet.liefereName() << " an " << this->liefereName() << " anschliessen" << std::endl;
    empfaenger.push_back(&zu_alarmierendes_geraet);
}

std::string DetektorImpl::liefereName() const
{
    return name;
}