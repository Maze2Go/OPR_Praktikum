#pragma once

#include "Detektor.h"

class DetektorImpl : public Detektor
{
private:
public:
    DetektorImpl(std::string name);
    virtual ~DetektorImpl();
    void anschliessen(Alarmierbar &zu_alarmierendes_geraet) override;
    std::string liefereName() const override;

protected:
    void ausloesen() override;
};
