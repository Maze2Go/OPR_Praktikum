#pragma once

#include "Alamierbar.h"

class Flutlicht : public Alarmierbar
{
    public:
    

    private:
    Flutlicht();
    void alarmieren() override;
    std::string liefereName() const override;

};
