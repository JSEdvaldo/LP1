//6.Leia uma matriz de ordem n, informada pelo usuário. 
//Calcule a soma dos elementos que estão abaixo da diagonal principal.
#include <iostream>

using namespace std;

void preencher_matriz(int matriz[10][10], int ordem){
    for (int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            cout << "Digite um elemento para preencher a Matriz! ";
            cin >> matriz[i][j];
        }
    }
}
void imprimir_matriz(int matriz[10][10],int ordem){
    for(int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            cout << matriz[i][j] << " ";
        }
        cout<< endl;
    }
}
int somar_elementos_abaixo(int matriz[10][10],int ordem){
    int soma = 0;
    for (int i = 1; i < ordem; i++){
        for (int j = 0; j != i; j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main(){
    int ordem = 0;
    cout << "Digite a ordem da matriz a ser preenchida ";
    cin >> ordem;
    int matriz[ordem][ordem];
    preencher_matriz(matriz, ordem);
    cout<< endl;
    imprimir_matriz(matriz, ordem);
    cout<< endl;
    cout << "A soma dos elementos resulta em: "<< somar_elementos_abaixo(matriz, ordem);
}