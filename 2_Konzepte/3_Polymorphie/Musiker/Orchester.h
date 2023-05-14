#pragma once

#include <vector>

#include "Musiker.h"

class Orchester
{
    private:
    std::vector<Musiker const *> musiker;

    public:
    Orchester(void);
    virtual ~Orchester();
    void spielen() const;
    void hinzufuegen(Musiker const * musiker);
    
};