//4.Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a posição que ele se encontra.

#include <iostream>

using namespace std;

void preencher_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout<< "Informe um Numero: \n";
        cin>> vetor[i];
    }
}
void imprimir_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout<< vetor[i]<< " ";
    }
}
void imprimir_maior_e_posicao(int vetor[], int tam){
    int maior = 0;
    int posicao = 0;
    for(int i = 0; i<tam; i++){
        if(maior < vetor[i]){
            maior = vetor[i];
            posicao = i+1;
        }
    }
    cout<< "O Maior numero é: "<< maior << " e sua posição é: " << posicao;
}

int main(){

    const int tam = 10;
    int vet1[tam];

    preencher_vetor(vet1, tam);
    imprimir_vetor(vet1, tam);
    cout << endl;
    imprimir_maior_e_posicao(vet1, tam);
}