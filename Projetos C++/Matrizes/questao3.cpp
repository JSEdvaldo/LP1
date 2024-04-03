//4.Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas.
#include <iostream>

using namespace std;

void preencher_matriz(int matriz[4][4], int linha, int coluna){
    for(int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            cout << "Digite um elemento da Matriz: ";
            cin>> matriz[i][j];
        }
    }
}
void imprimir_matriz(int matriz[4][4],int linha, int coluna){
    for(int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            cout << matriz[i][j] << " ";
        }
        cout<< endl;
    }
}
void maiores_elementos(int matriz1[4][4], int matriz2[4][4], int matriz3[4][4], int linha, int coluna){
    for(int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            if (matriz1[i][j] >= matriz2[i][j]){
                matriz3[i][j] = matriz1[i][j];
            }else{
                matriz3[i][j] = matriz2[i][j];
            }    
        }
    }
}

int main(){
    const int linha = 4;
    const int coluna = 4;
    int matriz1[linha][coluna];
    int matriz2[linha][coluna];
    int matriz3[linha][coluna];

    preencher_matriz(matriz1, linha, coluna);
    preencher_matriz(matriz2, linha, coluna);
    imprimir_matriz(matriz1, linha, coluna);
    cout << endl;
    imprimir_matriz(matriz2, linha, coluna);
    cout << endl;
    maiores_elementos(matriz1, matriz2, matriz3, linha, coluna);
    imprimir_matriz(matriz3, linha, coluna);
}