#pragma once

#include "Alarmierbar.h"

class AlarmierbarImpl : public Alarmierbar
{
private:
public:
    AlarmierbarImpl(std::string name);
    virtual ~AlarmierbarImpl();
    void alarmieren() override;
    bool istAlamiert() const override;
    void alarmZuruecksetzen() override;
};