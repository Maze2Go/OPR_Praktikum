#pragma once

#include "Alamierbar.h"

class AlarmierbarImpl : public Alarmierbar
{
    AlarmierbarImpl();
    void alarmieren() override;
    bool istAlamiert() override;
    void alarmZuruecksetzen() override;


};