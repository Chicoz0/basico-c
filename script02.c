#include<stdio.h>
#include "./func.h"

// N precisa pois tem func.h ja declarando isso
// e tbm logo abaixo a funcao existe antes de ser chamada
// mas ó, n quebra

int mult(int a, int b);

int mult(int a, int b) {
    return a*b;
}

int main() {
    int x = 10, y = 5;

    printf("resultado: %d\n", mult(x,y));
    return 0;
}

// Quando a função n retorna valor, 
// podemos chamar de procedimento

// se eu declarar a funcao mult dps de main, 
// ela só vai funcionar se eu declarar uma
// assinatura dela antes de main OU chamar func.h
// (tendo declarado la ne)

// O escopo das variaveis em funcoes sao apenas as funcoes
// em si, pode chamar de x, y sem problemas varias vzs se em 
// funcoes diferentes