#pragma once

#include "DetektorImpl.h"

class GeraeuschDetektor : public DetektorImpl
{
    GeraeuschDetektor(std::string name);
    ~GeraeuschDetektor() override;
    void ausloesen() override;
};