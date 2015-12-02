#include "Motor.hpp"

Motor::Motor():tip(BENZIN), snaga(100) {}

Motor::Motor(TipMotora tipm, int snag):tip(tipm), snaga(snag) {}

Motor::Motor(const Motor& mot):tip(mot.tip), snaga(mot.snaga) {}

TipMotora Motor::getTip()const
{
    return tip;
}

int Motor::getSnaga()const
{
    return snaga;
}
//izmjenaa u GitHub
