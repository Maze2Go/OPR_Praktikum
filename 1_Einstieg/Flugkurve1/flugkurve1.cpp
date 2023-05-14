/**
 * $Author: Matthias Jechow
 * $Date: 2023-03-31
 */
#include <iostream>
using namespace std;

// Struct-Körper:
struct Vektor
{
	float x = 0;
	float y = 0;
};

// Struct-Körper:
struct Koerper
{
	float masse; // [kg]
	Vektor position;
	Vektor geschwindigkeit;
};

// Funktions-Prototypen
Vektor mulVektor(const Vektor &v, const float &Skalar);
Vektor addVektor(const Vektor &v1, const Vektor &v2);
void ausgabeVektor(const Vektor &koerper);
void ausgabeKoerper(const Koerper &k);
void bewegeKoerper(Koerper &koerper, const Vektor &gesamtkraft, const float &dt);

int main()
{
	using namespace std;
	// Körper:
	Koerper koerper;
	koerper.masse = 10;
	koerper.position = {0, 0};
	koerper.geschwindigkeit = {10, 10};

	// Parametrierung der auf den Körper wirkende Kräfte:
	const Vektor BESCHLEUNIGUNG_GRAVITATION = {0, -9.81}; // [m/s^2]
	const float REIBUNGSKOEFFIZIENT = -5;				  // [kg/s]

	// Sorgt dafür, dass 2 Nachkommastellen angezeigt werden:
	cout << fixed;
	cout.precision(2);

	// Simulation:
	const float dt = 0.1;
	for (int i = 0; i >= 0; i++)
	{
		cout << i + 1 << ".Position des Koerpers: ";
		ausgabeKoerper(koerper);
		cout << endl;
		// Bestimmung der Kraft
		Vektor reibungskraft = mulVektor(koerper.geschwindigkeit,
										 REIBUNGSKOEFFIZIENT);
		Vektor anziehungskraft = mulVektor(BESCHLEUNIGUNG_GRAVITATION,
										   koerper.masse);
		Vektor gesamtkraft = addVektor(reibungskraft, anziehungskraft);
		// Ermittlung der neuen Position und neuen Geschwindigkeit
		bewegeKoerper(koerper, gesamtkraft, dt);
		if (koerper.position.y <= 0)
		{
			break;
		}
	}
}

Vektor mulVektor(const Vektor &v, const float &Skalar)
{
	Vektor v1;
	v1.x = v.x * Skalar;
	v1.y = v.y * Skalar;

	return v1;
}

Vektor addVektor(const Vektor &v1, const Vektor &v2)
{
	Vektor v0;
	v0.x = v1.x + v2.x;
	v0.y = v1.y + v2.y;

	return v0;
}

void ausgabeKoerper(const Koerper &k)
{
	using namespace std;

	ausgabeVektor(k.position);
}

void bewegeKoerper(Koerper &koerper, const Vektor &gesamtkraft, const float &dt)

{
	Vektor beschleunigung = mulVektor(gesamtkraft, 1 / koerper.masse);

	koerper.geschwindigkeit = addVektor(koerper.geschwindigkeit, mulVektor(beschleunigung, dt));

	koerper.position = addVektor(koerper.position, mulVektor(koerper.geschwindigkeit, dt));
}

void ausgabeVektor(const Vektor &koerper)
{
	cout << koerper.x << ", " << koerper.y << flush;
}