//arrays e matrizes -> vetores uni e bidimensionais

#include <stdio.h>

int main() {
    int vetor[8];

    for (int i = 0; i < 8; i++) {
        vetor[i] = i*3/2;
    }

    // nao declaramos nenhum tamanho, mas ela vai ter 
    // a posicao inciial do vetor de 8 posicoes acima
    int *y = vetor;

    for (int i = 0; i < 8 ; i++) {
        vetor[i] = i;
        printf("y: %d\n",y[i]);
    }

}