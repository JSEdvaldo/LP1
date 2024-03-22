//Faça uma programa que leia 2 vetores de tamanhos informados pelo usuario(podem ser diferentes).
//Gere um terceiro vetor que corresponda a concatenação dos outros 2.
#include <iostream>

using namespace std;

void preencher_vetor(int * vetor, int tam){
    for(int i = 0; i<tam; i++){
        cout<< "Informe o "<< i+1 <<" elemento:";
        cin >> vetor[i];
    }
}
 void imprimir_vetor(int vetor[], int tam){
    for (int i = 0; i < tam; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
}
void concat_vetor(int * vetor1, int tam1, int * vetor2, int tam2, int * vetor3){
    int contador = tam1;
    int maior = 0;
    if (tam1 > tam2)
        maior = tam1;
    else
        maior = tam2;

    for(int i = 0; i< maior; i++){
        if (i < tam1){
            vetor3[i] = vetor1[i];
        }
        if (i < tam2){
            vetor3[contador] = vetor2[i];
        }
        contador++;
        }
}
int main(){
    int tam1 = 0;
    int tam2 = 0;

    cout << "Digite o tamanho do primeiro Vetor!";
    cin >> tam1;
    int * vet1 = new int[tam1];
    preencher_vetor(vet1, tam1);
    cout << "Digite o tamanho do segundo Vetor!";
    cin >> tam2;
    int * vet2 = new int[tam2];
    preencher_vetor(vet2, tam2);
    int * vet3 = new int[tam1+tam2];
    concat_vetor(vet1, tam1, vet2, tam2, vet3);
    imprimir_vetor(vet1, tam1);
    imprimir_vetor(vet2, tam2);
    imprimir_vetor(vet3, tam1+tam2);
}