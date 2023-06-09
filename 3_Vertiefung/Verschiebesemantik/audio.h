/**
 * OPR-Praktikum SS 2013
 * Aufgabe 8
 * @author Thomas Mahr
 */

#include <iostream>
#include <sstream>

// Stellt ein Mono-Audiosignal dar
class Audio
{
private:
	// Länge des Audiosignals
	unsigned long int laenge;

	// Zeiger auf Amplitudenfeld
	int *amplitude;

public:
	// Konstruktor
	Audio(unsigned long int laenge = 0);

	// Kopierkonstruktor
	Audio(const Audio &);

	// Destruktor
	virtual ~Audio();

	// Zuweisung per Kopie
	void zuweisung(const Audio &);

	// Textuelle Darstellung des Audiosignals
	std::string text() const;

	//= Operator
	Audio &operator=(const Audio &a);
	Audio &operator=(Audio &&other);

		// Verschiebekonstruktor
		Audio(Audio &&a1);

	// Steuert die Ausgabe über Konsole
	static bool aktiviereKonsolenausgabe;

	// Gibt Text auf Konsole aus falls aktiviereKonsolenausgabe==true
	inline static void log(const std::string &s);

	// Erzeugt ein verrauschtes Audiosignal
	static Audio *erzeugeRauschSignal(unsigned long int laenge);
};

void Audio::log(const std::string &s)
{
	if (aktiviereKonsolenausgabe)
	{
		std::cout << s;
	}
}
