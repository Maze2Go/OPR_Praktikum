#pragma once
#include "Alamierbar.h"

class Detektor : public Alarmierbar
{
private:
    std::string name;

public:
    virtual ~Detektor();
    void virtual anschliessen() = 0;
    void virtual ausloesen() = 0;
};