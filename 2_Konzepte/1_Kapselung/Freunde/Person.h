#pragma once

#include "Anschrift.h"

class Person
{
private:
    std::string _name;
    Anschrift *_anschrift;
    std::vector<Person *> _freunde;

public:
    // Standard-Konstruktor
    Person() : _name("Anonymus")
    {
        _anschrift = new Anschrift{};
    }

    // Konstruktor-Ueberladung-1
    Person(const std::string &name)
    {
        _anschrift = new Anschrift{};
        this->_name = name;
    }

    // Destruktor
    ~Person()
    {
        delete _anschrift;
    }

    //---------------------------------Elementfunktionen---------------------------------//
    void setzeAnschrift(const std::string &strasse, const std::string &hausnummer, int postleitzahl, const std::string &stadt)
    {
        _anschrift->setzeAnschrift(strasse, hausnummer, postleitzahl, stadt);
    }

    void setzeAnschrift(const Anschrift &anschrift)
    {
        _anschrift->setzeAnschrift(anschrift.liefereStrasse(), anschrift.liefereHausnummer(), anschrift.lieferePostleitzahl(), anschrift.liefereStadt());
    }

    // Lese Funktion
    std::string name(void) const
    {
        return _name;
    }

    // Lese Funktion
    Anschrift *anschrift() const
    {
        return _anschrift;
    }

    bool befreunden(Person &neuerFreund)
    {
        if (istFreund(neuerFreund) == true || &neuerFreund == this)
            return 0;
        else
        {
            this->_freunde.push_back(&neuerFreund);
            neuerFreund._freunde.push_back(this);
            return 1;
        }
    }

    // Überprüfe ob Person ein Freund ist
    bool istFreund(Person const &p_freund) const
    {
        for (unsigned int i = 0; i < _freunde.size(); i++)
        {
            if (&p_freund == _freunde[i])
                return true;
        }
        return false; // Return false wenn es keine Passende Person gibt
    }

    // Ausgabe-Person
    std::string text() const
    {
        std::stringstream sstr1;
        std::string str1;

        sstr1 << _name << std::endl;
        sstr1 << "--- wohnhaft in " << _anschrift->lieferePostleitzahl() << " " << _anschrift->liefereStadt() << ", "
              << _anschrift->liefereStrasse() << " " << _anschrift->liefereHausnummer() << std::endl;

        if (_freunde.size() == 0)
            sstr1 << "--- keine Freunde" << std::flush;
        else
        {
            for (unsigned int i = 0; i < _freunde.size(); i++)
            {
                sstr1 << "--- Freund: " << (_freunde[i])->name() << "(" << _freunde[i] << ")" << std::endl;
            }
        }

        str1 = sstr1.str();
        return str1;
    }

    
};
