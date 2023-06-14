#pragma once

#include "Alarmierbar.h"

class AlarmierbarImpl : public Alarmierbar
{
protected:
    std::string name;
    bool _istalamiert;

private:
public:
    AlarmierbarImpl(std::string name);
    virtual ~AlarmierbarImpl();
    void alarmieren() override;
    bool istAlamiert() const override;
    void alarmZuruecksetzen() override;
    std::string liefereName() const override;
};