//2.Leia uma matriz 5 x 5. Leia também um valor X. 
//O programa deverá fazer uma busca desse valor na matriz e, ao final, 
//escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.
#include <iostream>

using namespace std;

void preencher_matriz(int matriz[5][5], int linha, int coluna){
    for(int i = 0; i < linha; i++){
        for (int j = 0; j<coluna; j++){
            cout << "Digite um elemento da Matriz: ";
            cin>> matriz[i][j];
        }
    }
}
void imprimir_matriz(int matriz[5][5],int linha, int coluna){
    for(int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            cout << matriz[i][j] << " ";
        }
        cout<< endl;
    }
}
void localiza_numero(int matriz[5][5], int linha, int coluna){
    int numero = 0;
    bool aux = false;
    cout << "Digite o numero a ser procurado ! ";
    cin >> numero;
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            if (matriz[i][j] == numero){
                cout << "O numero encontra-se na linha " << i + 1 << " e na coluna " << j + 1;
                aux = true;
            }
        }
    }
    if (aux == false){
        cout << "Numero nao foi encontrado!";
    }
}
int main(){
    const int linha = 5;
    const int coluna = 5;
    int matriz[linha][coluna];

    preencher_matriz(matriz, linha, coluna);
    imprimir_matriz(matriz, linha, coluna);
    localiza_numero(matriz, linha, coluna);
}