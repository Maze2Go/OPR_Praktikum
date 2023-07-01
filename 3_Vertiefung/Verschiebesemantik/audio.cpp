/**
 * OPR-Praktikum SS 2013
 * Aufgabe 8
 * @author Thomas Mahr
 */

#include "audio.h"
#include <cstring>
#include <iostream>
#include <random>
#include <sstream>
using namespace std;

bool Audio::aktiviereKonsolenausgabe = true;

Audio::Audio(unsigned long int laenge) : laenge(laenge)
{
	Audio::log("Audio()\n");
	amplitude = new int[laenge];
}

Audio::Audio(const Audio &a) : laenge(a.laenge)
{
	Audio::log("Audio(const Audio&)\n");
	amplitude = new int[laenge];
	memcpy(amplitude, a.amplitude, laenge * sizeof(int));
}

Audio::~Audio()
{
	Audio::log("~Audio()\n");
	if (amplitude != nullptr)
	{
		delete[] amplitude;
	}
}

// Verschiebekonstruktor
Audio::Audio(Audio &&a1) : laenge(a1.laenge), amplitude(a1.amplitude)
{
	Audio::log("Audio(&&)\n");
	a1.amplitude = nullptr;
	a1.laenge = 0;
}

Audio &Audio::operator=(const Audio &a)
{
	if (this != &a)
	{
		Audio::log("operator=(Audio&)\n");
		if (amplitude != nullptr)
		{
			delete[] amplitude;
		}
		laenge = a.laenge;
		amplitude = new int[laenge];
		memcpy(amplitude, a.amplitude, laenge * sizeof(int));
	}
	return *this;
}

Audio &Audio::operator=(Audio &&other)
{
	if (this != &other)
	{
		Audio::log("Audio=(&&)\n");

		if(amplitude != nullptr)
		{
			delete [] amplitude;
		}

		amplitude = other.amplitude;
		laenge = other.laenge;		
		other.amplitude = nullptr;
		other.laenge = 0;
	}
	else
	Audio::log("Verschieben auf eigenes Objekt nicht möglich!");

	return *this;
}

std::string Audio::text() const
{
	int i = 0;
	std::stringstream s;
	for (unsigned long int x = 0; x < laenge; x++)
	{
		s << amplitude[i++] << " ";
	}
	return s.str();
}

Audio *Audio::erzeugeRauschSignal(unsigned long int laenge)
{
	Audio *audio = new Audio(laenge);

 	std::mt19937 engine(rand());
	
	// Erzeugt Zufallswerte zwischen -1000 und +1000
	std::uniform_int_distribution<int> dist(-1000,+1000);

	for (unsigned long int i = 0; i < laenge; i++)
	{
		audio->amplitude[i] = dist(engine);
	}

	return audio;
}
