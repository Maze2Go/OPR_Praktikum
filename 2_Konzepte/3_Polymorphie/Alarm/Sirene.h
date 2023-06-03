#pragma once

#include "AlarmierbarImpl.h"

class Sirene : public AlarmierbarImpl
{
public:

static int anzahl_sirene;



private:
    Sirene();
    virtual ~Sirene();
    void alarmieren() override;
    std::string liefereName() const override;
};
