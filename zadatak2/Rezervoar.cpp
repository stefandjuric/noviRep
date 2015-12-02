#include "Rezervoar.hpp"

Rezervoar::Rezervoar():kapacitet(50) {}

Rezervoar::Rezervoar(int kap):kapacitet(kap) {}

Rezervoar::Rezervoar(const Rezervoar& rez): kapacitet(rez.kapacitet) {}

int Rezervoar::getKapacitet()const
{
    return kapacitet;
}
