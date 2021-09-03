#include <iostream>
#include <cstring>
using namespace std;

int main(){

    int N;
    int cont = 0;

    cin >> N;

    char vetA[N];
    for(int i = 0; i < N; i++){
        cin >> vetA[i];
        if(vetA[i] == vetA[i - 1] || vetA[i] == vetA[i - 2] || vetA[i] == vetA[i - 3] || vetA[i] == vetA[i - 4] 
        || vetA[i] == vetA[i - 5] || vetA[i] == vetA[i - 6] || vetA[i] == vetA[i - 7] || vetA[i] == vetA[i - 8]){
            vetA[i] = 0;
            cont++;
        }
    }

    for(int i = 0; i <= N - cont; i++){
        if(vetA[i] != 0){ //so vai printar valores diferentes de zero
            if(i == 0){
                cout << vetA[i] << " ";
            }else if(i == N - cont){
                cout << vetA[i];
            }else{
                cout << vetA[i] << " ";
            }
        }
    }

    return 0;

}