#pragma once

#include "DetektorImpl.h"

class BewegungsDetektor : public DetektorImpl
{
    private:
    public:
    BewegungsDetektor(std::string name);
    void virtual ausloesen();
};