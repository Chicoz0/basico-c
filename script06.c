#include <stdio.h>

// essa funcao espera a matriz de qlq tamanho 
// MAS com dimensao 2 (sempre devemos dar a dimensao)
int show(int matriz[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matriz[i][j] = i;
            printf("|%d|", matriz[i][j]);
        }
        printf("\n");
    }

}

int main() {
    int matriz[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matriz[i][j] = i;
        }
    }

    show(matriz);
    return 0;
}