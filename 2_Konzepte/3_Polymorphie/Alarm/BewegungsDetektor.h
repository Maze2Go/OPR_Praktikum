#pragma once

#include "DetektorImpl.h"

class BewegungsDetektor : public DetektorImpl
{
    BewegungsDetektor(std::string name);
    ~BewegungsDetektor() override;
    void ausloesen() override;
};