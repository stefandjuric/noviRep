#ifndef MOTOR_HPP_INCLUDED
#define MOTOR_HPP_INCLUDED

enum TipMotora {DIZEL, BENZIN};

class Motor
{
private:
    TipMotora tip;
    int snaga;
public:
    Motor();
    Motor(TipMotora, int);
    Motor(const Motor&);
    TipMotora getTip()const;
    int getSnaga()const;
};


#endif // MOTOR_HPP_INCLUDED
