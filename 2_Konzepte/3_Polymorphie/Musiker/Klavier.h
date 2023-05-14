#pragma once

#include "Musikinstrument.h"

class Klavier : public Musikinstrument
{
private:
public:
    Klavier(void);
    ~Klavier() override;
    void spielen(void) const override;
};