#include <iostream>

#include "DetektorImpl.h"

DetektorImpl::DetektorImpl(std::string name)
{
    std::cout << "Detektor " << liefereName() << " aufbauen" << std::endl;
    this->name = name;

}

DetektorImpl::~DetektorImpl()
{
    // ToDo
}

void DetektorImpl::anschliessen(Alarmierbar& zu_alarmierendes_geraet)
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
    //ToDo
}
