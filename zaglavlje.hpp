#ifndef SAT_H_INCLUDED
#define SAT_H_INCLUDED

#include <iostream>
using namespace std;

enum Operacije{PODESI_SATE,PODESI_MINUTE,PODESI_SEKUNDE,
                DODAJ_SATE,DODAJ_MINUTE,DODAJ_SEKUNDE,
                PRIKAZI_SATE,PRIKAZI_MINUTE,PRIKAZI_SEKUNDE,PRIKAZI_VREME,
                KRAJ};

class Sat{
    private:
        int sati,minuta,sekundi;
    public:
        Sat();

        void setSate(int);
        void setMinute(int);
        void setSekunde(int);

        void addSate(int);
        void addMinute(int);
        void addSekunde(int);

        void showSate();
        void showMinute();
        void showSekunde();

        void vreme();
        int meni()const;
        void stanjeOperacije(int);
};

#endif // SAT_H_INCLUDED
