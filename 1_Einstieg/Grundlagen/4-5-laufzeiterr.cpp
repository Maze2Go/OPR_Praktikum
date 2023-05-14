#include <iostream>

using namespace std;

int main(void)
{
    int array[20];
    array[10] = 4;

    cout << "test123: " << array[10] << endl;

    array[20] = 10; 
    cout << "test1234: " << array[20] << endl;
}
