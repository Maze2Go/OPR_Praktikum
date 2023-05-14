#pragma once
#include <string>
#include <sstream>

class Anschrift 
{
private:
std::string _strasse;
std::string _hausnummer;
int _postleitzahl= 0;
std::string _stadt;
public:
Anschrift(std::string const& silnice, std::string const& cislodomu, int plz , std::string const& mesto)
{
    _strasse =silnice;
    _hausnummer =cislodomu;
    _postleitzahl =plz;
    _stadt =mesto;
}
Anschrift()
{
    _strasse = "unbekannte Straße"; 
    _hausnummer = "unbekannte Hausnummer";
    _postleitzahl= 0;
    _stadt = "unbekannte Stadt";
}
std::string text()const
{
    std::stringstream sstr;
    std::string str;
    sstr << _postleitzahl << " "<< _stadt << ", " << _strasse << " " << _hausnummer << std::endl;
    str = sstr.str();
    return str;
}
std::string strasse  ()const
{
    return this->_strasse;
}
std::string hausnummer()const
{
 return this->_hausnummer;
}
int postleitzahl()const
{
return this->_postleitzahl;
}
std::string stadt()const
{
return this->_stadt;
}
void setzeAnschrift (std::string const& silnice, std::string const& cislodomu, int plz , std::string const& mesto)
{
    _strasse =silnice;
    _hausnummer =cislodomu;
    _postleitzahl =plz;
    _stadt =mesto;
}
};