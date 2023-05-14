#pragma once

#include <string>
#include <iostream>

class Musikinstrument
{
    private:
    std::string name;

    public:

    Musikinstrument(void);
    Musikinstrument(const std::string &name);
    virtual ~Musikinstrument(void);
    virtual void spielen(void) const;
    std::string liefereName(void) const;


};

