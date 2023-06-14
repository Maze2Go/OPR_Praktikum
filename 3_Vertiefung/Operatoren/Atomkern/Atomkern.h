#pragma once

#include <string>
#include <iostream>

class Atomkern
{
private:
    int _protonen;
    int _neutronen;
    int _massenzahl;
    std::string Elementsymbol;

public:
    static const Atomkern PROTON;
    static const Atomkern NEUTRON;

    Atomkern(std::string Elementsymbol = "", int Massenzahl = 0, int Ordnungszahl = 0);
    Atomkern(int Massenzahl, int Ordnungszahl);
    //= liefereMassezahl() int liefere_protonen();
    int liefereneutronen() const;
    int ordnungszahl() const;
    int massenzahl() const;
    std::string symbol() const;

    Atomkern kernfusion(const Atomkern &Fusions_AtomKern);
    Atomkern kernspaltung();
    void aktualisiereAtommasse(Atomkern &kern);
    void Atomkernzuruecksetzen(void);

    // Operatorueberladung
    Atomkern operator+(const Atomkern &Fusions_AtomKern) const;
    Atomkern operator+=(const Atomkern &Fusions_AtomKern);
    Atomkern operator-(const Atomkern &Fusions_AtomKern);
    Atomkern operator-=(const Atomkern &Fusions_AtomKern);
    bool operator==(const Atomkern &Kern) const;
};

// Funktions-Prototypen
Atomkern operator*(int ganzzahliges_skalar, const Atomkern &kern);
Atomkern operator*(const Atomkern &kern, int ganzzahliges_skalar);
std::ostream &operator<<(std::ostream &os, const Atomkern &Kern);
