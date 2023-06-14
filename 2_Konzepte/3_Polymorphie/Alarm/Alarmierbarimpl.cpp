#include <iostream>

#include "AlarmierbarImpl.h"

AlarmierbarImpl::AlarmierbarImpl(std::string name)
{
   this->name = name;
}

AlarmierbarImpl::~AlarmierbarImpl()
{
}

void AlarmierbarImpl::alarmieren()
{
    _istalamiert = true;
}

bool AlarmierbarImpl::istAlamiert() const
{
    return _istalamiert;
}

void AlarmierbarImpl::alarmZuruecksetzen()
{
    this->_istalamiert = false;
}

std::string AlarmierbarImpl::liefereName() const 
{
return name;
}


