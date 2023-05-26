#pragma once

#include "Detektor.h"

class DetektorImpl : public Detektor
{
    private:

    public:
    DetektorImpl(std::string name);
    virtual ~DetektorImpl();
    void anschliessen() override;
    
    protected:
    void alarmieren() override;

};
