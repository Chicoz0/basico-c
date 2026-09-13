/* Linguagem de propósito geral

Recomendada quando requisitos funcionais envolvem
bastante desempenho pois permite manipulação de bytes
e endereços de memória

* Funções = Rotinas = procedimentos

* Standard library chama-se stdio.h 

*/

#include <stdio.h>

int era_main() {
    printf("Hello world\n");
    return 0;
}

// Não precisa do void, mas bom botar.

// Tipos

/*
char = 1 byte (ASC II e -127 a 128)
...
*/

// Sizeof revela o tamanho em bytes

int era_main_2() {
    // Usamos %zu porque o sizeof retorna um tipo chamado size_t
    printf("Tamanho do short int: %zu bytes (%zu bits)\n", sizeof(short int), sizeof(short int) * 8);
    printf("Tamanho do int:       %zu bytes (%zu bits)\n", sizeof(int), sizeof(int) * 8);
    printf("Tamanho do long int:  %zu bytes (%zu bits)\n", sizeof(long int), sizeof(long int) * 8);
    
    return 0;
}

// # define XXX valor   
// é uma forma de definir variáveis fixas, 
// PC otimiza muito bem isso e roda mais rápido que VAR normal

#define EXEMPLO 100

// printf() pode ter placeholders dentro pra variáveis
// esses placeholders dependem do tipo da var
// ex.: %c = char
// %d pra int
// ...

int i = 0;
int main() {
    while (i<5) {
        printf("%d\n", i);
        i++;
    }

    for (int abc = 0;  abc < 10; abc++) {
        printf("abc vale %d\n", abc);
    }
    return 0;
}
