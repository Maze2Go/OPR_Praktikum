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

Atomkern Atomkern::kernfusion(const Atomkern &Fusions_AtomKern)
{
    return (Atomkern{symbol() + " + " + Fusions_AtomKern.symbol(), _protonen + Fusions_AtomKern.ordnungszahl(), _neutronen + Fusions_AtomKern.liefereneutronen()});
}

Atomkern Atomkern::operator+(const Atomkern &Fusions_AtomKern)
{
    return (Atomkern{symbol() + " + " + Fusions_AtomKern.symbol(), _protonen + Fusions_AtomKern._protonen, _neutronen + _neutronen});
}

Atomkern Atomkern::operator+=(const Atomkern &Fusions_Atomkern)
{
    this->_protonen = _protonen + Fusions_Atomkern._protonen;
    this->_neutronen = _neutronen + Fusions_Atomkern._neutronen;
    return (Atomkern{symbol() + " + " + Fusions_Atomkern.symbol(), _protonen + Fusions_Atomkern._protonen, _neutronen + _neutronen});
}

Atomkern Atomkern::operator-(const Atomkern &Fusions_Atomkern)
{
    return (Atomkern{symbol() + " - " + Fusions_Atomkern.symbol(), _protonen - Fusions_Atomkern._protonen, _neutronen - _neutronen});
}

Atomkern Atomkern::operator-=(const Atomkern &Fusions_Atomkern)
{
    this->_protonen = _protonen - Fusions_Atomkern._protonen;
    this->_neutronen = _neutronen - Fusions_Atomkern._neutronen;
    return (Atomkern{symbol() + " -= " + Fusions_Atomkern.symbol(), _protonen - Fusions_Atomkern._protonen, _neutronen - _neutronen});
}
bool Atomkern::operator==(const Atomkern &Kern)
{
    if ((this->ordnungszahl() == Kern.ordnungszahl()) && (this->massenzahl() == Kern.massenzahl()))
        return true;
    else
        return false;
}

// Globale-Operatoren
Atomkern operator*(int ganzzahliges_skalar, const Atomkern &kern)
{
    return Atomkern{std::to_string(ganzzahliges_skalar) + " * " + kern.symbol(), ganzzahliges_skalar * kern.liefereneutronen(), ganzzahliges_skalar * kern.ordnungszahl()};
}

Atomkern operator*(const Atomkern &kern, int ganzzahliges_skalar)
{
    return Atomkern{kern.symbol() + " * " + std::to_string(ganzzahliges_skalar), ganzzahliges_skalar * kern.ordnungszahl(), ganzzahliges_skalar * kern.liefereneutronen()};
}

std::ostream &operator<<(std::ostream &os, const Atomkern &Kern)
{
    os << "Element: " << Kern.symbol() << ", Protonen: " << Kern.ordnungszahl() << ", Neutronen: "
       << Kern.liefereneutronen() << ", Massenzahl: " << Kern.massenzahl() << std::endl;
    return os;
}
