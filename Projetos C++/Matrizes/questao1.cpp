//1.Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
#include <iostream>

using namespace std;

void preencher_matriz(int matriz[4][4], int linha, int coluna){
    for(int i = 0; i<linha; i++){
        for (int j = 0; j<coluna; j++){
            cout << "Digite um elemento da Matriz: ";
            cin>> matriz[i][j];
        }
    }
}
void imprimir_matriz(int matriz[4][4],int linha, int coluna){
    for(int i = 0; i<linha; i++){
        for (int j = 0; j<coluna; j++){
            cout << matriz[i][j] << " ";
        }
        cout<< endl;
    }
}
int maior_que(int matriz[4][4],int linha, int coluna, int num){
    int contador = 0;
    for(int i = 0; i<linha; i++){
        for (int j = 0; j<coluna; j++){
            if (matriz[i][j] > num){
                contador++;
            }
        }
    }
    return contador;
}
int main(){
    const int linha = 4;
    const int coluna = 4;
    const int numero = 10;
    int matriz[linha][coluna];

    preencher_matriz(matriz, linha, coluna);
    imprimir_matriz(matriz, linha, coluna);
    cout << "O Numero de valores maiores que " << numero << " sao: " << maior_que(matriz, linha, coluna, numero);
}