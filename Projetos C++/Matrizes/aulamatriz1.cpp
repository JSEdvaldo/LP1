//Fazer um programa que gere e imprima uma matriz identidade de ordem 3.
// Matriz identidade é uma matriz quadrada (mesmo numero de linhas e colunas), 
//na qual os elementos da diagonal principal valem 1 e os demais valem 0.
#include <iostream>

using namespace std;

void preencher_matriz(int matriz[3][3], int linha, int coluna){
    for(int i = 0; i<linha; i++){
        for (int j = 0; j<coluna; j++){
            if(i==j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }
}
void imprimir_matriz(int matriz[3][3],int linha, int coluna){
    for(int i = 0; i<linha; i++){
        for (int j = 0; j<coluna; j++){
            cout << matriz[i][j] << " ";
        }
        cout<< endl;
    }
}

int main(){

    const int linha = 3;
    const int coluna = 3;
    int identidade[linha][coluna];

    preencher_matriz(identidade, linha, coluna);
    imprimir_matriz(identidade, linha, coluna);
    }