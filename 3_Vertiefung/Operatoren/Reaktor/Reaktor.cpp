#include "Reaktor.h"

const Atomkern &Reaktor::reaktor_inhalt() const
{

    return inhalt_reaktor;
}

void Reaktor::operator~(void)
{
    inhalt_reaktor.Atomkernzuruecksetzen();
}

Reaktor &Reaktor::operator<(const Atomkern &kern)
{

    inhalt_reaktor += kern;
    return *this;
}

Reaktor & Reaktor::operator>(const Atomkern &kern)
{
    inhalt_reaktor -= kern;
    return *this;
}

const Atomkern &Reaktor::operator*(void)
{
    return this->reaktor_inhalt();
}



const Atomkern &operator*(const Reaktor &kern)
{
    return kern.reaktor_inhalt();
}
