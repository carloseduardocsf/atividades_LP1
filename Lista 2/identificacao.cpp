#include <iostream>
#include <string>

using namespace std;

typedef struct Animais{
    string nome;
    int carac[5];
} tAnimais;

int main(){

    tAnimais animais[10] = {
        {"coruja", {0,1,0,1,1}},
        {"pardal", {0,0,0,1,0}},
        {"galinha", {0,0,1,1,0}},
        {"ema", {0,1,0,0,0}},
        {"falcão", {0,1,0,1,0}},
        {"pato", {1,0,0,1,0}},
        {"pinguim", {1,1,0,0,0}},
        {"gaivota", {1,1,0,1,0}},
        {"garça", {1,1,0,1,1}},
        {"avestruz", {0,0,0,0,0}}
    };
    int aquatico, predador, domestico, voa, noturno;

    cin >> aquatico;
    cin >> predador;
    cin >> domestico;
    cin >> voa;
    cin >> noturno;

    for(int i = 0; i < 10; i++){
        if(aquatico == animais[i].carac[0] && predador == animais[i].carac[1] && domestico == animais[i].carac[2] && voa == animais[i].carac[3] && noturno == animais[i].carac[4]){
            cout << animais[i].nome;
        }
    }


    return 0;

}