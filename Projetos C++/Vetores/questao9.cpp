//9.Faça um programa que leia uma quantidade de números determinada pelo usuário e armazene em um vetor. 
//Crie outros dois vetores, um para os valores pares e outro para os ímpares.
#include <iostream>

using namespace std;

void preencher_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout<< "Informe um Numero: \n";
        cin>> vetor[i];
    }
}
void procurar_par_impar(int vetor1[], int vetor2[], int vetor3[], int tam){
    int contadorpar = 0;
    int contadorimpar = 0;
    for(int i = 0; i<tam; i++){
        if((vetor1[i] % 2) == 0){
            contadorimpar++;
        }else{
            contadorimpar++;
        }
    }
}
void imprimir_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout<< vetor[i]<< " ";
    }
}
int main(){

    int tam = 0;
    cout << "Informe a quantidade de numeros a serem armazenados:";
    cin >> tam;
    int vet[tam];
    int par[tam];
    int impar[tam];
    preencher_vetor(vet, tam);
    procurar_par_impar(vet, par, impar, tam);
    imprimir_vetor(vet, tam);
    imprimir_vetor(par, tam);
    imprimir_vetor(impar, tam);
}