#include <iostream>

using namespace std;

class Data{
    private:
        int dia;
        int mes;
        int ano;
        int quantDias;
        
    public:

        Data();
        Data(int dia, int mes, int ano);

        void setDia(int dia);            
        void setMes(int mes);           
        void setAno(int ano);
        int getDia();    
        int getMes();
        int getAno();


        void avancarDia();

        int getDaysMonth(int mes);
};

Data::Data(){// construcao padrao

}

Data::Data(int dia, int mes, int ano){// construtor
    if(dia > 31 || dia < 1){// dia invalido
        cout << "Atributo dia Inválido\n";
        this -> dia = 1;
    }else{
        this -> dia = dia;
    }
    if(mes > 12 || mes < 1){// mes invalido
        cout << "Atributo mês Inválido\n";
        this -> mes = 1;
    }else{
        this -> mes = mes;
    }
    if(ano > 2021){// ano invalido
        cout << "Atributo ano Inválido\n";
        this -> ano = 1;
    }else{
        this -> ano = ano;
    }
}

void Data::setDia(int dia){
    this -> dia;
}
void Data::setMes(int mes){
    this -> mes;
}
void Data::setAno(int ano){
    this -> ano ;
}
void Data::avancarDia(){
    dia++; 
    if(dia > getDaysMonth(mes)){
        dia = 1; 
        mes++;
    }
    if(mes > 12){
        mes = 1;
    } 
}

int Data::getDia(){
    return this -> dia;
}
int Data::getMes(){
    return this -> mes;
}
int Data::getAno(){
    return this -> ano;
}


int Data::getDaysMonth(int mes){
    switch (mes){
        case 1: // janeiro
            return 31;
        case 2: // fevereiro
            return 28;
        case 3: // março
            return 31;
        case 4: // abril
            return 30;
        case 5: // maio
            return 31;
        case 6: // junho
            return 30;  
        case 7: // julho
            return 31;   
        case 8: // agosto
            return 31;
        case 9: // setembro
            return 30;  
        case 10: // outubro
            return 31;   
        case 11: // novembro
            return 30;
        case 12: // dezembro
            return 31;
    }
}


int main(){

    
    int dia, mes, ano;
    int quantDias;

    cin >> dia;
    cin >> mes;
    cin >> ano;

    Data d1 = Data(dia, mes, ano);

    cin >> quantDias;

    for(int i = 0; i < quantDias; i++){
        d1.avancarDia();
    }
    
    if(d1.getDia() < 10){
        cout << "0" << d1.getDia() << "/" << d1.getMes() << "/" << d1.getAno() << endl;
    }else if(d1.getMes() < 10 && d1.getMes() > 10){
        cout << d1.getDia() << "/" << "0" << d1.getMes() << "/" << d1.getAno() << endl;
    }else if(d1.getDia() < 10 && d1.getMes() < 10){
        cout << "0" << d1.getDia() << "/" << "0" << d1.getMes() << "/" << d1.getAno() << endl;
    }else{
        cout << d1.getDia() << "/" << d1.getMes() << "/" << d1.getAno() << endl;
    }

    return 0;

}