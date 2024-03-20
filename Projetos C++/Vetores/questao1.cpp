//1.Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos: 
//Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7. 
//Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma. 
//Modifique o vetor na posição 4, atribuindo a esta posição o valor 100. 
//Mostre na tela cada valor do vetor A, um em cada linha.

#include <iostream>

using namespace std;

void imprimir_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout<< vetor[i]<< endl;
    }
}

int main(){
    const int tam = 6;
    int A[tam];
    int soma = 0;

    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    soma = A[0] + A[1] + A[5];
    cout << "O resultado da soma e: " << soma;

    A[3] = 100;

    imprimir_vetor(A, tam);
}