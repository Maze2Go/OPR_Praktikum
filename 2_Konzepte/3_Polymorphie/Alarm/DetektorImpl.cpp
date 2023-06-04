#include <iostream>

#include "DetektorImpl.h"

DetektorImpl::DetektorImpl(std::string name)
{
    this->name = name;
    std::cout << "Detektor " << liefereName() << " aufbauen" << std::endl;
    for (unsigned int i = 0; i < empfaenger.size(); i++)
    {
        delete empfaenger[i];
    }
}

DetektorImpl::~DetektorImpl()
{
    std::cout << "Detekror " << liefereName() << " abbauen" << std::endl;
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

void DetektorImpl::ausloesen()
{
    // ToDo
}
