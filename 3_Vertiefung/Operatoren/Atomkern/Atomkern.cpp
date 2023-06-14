#include "Atomkern.h"

// Static-Variablen
const Atomkern Atomkern::PROTON = Atomkern{"Proton", 1, 1};
const Atomkern Atomkern::NEUTRON = Atomkern{"Neutron", 1, 0};

Atomkern::Atomkern(std::string Elementsymbol, int Massenzahl, int Ordnungszahl)
{
    this->_protonen = Ordnungszahl;
    this->_massenzahl = Massenzahl;
    this->Elementsymbol = Elementsymbol;
    this->_neutronen = Massenzahl - _protonen;
}

Atomkern::Atomkern(int Massenzahl, int Ordnungszahl)
{
    this->_protonen = Ordnungszahl;
    this->_massenzahl = Massenzahl;
    this->_neutronen = Massenzahl - _protonen;
}



int Atomkern::liefereneutronen() const
{
    return _neutronen;
}

int Atomkern::ordnungszahl() const
{
    return _protonen;
}
int Atomkern::massenzahl() const
{
    return _massenzahl;
}

std::string Atomkern::symbol() const
{
    return Elementsymbol;
}

Atomkern Atomkern::kernfusion(const Atomkern &Fusions_Atomkern)
{
    return (Atomkern{massenzahl() + Fusions_Atomkern.massenzahl(), _protonen + Fusions_Atomkern.ordnungszahl()});
}

void Atomkern::aktualisiereAtommasse(Atomkern &kern)
{
    kern._massenzahl = kern.liefereneutronen() + kern.ordnungszahl();
}

void Atomkern::Atomkernzuruecksetzen(void)
{
    _protonen = 0;
    _neutronen = 0;
    aktualisiereAtommasse(*this);
}

Atomkern Atomkern::operator+(const Atomkern &Fusions_Atomkern) const
{
    return (Atomkern{massenzahl() + Fusions_Atomkern.massenzahl(), _protonen + Fusions_Atomkern.ordnungszahl()});
}

Atomkern Atomkern::operator+=(const Atomkern &Fusions_Atomkern)
{
    this->_protonen = _protonen + Fusions_Atomkern._protonen;
    this->_neutronen = _neutronen + Fusions_Atomkern._neutronen;
    aktualisiereAtommasse(*this);
    return (Atomkern{massenzahl() + Fusions_Atomkern.massenzahl(), _protonen + Fusions_Atomkern._protonen});
}

Atomkern Atomkern::operator-(const Atomkern &Fusions_Atomkern)
{
    return (Atomkern{massenzahl() - Fusions_Atomkern.massenzahl(), _protonen - Fusions_Atomkern._protonen});
}

Atomkern Atomkern::operator-=(const Atomkern &Fusions_Atomkern)
{
    this->_protonen = _protonen - Fusions_Atomkern._protonen;
    this->_neutronen = _neutronen - Fusions_Atomkern._neutronen;
    aktualisiereAtommasse(*this);
    return (Atomkern{massenzahl() - Fusions_Atomkern.massenzahl(), _protonen - Fusions_Atomkern._protonen});
}
bool Atomkern::operator==(const Atomkern &Kern) const
{
    if ((this->ordnungszahl() == Kern.ordnungszahl()) && (this->massenzahl() == Kern.massenzahl()))
        return true;
    else
        return false;
}

// Globale-Operatoren
Atomkern operator*(int ganzzahliges_skalar, const Atomkern &kern)
{
    return Atomkern{ ganzzahliges_skalar * kern.liefereneutronen(), ganzzahliges_skalar * kern.ordnungszahl()};
}

Atomkern operator*(const Atomkern &kern, int ganzzahliges_skalar)
{
    return Atomkern{ganzzahliges_skalar * kern.ordnungszahl(), ganzzahliges_skalar * kern.liefereneutronen()};
}

std::ostream &operator<<(std::ostream &os, const Atomkern &Kern)
{
    os << Kern.symbol() << "(" << Kern.massenzahl() << ","
       << Kern.ordnungszahl() << ")" << std::flush;
    return os;
}