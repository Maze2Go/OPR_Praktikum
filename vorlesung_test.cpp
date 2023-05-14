#include <iostream>
#include <iomanip>

using namespace std;

class parent
{
    private:
    int value1 = 10;

    public:
    void printValue(void)
    {
        cout << "Value1: " << value1 << endl;
    }

};


class child1 : public parent
{
    private:
    int value1 = 100;

    public:
    void printValue(void)
    {
        cout << "Value1 from child1: " << value1 << endl;
    }

};

class child2 : public parent
{
    private:
    int value1 = 10;

    public:
    void printValue(void)
    {
        cout << "Value1 from child2: " << value1 << endl;
    }

};


int main(void)
{
    child1 child1;
    child2 child2;
    parent parent;

    parent.printValue();
    child1.printValue();
    child2.printValue();


}