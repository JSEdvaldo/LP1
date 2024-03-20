//2. Ler um conjunto de números reais, armazenando-o em um vetor e calcular o quadrado das componentes deste vetor, 
//armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos

#include <iostream>

using namespace std;

void preencher_vetor(float vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout<< "Informe um Numero real: \n";
        cin>> vetor[i];
    }
}
float calcula_quadrado(float vetor[], float aux[], int tam){
    for(int i = 0; i<tam; i++){
        aux[i] = vetor[i] * vetor[i];
    }
}
void imprimir_vetor(float vetor[], int tam){
    for(int i = 0; i<tam; i++){
        cout<< vetor[i]<< " ";
    }
}

int main(){

    const int tam = 10;
    float vet1[tam];
    float aux[tam];

    preencher_vetor(vet1, tam);
    imprimir_vetor(vet1, tam);
    cout << endl;
    calcula_quadrado(vet1, aux, tam);
    imprimir_vetor(aux, tam);
}