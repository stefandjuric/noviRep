#include "Automobil.hpp"

int main()
{
    Automobil automobilA, automobilB(DIZEL, 120, 40, 7.2), automobilC(automobilA);

    cout<<"Automobili:"<<endl;
    automobilA.prikazi();
    automobilB.prikazi();
    automobilC.prikazi();

    return 0;
}
