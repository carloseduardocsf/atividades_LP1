#include <iostream>
#include <string>

using namespace std;

class Funcionario{
    public:
        string nome;
        string sobrenome;
        float salario_mensal;

        float getSalarioAnual(float salario_mensal){
            return salario_mensal * 12;
        }
};

int main(){

    int N, i;
    Funcionario funcionario;

    cin >> N;
    getchar();

    Funcionario func[N];
    for(int i = 0; i < N; i++){
        getline(cin, func[i].nome);
        getline(cin, func[i].sobrenome);
        cin >> func[i].salario_mensal;
        getchar();
    }

    float getSalarioAnual(float salario_mensal);

    for(int i = 0; i < N; i++){
        cout << func[i].nome << " " <<func[i].sobrenome << " - " << func[i].salario_mensal << " - " << func[i].getSalarioAnual(func[i].salario_mensal) << endl; 
        
    }

    
    return 0;

}




        