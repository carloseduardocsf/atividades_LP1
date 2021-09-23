#include <iostream>

using namespace std;

class Data{
    
    private:
        int dia;
        int mes;
        int ano;

    public:
        void setDia(int dia){
            cin >> dia;
            this -> dia = dia;
        }
        void setMes(int mes){
            cin >> mes;
            this -> mes = mes;
        }
        void setAno(int ano){
            cin >> ano;
            this -> ano = ano;
        }

        
        int getDia(){
            return this -> dia;
        }
        int getMes(){
            return this -> mes;
        }
        int getAno(){
            return this -> ano;
        }
        
};

int main(){

    Data data;
    int dia, mes, ano;
    string m;

    data.setDia(dia);
    data.setMes(mes);
    data.setAno(ano);

    if(data.getMes() == 1){
        m = "Janeiro";
    }else if(data.getMes() == 2){
        m = "Fevereiro";
    }else if(data.getMes() == 3){
        m = "Março";
    }else if(data.getMes() == 4){
        m = "Abril";
    }else if(data.getMes() == 5){
        m = "Maio";
    }else if(data.getMes() == 6){
        m = "Junho";
    }else if(data.getMes() == 7){
        m = "Julho";
    }else if(data.getMes() == 8){
        m = "Agosto";
    }else if(data.getMes() == 9){
        m = "Setembro";
    }else if(data.getMes() == 10){
        m = "Outubro";
    }else if(data.getMes() == 11){
        m = "Novembro";
    }else if(data.getMes() == 12){
        m = "Dezembro";
    }else{
        m = "Indefinido";
    }
    
    cout << data.getDia() << " de " << m << " de " << data.getAno() << "\n";


    return 0;

}