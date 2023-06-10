#pragma once

#include <string>

class Atomkern
{
private:
    int anzahl_protonen;
    int anzahl_neutronen;
    std::string Elementsymbol;

public:
    Atomkern(int Protonen, int Neutronen, std::string Elementsymbol = "");
    //= liefereMassezahl() int liefere_protonen();
    int liefere_neutronen();
    int liefereOrdungszahl();
    int liefereMassezahl();
    std::string liefereElementsymbol();

    Atomkern kernfusion(const Atomkern &Fusions_AtomKern);
    Atomkern kernspaltung();

    // Operatorueberladung
    Atomkern operator+(const Atomkern &Fusions_AtomKern);
    Atomkern operator+=(const Atomkern &Fusions_AtomKern);
    Atomkern operator-(const Atomkern &Fusions_AtomKern);
    Atomkern operator-=(const Atomkern &Fusions_AtomKern);
};
