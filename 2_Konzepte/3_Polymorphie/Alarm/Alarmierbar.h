#include <string>

class Alarmierbar
{
    protected:
    std::string name;
    int objekt_id;


    
    virtual ~Alarmierbar();
    virtual void alarmieren() = 0;
    virtual std::string liefereName()const = 0 ;
    virtual bool istAlamiert() = 0;
    virtual void alarmZuruecksetzen() = 0;
};