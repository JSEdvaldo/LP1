//6. Ler um vetor de 10 elementos. 
//Crie um segundo vetor, com todos os elementos na ordem inversa, ou seja, 
//o último elemento passará a ser o primeiro, o penúltimo será o segundo e assim por diante. 
//Imprima os dois vetores. 
#include <iostream>

using namespace std;

void preencher_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout<< "Informe um Numero: \n";
        cin>> vetor[i];
    }
}
void inveter_vetor(int vetor1[], int vetor2[], int tam){
    for(int i = 0; i<tam; i++){
        vetor2[i] = vetor1[tam -1 - i];
    }
}
void imprimir_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout<< vetor[i]<< " ";
    }
    cout<<endl;
}
int main(){

    const int tam = 10;
    int vet1[tam];
    int vet2[tam];

    preencher_vetor(vet1, tam);
    inveter_vetor(vet1, vet2, tam);
    imprimir_vetor(vet1, tam);
    imprimir_vetor(vet2, tam);
}