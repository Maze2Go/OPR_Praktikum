#include "Vektor.h"
#include <string>
#include <sstream>


Vektor::Vektor(int x, int y, int z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

std::string Vektor::text() const
{
    std::stringstream sstr1;
    std::string str1;
    sstr1 << "(" << x<< ", " << y << ", " << z << ")"<< std::flush;
    str1 = sstr1.str();
    return str1;

}



