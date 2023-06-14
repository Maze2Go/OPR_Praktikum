#pragma once
#include "Alarmierbar.h"
#include <vector>

class Detektor
{

public:
    virtual ~Detektor() {};
    std::string virtual liefereName() const = 0;
    void virtual anschliessen( Alarmierbar &zu_alarmierendes_geraet) = 0;
};