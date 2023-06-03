#pragma once

#include "DetektorImpl.h"

class BewegungsDetektor : public DetektorImpl
{
    private:
    public:
    BewegungsDetektor(std::string name);
    ~BewegungsDetektor() override;
    void ausloesen() override;
};