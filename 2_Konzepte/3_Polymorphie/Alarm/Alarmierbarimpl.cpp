#include <iostream>

#include "AlarmierbarImpl.h"

AlarmierbarImpl::AlarmierbarImpl(std::string name)
{
   this->name = name;
}

AlarmierbarImpl::~AlarmierbarImpl()
{
    std::cout << liefereName() << " abmelden" << std::endl;
}

void AlarmierbarImpl::alarmieren()
{
    
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


