//8.Dados dois vetores de tamanho N, faça um programa que diga se os mesmos possuem conteúdo igual.
#include <iostream>

using namespace std;

void preencher_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout<< "Informe um Numero: \n";
        cin>> vetor[i];
    }
}
bool comparar_vetor(int vetor1[], int vetor2[], int tam){
    for(int i = 0; i<tam; i++){
        if (vetor1[i] != vetor2[i]){
            return false;
        }
    }
    return true;
}
void imprimir_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout<< vetor[i]<< " ";
    }
}
int main(){

    const int tam = 3;
    int vet1[tam];
    int vet2[tam];

    preencher_vetor(vet1, tam);
    preencher_vetor(vet2, tam);
    if(comparar_vetor(vet1, vet2, tam)){
        cout << "Os vetores possuem contedo igual!";
    }else{
        cout << "Os vetores possuem conteudo diferente!";
    }
}