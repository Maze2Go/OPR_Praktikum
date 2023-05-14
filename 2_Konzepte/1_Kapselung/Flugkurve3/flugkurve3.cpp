/**
 * $Author: Matthias Jechow
 * $Date: 2023-03-31
 */
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

// Struct-Körper:
class Vektor
{
public:
	float x = 0;
	float y = 0;

public:
	// Rechenoperationen-Vektoren
	Vektor &add(const Vektor &v2)
	{
		this->x += +v2.x;
		this->y += +v2.y;

		return *this;
	}

	Vektor &mul(const float &Skalar)
	{
		this->x *= Skalar;
		this->y *= Skalar;

		return *this;
	}

	// Schreib-Funktion
	void setzeVektor(Vektor &vneu)
	{
		*this = vneu;
	}

	// Ausgabe-Funktion
	string ausgabeVektor(void) const
	{
		stringstream sstr1;
		string str1;

		sstr1 << setw(5) << setprecision(2) << fixed << x << ", " << y << flush;
		str1 = sstr1.str();
		return str1;
	}
};

// Struct-Körper:
class Koerper
{

private:
	float masse; // [kg]
	Vektor position;
	Vektor geschwindigkeit;

public:
	// Konstruktor
	Koerper(float masse, Vektor position, Vektor geschwindigkeit)
	{
		this->masse = masse;
		this->position = position;
		this->geschwindigkeit = geschwindigkeit;
	}

	// Lese-Funktionen
	float liefereMasse() const
	{
		return masse;
	}

	Vektor lieferePosition() const
	{
		return position;
	}

	Vektor liefereGeschwindigkeit() const
	{
		return geschwindigkeit;
	}

	// Schreib-Funktionen
	void setzeMasse(float masse)
	{
		this->masse = masse;
	}

	void setzePosition(Vektor v1)
	{
		this->position.setzeVektor(v1);
	}

	void setzeGeschwindigkeit(Vektor v1)
	{
		this->geschwindigkeit.setzeVektor(v1);
	}

	// StringStream-Funktionen
	string text()
	{
		string str1;
		stringstream sstr1;

		str1 = this->position.ausgabeVektor();
		return str1;
	}

	// Berechnungs-Funktionen
	void bewegen(Vektor &beschleunigung, const float &dt)

	{
		Vektor v;

		v = beschleunigung;
		v.mul(dt);
		geschwindigkeit.add(v);
		v = geschwindigkeit;
		v.mul(dt);
		position.add(v);
	}
};

int main()
{

	// Körper:
	const float MASSE = 10;
	const Vektor START_POSITION = {0, 0};
	const Vektor START_GESCHWINDIGKEIT = {10, 10};
	Koerper koerper(MASSE, START_POSITION, START_GESCHWINDIGKEIT);
	// Parametrierung der auf den Körper wirkende Kräfte:
	const Vektor BESCHLEUNIGUNG_GRAVITATION = {0, -9.81}; // [m/s^2]
	const float REIBUNGSKOEFFIZIENT = -5;				  // [kg/s]
	// Simulation:
	const float dt = 0.1;
	for (int i = 0; i >= 0; i++)
	{
		cout << setw(3) << fixed << i + 1 << ".Position des Koerpers: " << koerper.text() << endl;
		// Bestimmung der neuen Beschleunigung
		Vektor beschleunigung;
		beschleunigung = koerper.liefereGeschwindigkeit();
		beschleunigung.mul(REIBUNGSKOEFFIZIENT / koerper.liefereMasse());
		beschleunigung.add(BESCHLEUNIGUNG_GRAVITATION);
		// Ermittlung der neuen Position und neuen Geschwindigkeit
		koerper.bewegen(beschleunigung, dt);
		if (koerper.lieferePosition().y <= 0)
		{
			break;
		}
	}
}
