#include <iostream>

using namespace std;

void preencher_vetor(int vetor[], int tam){
        for(int i = 0; i<tam; i++){
                cout<< "Informe um Numero: \n";
                cin>> vetor[i];
        }
}
void somar_vetores(int vetor_1[], int vetor_2[], int vetor_3[], int tam){
        for(int i = 0; i<tam; i++){
                vetor_3[i] = vetor_1[i] + vetor_2[i];
        }
}
void imprimir_vetor(int vetor[], int tam){
        for(int i = 0; i<tam; i++){
                cout<< vetor[i]<< " ";
        }
}

int main(){
    int vetor_1 [5];
    int vetor_2 [5];
    int vetor_3 [5];
    int tam = 5;

    preencher_vetor (vetor_1, tam);
    preencher_vetor (vetor_2, tam);
    somar_vetores (vetor_1, vetor_2, vetor_3, tam);
    imprimir_vetor (vetor_3, tam);
}