// Ponteiro é uma variável cujo valor é
// um endereço de memória onde tem informação


#include <stdio.h>

int main() {

    int x = 10;

    // estamos dizendo q o nome da VAR é ptr
    // e essa VAR é um ponteiro
    int *ptr;

    // endereco de x armazenado na variavel ptr
    ptr = &x;

    // y vai ter o valor que ptr aponta
    int y = *ptr;

    printf("x: %d\nptr: %p\n y: %d\n", x, ptr, y);

}



// ponteiros permitem apontar de um lugar para outro sem copiar
// quantidades enormes de dados, apenas reapontando


// ...", ptr) o endereço da variavel apontada
// ...", &ptr) o endereço do ponteiro
// ...", *ptr) o valor da variável apontada