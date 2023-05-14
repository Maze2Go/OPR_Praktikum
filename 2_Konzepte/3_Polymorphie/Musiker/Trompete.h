#pragma once

#include "Musikinstrument.h"


class Trompete : public Musikinstrument
{
    private:


    public:
    Trompete(void);
    ~Trompete()override;
    void spielen(void) const override;


};