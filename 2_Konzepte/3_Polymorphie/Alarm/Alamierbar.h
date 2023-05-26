#include <string>

class Alarmierbar
{
    private:
    std::string name;


    public:
    virtual ~Alarmierbar();
    virtual void alarmieren() = 0;
    virtual std::string liefereName()const = 0 ;
    virtual bool istAlamiert() = 0;
    virtual void alarmZuruecksetzen() = 0;


};