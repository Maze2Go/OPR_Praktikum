#pragma once

#include <string>
#include <iostream>

class Atomkern
{
private:
    int anzahl_protonen;
    int anzahl_neutronen;
    std::string Elementsymbol;

public:
    Atomkern(int Protonen, int Neutronen, std::string Elementsymbol = "");
    //= liefereMassezahl() int liefere_protonen();
    int liefere_neutronen() const;
    int liefereOrdungszahl() const;
    int liefereMassezahl() const;
    std::string liefereElementsymbol() const;

    Atomkern kernfusion(const Atomkern &Fusions_AtomKern);
    Atomkern kernspaltung();

    // Operatorueberladung
    Atomkern operator+(const Atomkern &Fusions_AtomKern);
    Atomkern operator+=(const Atomkern &Fusions_AtomKern);
    Atomkern operator-(const Atomkern &Fusions_AtomKern);
    Atomkern operator-=(const Atomkern &Fusions_AtomKern);
    bool operator==(const Atomkern &Kern);
};

// Funktions-Prototypen
Atomkern operator*(int ganzzahliges_skalar, const Atomkern &kern);
Atomkern operator*(const Atomkern &kern, int ganzzahliges_skalar);
std::ostream &operator<<(std::ostream &os, const Atomkern &Kern);
