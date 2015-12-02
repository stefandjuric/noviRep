#ifndef REZERVOAR_HPP_INCLUDED
#define REZERVOAR_HPP_INCLUDED

class Rezervoar
{
private:
    int kapacitet;
public:
    Rezervoar();
    Rezervoar(int);
    Rezervoar(const Rezervoar&);
    int getKapacitet()const;
};

#endif // REZERVOAR_HPP_INCLUDED
