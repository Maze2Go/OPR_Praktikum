#include "DetektorImpl.h"

DetektorImpl::DetektorImpl(std::string name)
{
    this->name = name;
}

DetektorImpl::~DetektorImpl()
{
    // ToDo
}

void DetektorImpl::anschliessen(Alarmierbar& zu_alarmierendes_geraet)
{
    empfaenger.push_back(&zu_alarmierendes_geraet);
}

std::string DetektorImpl::liefereName() const
{
    return name;
}
