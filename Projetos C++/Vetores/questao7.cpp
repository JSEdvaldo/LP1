//7. Faça um programa que leia e monte dois vetores de números inteiros com 20 números cada. 
//Depois de montados gere um terceiro vetor formado pela diferença dos dois vetores lidos, 
//um quarto vetor formado pela soma dos dois vetores lidos e por último um quinto vetor 
//formado pela multiplicação dos dois vetores lidos.
#include <iostream>

using namespace std;

void preencher_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout<< "Informe um Numero: \n";
        cin>> vetor[i];
    }
}
void subtrair_vetores(int vetor_1[], int vetor_2[], int vetor_3[], int tam){
        for(int i = 0; i<tam; i++){
                vetor_3[i] = vetor_1[i] - vetor_2[i];
        }
}
void somar_vetores(int vetor_1[], int vetor_2[], int vetor_3[], int tam){
        for(int i = 0; i<tam; i++){
                vetor_3[i] = vetor_1[i] + vetor_2[i];
        }
}
void multiplicar_vetores(int vetor_1[], int vetor_2[], int vetor_3[], int tam){
        for(int i = 0; i<tam; i++){
                vetor_3[i] = vetor_1[i] * vetor_2[i];
        }
}
void imprimir_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout<< vetor[i]<< " ";
    }
    cout<<endl;
}

int main(){
    const int tam = 20;
    int vet1[tam];
    int vet2[tam];
    int vet3[tam];
    int vet4[tam];
    int vet5[tam];

    preencher_vetor(vet1, tam);
    preencher_vetor(vet2, tam);
    subtrair_vetores(vet1, vet2, vet3, tam);
    somar_vetores(vet1, vet2, vet4, tam);
    multiplicar_vetores(vet1, vet2, vet5, tam);
    imprimir_vetor(vet1, tam);
    imprimir_vetor(vet2, tam);
    imprimir_vetor(vet3, tam);
    imprimir_vetor(vet4, tam);
    imprimir_vetor(vet5, tam);

}