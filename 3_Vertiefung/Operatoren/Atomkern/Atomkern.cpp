#include "Atomkern.h"

Atomkern::Atomkern(int Protonen, int Neutronen, std::string Elementsymbol)
{
    anzahl_protonen = Protonen;
    anzahl_neutronen = Neutronen;
    this->Elementsymbol = Elementsymbol;
}

int Atomkern::liefere_neutronen()
{
    return anzahl_neutronen;
}

int Atomkern::liefereOrdungszahl()
{
    return anzahl_protonen;
}
int Atomkern::liefereMassezahl()
{
    return (anzahl_neutronen + anzahl_protonen);
}

std::string Atomkern::liefereElementsymbol()
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
     return(Atomkern{anzahl_protonen + Fusions_Atomkern.anzahl_protonen, anzahl_neutronen + anzahl_neutronen});
}


Atomkern Atomkern::operator-(const Atomkern &Fusions_Atomkern)
{
    return (Atomkern{anzahl_protonen - Fusions_Atomkern.anzahl_protonen, anzahl_neutronen - anzahl_neutronen});
}

Atomkern Atomkern::operator-=(const Atomkern &Fusions_Atomkern)
{
    this->anzahl_protonen = anzahl_protonen - Fusions_Atomkern.anzahl_protonen;
    this->anzahl_neutronen = anzahl_neutronen - Fusions_Atomkern.anzahl_neutronen;
     return(Atomkern{anzahl_protonen - Fusions_Atomkern.anzahl_protonen, anzahl_neutronen - anzahl_neutronen});
}
