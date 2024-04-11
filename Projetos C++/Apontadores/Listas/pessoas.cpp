#include <iostream>
using namespace std;

struct pessoa{
    string nome;
    int idade;
    string cpf;
    pessoa *prox;
};
void criar_pessoa(){

}
int main(){
    pessoa * l = new pessoa;
    cout << "Digite o nome da Pessoa";
    cin >> l->nome;
    
}