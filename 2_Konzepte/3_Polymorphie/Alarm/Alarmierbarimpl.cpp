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
    
}

bool AlarmierbarImpl::istAlamiert() const
{
    return _istalamiert;
}

void AlarmierbarImpl::alarmZuruecksetzen()
{
    this->_istalamiert = false;
}

