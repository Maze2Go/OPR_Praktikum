#pragma once

#include "AlarmierbarImpl.h"

class Flutlicht : public AlarmierbarImpl
{
    private:
    int helligkeit_lumen;
    static int anzahl_flutlicht;
    

    public:
    Flutlicht(int helligkeit_lumen);
    virtual ~Flutlicht();
    void alarmieren() override;
    std::string liefereName() const override;

};
