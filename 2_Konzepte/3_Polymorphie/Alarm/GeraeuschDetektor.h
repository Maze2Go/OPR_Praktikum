#pragma once

#include "DetektorImpl.h"

class GeraeuschDetektor : public DetektorImpl
{
private:
public:
    GeraeuschDetektor(std::string name);
    ~GeraeuschDetektor() override;
    void ausloesen() override;
};