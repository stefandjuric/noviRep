#ifndef AUTOMOBIL_HPP_INCLUDED
#define AUTOMOBIL_HPP_INCLUDED

#include <iostream>
using namespace std;
#include <iomanip>

#include "Motor.hpp"
#include "Rezervoar.hpp"

class Automobil
{
private:
    Motor motor;
    Rezervoar rezervoar;
    double potrosnja;
public:
    Automobil();
    Automobil(TipMotora, int, int, double);
    Automobil(const Automobil&);
    TipMotora getTipMotora()const;
    int getSnagaMotora()const;
    int getKapacitetRezervoara()const;
    double getPotrosnja()const;
    double getMaksimalniDomet()const;
    void prikazi()const;
};

#endif // AUTOMOBIL_HPP_INCLUDED
