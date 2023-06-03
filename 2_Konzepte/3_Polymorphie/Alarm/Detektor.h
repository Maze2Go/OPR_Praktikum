#pragma once
#include "Alarmierbar.h"
#include <vector>

class Detektor
{
protected:
    std::string name;
    std::vector<Alarmierbar *> empfaenger;

public:
    virtual ~Detektor() = 0;
    std::string virtual liefereName() const = 0;
    void virtual anschliessen( Alarmierbar &zu_alarmierendes_geraet) = 0;
    void virtual ausloesen() = 0;
};