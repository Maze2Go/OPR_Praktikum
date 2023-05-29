#pragma once

#include "Alarmierbar.h"

class AlarmierbarImpl : public Alarmierbar
{
    public:
    
    private:
    AlarmierbarImpl();
    void alarmieren() override;
    bool istAlamiert() override;
    void alarmZuruecksetzen() override;
};