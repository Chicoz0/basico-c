#include <stdio.h>

int main() {
    
    int var = 15;
    int *ptr;
    ptr = &var;
    printf("conteudo de var = %d\n", var);
    printf("endereço de memoria de var: %p\n", &var);
    printf("conteudo apontando por ptr: %d\n", *ptr);
    printf("endereco de memoria q o ptr aponta %p\n", ptr);
    printf("endereco de memoria do ponteiro, o q ele aponta: %p\n", &ptr);

}