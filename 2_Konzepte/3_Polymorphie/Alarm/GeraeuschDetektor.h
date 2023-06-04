#pragma once

#include "DetektorImpl.h"

class GeraeuschDetektor : public DetektorImpl
{
private:
public:
    GeraeuschDetektor(std::string name);
    void ausloesen() override;
};