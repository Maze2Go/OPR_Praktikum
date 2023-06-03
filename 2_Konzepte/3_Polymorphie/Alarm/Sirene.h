#pragma once

#include "AlarmierbarImpl.h"

class Sirene : public AlarmierbarImpl
{
private:
    static int anzahl_sirene;

public:
    Sirene();
    virtual ~Sirene();
    void alarmieren() override;
    std::string liefereName() const override;
};
