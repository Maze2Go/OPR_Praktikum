#pragma once

#include "Atomkern.h"

#include <vector>

class Reaktor
{
private:
    Atomkern inhalt_reaktor;

public:
    const Atomkern &reaktor_inhalt() const;

    void operator~();
    Reaktor &operator<(const Atomkern &kern);
    Reaktor &operator>(const Atomkern &kern);
    const Atomkern &operator*(void);
};

const Atomkern &operator*(const Reaktor &kern);
