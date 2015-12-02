#include "zaglavlje.hpp"

Sat::Sat(){
    sati=0;
    minuta=0;
    sekundi=0;
}

void Sat::setSate(int s){
    if(s<0){
        stanjeOperacije(1);
        return;
    }else{
        sati=s;
        stanjeOperacije(0);
        return;
    }
}

void Sat::setMinute(int m){
    if(m<0 || m>59){
        stanjeOperacije(1);
        return;
    }else{
        minuta=m;
        stanjeOperacije(0);
        return;
    }
}

void Sat::setSekunde(int s){
    if(s<0 || s>59){
        stanjeOperacije(1);
        return;
    }else{
        sekundi=s;
        stanjeOperacije(0);
        return;
    }
}

void Sat::addSate(int s){
    if((sati+s)<0){
        stanjeOperacije(1);
        return;
    }else{
        sati+=s;
        stanjeOperacije(0);
        return;
    }
}

void Sat::addMinute(int m){
    if(m<0){
        stanjeOperacije(1);
        return;
    }else{
        if(m>59)
            addSate(m/60);

        int ostalo=m-((m/60)*60);

        if((minuta+ostalo)>59){
            addSate(1);
            minuta=(minuta+ostalo)-60;
            stanjeOperacije(0);
            return;
        }else{
            minuta+=ostalo;
            stanjeOperacije(0);
            return;
        }
        stanjeOperacije(1);
        return;
    }
    stanjeOperacije(1);
}

void Sat::addSekunde(int s){
    if(s<0){
        stanjeOperacije(1);
        return;
    }else{
        if(s>59)
            addMinute(s/60);

        int ostalo=s-((s/60)*60);

        if((sekundi+ostalo)>59){
            addMinute(1);
            sekundi=(sekundi+ostalo)-60;
            stanjeOperacije(0);
            return;
        }else{
            sekundi+=ostalo;
            stanjeOperacije(0);
            return;
        }
    }
    stanjeOperacije(1);
}

void Sat::showSate(){
    cout<<"SATI-> "<<sati<<endl;
}

void Sat::showMinute(){
    cout<<"MINUTA-> "<<minuta<<endl;
}

void Sat::showSekunde(){
    cout<<"SEKUNDI-> "<<sekundi<<endl;
}

void Sat::vreme(){
    cout<<"VREME-> "<<sati<<":"<<minuta<<":"<<sekundi<<endl;
}

int Sat::meni()const{
    int n;
    cout<<"==================================="<<endl;
    cout<<"IZABERITE OPERACIJU"<<endl;
    cout<<"\t 1. Podesi sate"<<endl;
    cout<<"\t 2. Podesi minute"<<endl;
    cout<<"\t 3. Podesi sekunde"<<endl;
    cout<<"\t 4. Dodaj sate"<<endl;
    cout<<"\t 5. Dodaj minute"<<endl;
    cout<<"\t 6. Dodaj sekunde"<<endl;
    cout<<"\t 7. Prikazi sate"<<endl;
    cout<<"\t 8. Prikazi minute"<<endl;
    cout<<"\t 9. Prikazi sekunde"<<endl;
    cout<<"\t10. Prikazi vreme "<<endl;
    cout<<"\t11. Kraj "<<endl;
    cout<<"==================================="<<endl;
    cout<<"OPERACIJA-> ";
    cin>>n;
    cout<<"***********************************"<<endl;
    return n;
}

void Sat::stanjeOperacije(int i){
    if(i==0)
        cout<<"OPERACIJA JE IZVRSENA"<<endl;
    else
        cout<<"OPERACIJA NIJE IZVRSENA"<<endl;
}
