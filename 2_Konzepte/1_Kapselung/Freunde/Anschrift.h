#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <sstream>

class Anschrift
{
private:
    std::string strasse;
    std::string hausnummer;
    int postleitzahl;
    std::string stadt;

public:
    // Standard-Konstruktor
    Anschrift()
    {
        strasse = "unbekannte Strasse";
        hausnummer = "unbekannte Hausnummer";
        stadt = "unbekannte Stadt";
        postleitzahl = 0;
    }
    // Konstruktor-Ueberladung-1
    Anschrift(const std::string &strasse, const std::string &hausnummer, int postleitzahl, const std::string &stadt)
    {
        this->strasse = strasse;
        this->hausnummer = hausnummer;
        this->stadt = stadt;
        this->postleitzahl = postleitzahl;
    }
    

    //---------------------------------Elementfunktionen---------------------------------//

    void            setzeAnschrift(const std::string &strasse, const std::string &hausnummer, int postleitzahl, const std::string &stadt)
    {
        this->strasse = strasse;
        this->hausnummer = hausnummer;
        this->stadt = stadt;
        this->postleitzahl = postleitzahl;
    }

    // Liefere-Funktionen
        //  Liefere Strasse
        std::string liefereStrasse() const
        {
            return this->strasse;
        }

        // Liefere Hausnummer
        std::string liefereHausnummer() const
        {
            return this->hausnummer;
        }

        // Liefere Stadt
        std::string liefereStadt() const
        {
            return this->stadt;
        }

        // Liefere Postleitzahl
        int lieferePostleitzahl() const
        {
            return this->postleitzahl;
        }

    // Ausgabe
    std::string text() const
    {
        std::stringstream sstr1;
        std::string str1;

        sstr1 << postleitzahl << " " << stadt << ", " << strasse << " " << hausnummer << std::endl;
        str1 = sstr1.str();
        return str1;
    }
};