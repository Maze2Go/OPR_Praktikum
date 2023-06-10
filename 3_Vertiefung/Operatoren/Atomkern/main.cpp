#include "Atomkern.h"

#include <iostream>

using namespace std;

int main()
{
    Atomkern H(1, 0, "Wasserstoff");
    Atomkern O(8, 8, "Sauerstoff");
    Atomkern H20(0, 0, "Wasser");

    H20 += H;

    cout << "Name: " << H20.liefereElementsymbol() << ", Ordungszahl: " << H20.liefereOrdungszahl() << ", Massezahl: " << H20.liefereMassezahl() << endl;

    H20 += O+H;

    cout << "Name: " << H20.liefereElementsymbol() << ", Ordungszahl: " << H20.liefereOrdungszahl() << ", Massezahl: " << H20.liefereMassezahl() << endl;
}