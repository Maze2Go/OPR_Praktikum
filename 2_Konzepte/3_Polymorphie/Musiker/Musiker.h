#pragma once

#include "Musikinstrument.h"

class Musiker
{
private:
    std::string name;
    Musikinstrument const  * instrument = NULL;

public:
    Musiker(void);
    Musiker(std:: string name);
    virtual ~Musiker();
    void weiseInstrumentZu(Musikinstrument const *musikinstr);
    void spielen()const ;
    std::string liefereName() const;



};