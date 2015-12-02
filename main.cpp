#include "zaglavlje.hpp"

int main()
{
    Sat sat;

    do{
        int val,operacija=sat.meni()-1;
        switch(operacija){
            case PODESI_SATE:
                cout<<"Podesi sate-> ";
                cin>>val;
                sat.setSate(val);
                break;
            case PODESI_MINUTE:
                cout<<"Podesi minute-> ";
                cin>>val;
                sat.setMinute(val);
                break;
            case PODESI_SEKUNDE:
                cout<<"Podesi sekunde-> ";
                cin>>val;
                sat.setSekunde(val);
                break;
            case DODAJ_SATE:
                cout<<"Dodaj sate-> ";
                cin>>val;
                sat.addSate(val);
                break;
            case DODAJ_MINUTE:
                cout<<"Dodaj minute-> ";
                cin>>val;
                sat.addMinute(val);
                break;
            case DODAJ_SEKUNDE:
                cout<<"Dodaj sekunde-> ";
                cin>>val;
                sat.addSekunde(val);
                break;
            case PRIKAZI_SATE:
                sat.showSate();
                break;
            case PRIKAZI_MINUTE:
                sat.showMinute();
                break;
            case PRIKAZI_SEKUNDE:
                sat.showSekunde();
                break;
            case PRIKAZI_VREME:
                sat.vreme();
                break;
            case KRAJ:
                return 0;
                break;
        }
    }while(1);

    return 0;
}
//ovo je proba 
