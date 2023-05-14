#pragma once
#include <string>

class Vektor
{
public:
    int x,y,z;

//public:

    Vektor(int x = 0, int y = 0, int z = 0);
    std::string text(void) const;
};