#include "Atomkern.h"

Atomkern::Atomkern(int Protonen, int Neutronen, std::string Elementsymbol)
{
    anzahl_protonen = Protonen;
    anzahl_neutronen = Neutronen;
    this->Elementsymbol = Elementsymbol;
}

int Atomkern::liefere_neutronen() const
{
    return anzahl_neutronen;
}

int Atomkern::liefereOrdungszahl() const
{
    return anzahl_protonen;
}
int Atomkern::liefereMassezahl() const
{
    return (anzahl_neutronen + anzahl_protonen);
}

std::string Atomkern::liefereElementsymbol() const
{
    return Elementsymbol;
}

Atomkern Atomkern::kernfusion(const Atomkern &Fusions_AtomKern)
{
    return (Atomkern{anzahl_protonen + Fusions_AtomKern.anzahl_protonen, anzahl_neutronen + anzahl_neutronen});
}

Atomkern Atomkern::operator+(const Atomkern &Fusions_AtomKern)
{
    return (Atomkern{anzahl_protonen + Fusions_AtomKern.anzahl_protonen, anzahl_neutronen + anzahl_neutronen});
}

Atomkern Atomkern::operator+=(const Atomkern &Fusions_Atomkern)
{
    this->anzahl_protonen = anzahl_protonen + Fusions_Atomkern.anzahl_protonen;
    this->anzahl_neutronen = anzahl_neutronen + Fusions_Atomkern.anzahl_neutronen;
    return (Atomkern{anzahl_protonen + Fusions_Atomkern.anzahl_protonen, anzahl_neutronen + anzahl_neutronen});
}

Atomkern Atomkern::operator-(const Atomkern &Fusions_Atomkern)
{
    return (Atomkern{anzahl_protonen - Fusions_Atomkern.anzahl_protonen, anzahl_neutronen - anzahl_neutronen});
}

Atomkern Atomkern::operator-=(const Atomkern &Fusions_Atomkern)
{
    this->anzahl_protonen = anzahl_protonen - Fusions_Atomkern.anzahl_protonen;
    this->anzahl_neutronen = anzahl_neutronen - Fusions_Atomkern.anzahl_neutronen;
    return (Atomkern{anzahl_protonen - Fusions_Atomkern.anzahl_protonen, anzahl_neutronen - anzahl_neutronen});
}
bool Atomkern::operator==(const Atomkern &Kern)
{
    if((this->liefereOrdungszahl() == Kern.liefereOrdungszahl()) && (this->liefereMassezahl() == Kern.liefereMassezahl()))
        return true;
    else
    return false;
}

// Globale-Operatoren
Atomkern operator*(int ganzzahliges_skalar, const Atomkern &kern)
{
    return Atomkern{ganzzahliges_skalar * kern.liefere_neutronen(), ganzzahliges_skalar * kern.liefereOrdungszahl(), "Unbenannt"};
}

Atomkern operator*(const Atomkern &kern, int ganzzahliges_skalar)
{
    return Atomkern{ganzzahliges_skalar * kern.liefereOrdungszahl(), ganzzahliges_skalar * kern.liefere_neutronen(), "Unbenannt"};
}

std::ostream& operator<<(std::ostream& os, const Atomkern& Kern)
{
    os  << "Element: " << Kern.liefereElementsymbol() << ", Protonen: " << Kern.liefereOrdungszahl() << ", Neutronen: "
        << Kern.liefere_neutronen() << ", Massenzahl: " << Kern.liefereMassezahl() << std::endl;
    return os;
}

