#pragma once
#include <string>
#include "Anschrift.h"
#include <vector>
#include <sstream>

class Person
{
    private:
    std::string _name;
    Anschrift _anschrift;
    std::vector<Person*> _freunde;
    public:
    Person (std::string const & name)
    {
        _name   = name;
    }
    Person ()
    {
        _name= "Anonymus";

    }
    std::string name ()
    {
        return this->_name;
    }
    Anschrift anschrift ()
    {
        return this->_anschrift;
    }
    int anzahlFreunde()const
    {
        return this->_freunde.size();
    }
    void setzeAnschrift (Anschrift anschrift)
    {
        _anschrift.setzeAnschrift(anschrift.strasse() , anschrift.hausnummer(), anschrift.postleitzahl(),anschrift.stadt());
    }
    void setzeAnschrift (std::string const& silnice, std::string const& cislodomu, int plz , std::string const& mesto)
    {
         _anschrift.setzeAnschrift(silnice , cislodomu, plz,mesto);
    }
    std::string text ()const
    {
        std::stringstream sstr ;
        std::string str;
        sstr << _name << "\n--- wohnhaft in "<< _anschrift.postleitzahl()<<" "<<_anschrift.stadt()<<", "<< _anschrift.strasse() 
        <<" "<<_anschrift.hausnummer()<< "\n";
        if (anzahlFreunde()==0)
        {
            sstr << "Anzahl freunde 0";
        }
        else 
        {
           for (unsigned int i =0;i<_freunde.size();i++)
            {
               sstr << "--- Freund "<< i+1 <<": "<< _freunde[i]->name() << "("<<_freunde[i]<<")"<<std::endl;
            }
        }
        str =sstr.str();
        return str;
    }
    void befreunden(Person& neuerFreund)
    {
        if(istFreund(neuerFreund)==1)
        {
        return;
        }else
        {
        this->_freunde.push_back(&neuerFreund);
        neuerFreund._freunde.push_back(this);
        }
    }
    bool istFreund(Person& Freund)
    {
        for (unsigned int i =0;i<_freunde.size();i++)
        {
            if(this->_freunde[i]==&Freund)
        return true;
        }
        return false;
    }
    Person *freund (int freunde)
    {
       return this->_freunde[freunde];
    }
};