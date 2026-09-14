// strings e alocacao dinamica de memoria

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// strings = array do tipo char
// ex. curioso:

char *exemplo = "Hello!";

// ou

char exemplo2[7] = "Hello2";
char exemplo3[10];
// strings tem q ter tamanho suficiente para armazenar
// o texto + "\0" (toda string acaba em \0)

int main() {

    printf(strlen(exemplo));
    printf(strlen(exemplo2));
    printf(strcpy(exemplo3, exemplo)); // copia uma string
    printf(strcat(exemplo2, exemplo3)); // concatena 2 str
    printf(strcmp(exemplo2, exemplo3)); // compara 2 strings


    char x[] = "2";
    int numero_x = atoi(x); // transforma string para inteiro

}