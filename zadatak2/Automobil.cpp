#include "Automobil.hpp"

const char* const TIP_MOTOR_DIZEL = "dizel";
const char* const TIP_MOTOR_BENZIN = "benzin";
const char* const TIP_MOTOR_NEDEFINISANO = "nedefinisano";

const char* const tipMotoraKaoTekst(TipMotora tipm)
{
    switch(tipm)
    {
    case DIZEL:
        return TIP_MOTOR_DIZEL;
    case BENZIN:
        return TIP_MOTOR_BENZIN;
    default:
        return TIP_MOTOR_NEDEFINISANO;
    }
}

Automobil::Automobil():potrosnja(8.5) {}

Automobil::Automobil(TipMotora tipm, int snag, int kap, double potr):motor(tipm, snag), rezervoar(kap), potrosnja(potr) {}

Automobil::Automobil(const Automobil &aut):motor(aut.getTipMotora(), aut.getSnagaMotora()), rezervoar(aut.getKapacitetRezervoara()), potrosnja(aut.getPotrosnja()) {}

TipMotora Automobil::getTipMotora()const
{
    return motor.getTip();
}

int Automobil::getSnagaMotora()const
{
    return motor.getSnaga();
}

int Automobil::getKapacitetRezervoara()const
{
    return rezervoar.getKapacitet();
}

double Automobil::getPotrosnja()const
{
    return potrosnja;
}

double Automobil::getMaksimalniDomet()const
{
    return 100 * getKapacitetRezervoara() / getPotrosnja() ;
}

void Automobil::prikazi()const
{
    cout<<setw(12)<<tipMotoraKaoTekst(getTipMotora())<<" ";
    cout<<setw(4)<<getSnagaMotora()<<" HP ";
    cout<<setw(3)<<getKapacitetRezervoara()<<" L ";
    cout<<setw(4)<<getPotrosnja()<<" L/100 km ";
    cout<<setw(6)<<setprecision(4)<<getMaksimalniDomet()<<" km";
    cout<<endl;
}
