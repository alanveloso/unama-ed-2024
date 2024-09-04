#include <stdio.h>
#include <malloc.h>

int main(){
    int* y; // tipo ponteiro pra inteiro 
    int tamanhoDeInteiro = sizeof(int); 
    printf("Tamanho de inteiro: %i", tamanhoDeInteiro);
    printf("\n");
    void* pVoid;
    pVoid = malloc(tamanhoDeInteiro); // malloc retorna endreço
    printf("pVoid: %p", pVoid);
    printf("\n");
    y = (int *) pVoid; // convertendo de ponteiro de void para ponteiro para inteiro
    *y = 20;
    int z = sizeof(int);
    printf("*y=%i z=%i\n", *y, z);
    return 0;
}