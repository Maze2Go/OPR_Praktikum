#pragma once

#include "Luftfahrzeug.h"

class Heissluftballon : public Luftfahrzeug
{
private:
    int _ballonVolumen;

public:
    Heissluftballon(std::string const &_name, int _Volumen, int _maxFlughoehe);
    Heissluftballon(const Heissluftballon &heissluftb);
    int ballonVolumen() const;
    std::string text() const;
};