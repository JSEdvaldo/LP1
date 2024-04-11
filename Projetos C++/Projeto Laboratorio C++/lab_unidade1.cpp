#include <iostream>
using namespace std;

struct pontuacao{
    string *time;
    int *pontuacao;
};
void gerar_tabela_de_pontos(int tabela[20][38], int l_times, int c_rodadas){
    for (int i = 0; i < l_times; i++){
        for (int j = 0; j < c_rodadas; j++){
            tabela[i][j] = 0 ;
        }
    }
}
void imprimir_tabela_de_pontos(int tabela[20][38], int l_times, int c_rodadas){
    for (int i = 0; i < l_times; i++){
        for (int j = 0; j < c_rodadas; j++){
            cout << "|" << tabela[i][j] << "| " ;
        }
        cout << endl;
    }
}
int main(){
    const int linha = 20;
    const int coluna = 38;
    int tabela_de_pontos[linha][coluna];
    gerar_tabela_de_pontos(tabela_de_pontos, linha, coluna);
    imprimir_tabela_de_pontos(tabela_de_pontos, linha, coluna);
}