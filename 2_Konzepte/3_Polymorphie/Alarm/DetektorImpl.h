#pragma once

#include "Detektor.h"

class DetektorImpl : public Detektor
{
protected:
    std::string name;
    std::vector<Alarmierbar *> empfaenger;

private:
public:
    DetektorImpl(std::string name);
    virtual ~DetektorImpl();
    void anschliessen(Alarmierbar &zu_alarmierendes_geraet) override;
    std::string liefereName() const override;

};
