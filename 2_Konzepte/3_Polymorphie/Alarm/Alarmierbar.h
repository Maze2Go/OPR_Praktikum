#pragma once
#include <string>

class Alarmierbar
{
   
    public:
    virtual ~Alarmierbar() {};
    virtual void alarmieren() = 0;
    virtual std::string liefereName()const = 0 ;
    virtual bool istAlamiert() const = 0;
    virtual void alarmZuruecksetzen() = 0;
};