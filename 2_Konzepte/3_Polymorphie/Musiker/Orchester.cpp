#include "Orchester.h"

Orchester::Orchester(void)
{
    std::cout << "Konstruktor Orchester()" << std::endl;
}

Orchester::~Orchester()
{
    std::cout << "Destruktor: ~Orchester()" << std::endl;

     for (unsigned int i = 0; i < musiker.size(); i++)
    {
       delete musiker[i];
    }

}

void Orchester::spielen() const
{

    for (unsigned int i = 0; i < musiker.size(); i++)
    {
        musiker[i]->spielen();
    }
}

void Orchester::hinzufuegen(Musiker const *musiker)
{
    this->musiker.push_back(musiker);
}
