//3. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.

#include <iostream>

using namespace std;

void preencher_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout<< "Informe um Numero: \n";
        cin>> vetor[i];
    }
}
int procurar_par(int vetor[], int tam){
    int contador = 0;
    for(int i = 0; i<tam; i++){
        if((vetor[i] % 2) == 0){
            contador++;
        }
    }
    return contador;
}
void imprimir_vetor(int vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout<< vetor[i]<< " ";
    }
}

int main(){

    const int tam = 10;
    int vet1[tam];

    preencher_vetor(vet1, tam);
    cout << endl;
    cout<< "Esse conjunto contem " << procurar_par(vet1, tam) << " numero(s) par(es)!";

}