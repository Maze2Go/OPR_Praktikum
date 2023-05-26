#pragma once

#include "Alamierbar.h"

class Sirene : public Alarmierbar
{
    public:
    

    private:
    Sirene();
    void alarmieren() override;
    std::string liefereName() const override;

};
