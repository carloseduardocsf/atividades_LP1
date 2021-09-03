#include <iostream>

using namespace std;

int main(){

    int aquatico, predador, domestico, voa, noturno;

    cin >> aquatico;
    cin >> predador;
    cin >> domestico;
    cin >> voa;
    cin >> noturno;

    if(aquatico == 0 && predador == 1 && domestico == 0 && voa == 1 && noturno == 1){
        cout << "coruja";
    }else if(aquatico == 0 && predador == 0 && domestico == 0 && voa == 1 && noturno == 0){
        cout << "pardal";
    }else if(aquatico == 0 && predador == 0 && domestico == 1 && voa == 1 && noturno == 0){
        cout << "galinha";
    }else if(aquatico == 0 && predador == 1 && domestico == 0 && voa == 0 && noturno == 0){
        cout << "ema";
    }else if(aquatico == 0 && predador == 1 && domestico == 0 && voa == 1 && noturno == 0){
        cout << "falcão";
    }else if(aquatico == 1 && predador == 0 && domestico == 0 && voa == 1 && noturno == 0){
        cout << "pato";
    }else if(aquatico == 1 && predador == 1 && domestico == 0 && voa == 0 && noturno == 0){
        cout << "pinguim";
    }else if(aquatico == 1 && predador == 1 && domestico == 0 && voa == 1 && noturno == 0){
        cout << "gaivota";
    }else if(aquatico == 1 && predador == 1 && domestico == 0 && voa == 1 && noturno == 1){
        cout << "garça";
    }else if(aquatico == 0 && predador == 0 && domestico == 0 && voa == 0 && noturno == 0){
        cout << "avestruz";
    }


    return 0;

}