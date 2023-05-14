/*************************************************************************************************************
* Aufgabe:          Freunde                                                                                 *
* Abgabetermin:     24.04.2023                                                                              *
* Author:           Matthias Jechow (T. Mahr)                                                               *
**************************************************************************************************************/

#include "Person.h"
#include <iostream>
using namespace std;

void log(const Person& person) 
{
	cout << "(" << &person << ") " << person.text() << endl; 
}

int main() 
{
	Person daniel("Daniel Duesentrieb");
	daniel.setzeAnschrift(Anschrift("Raketenweg", "12", 90560, "Entenhausen"));
	log(daniel);
	
	Person donald("Donald Duck");
	donald.setzeAnschrift("Entengasse", "3a", 90560, "Entenhausen");
	log(donald);
	
	cout << "\nDaniel und Donald werden Freunde:\n";
	daniel.befreunden(donald);
	log(daniel);
	log(donald);

	Person person;
	cout << "\nEine geheimnisvolle Person befreundet sich mit allen anderen:\n";
	person.befreunden(daniel);
	person.befreunden(donald);
	log(person);
	
	Anschrift anschrift("Erpelhofer Str.", "12", 90560, "Entenhausen");
	cout << "\nDonald zieht um nach " << anschrift.text() << endl;
	donald.setzeAnschrift(anschrift);
	log(donald);


	//Von mir zum test von Selbsbefreundung
	cout << "Test-----------------\n"<< daniel.befreunden(daniel) << endl;

vector<Person> test123;

}
