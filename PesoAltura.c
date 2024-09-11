#include <stdio.h>
#include <malloc.h>

typedef struct{
    int peso;   // peso em quilogramas
    int altura; // altura em centimetros
} PesoAltura;

typedef int CHAVE;

int main() {
    PesoAltura pessoa;
    pessoa.peso = 95;
    pessoa.altura = 110;
    printf("Peso: %i\nAltura: %i\n", pessoa.peso, pessoa.altura);

    if (pessoa.altura > 110) {
        printf("Pode se divertir\n");
    } else {
        printf("Vá embora!\n");
    }

    printf("%i\n", (int) sizeof(PesoAltura));


    PesoAltura * p;

    p = (PesoAltura *) malloc(sizeof(PesoAltura));

    p->altura = 180;
    p->peso = 90;

    printf("Altura: %i", p->altura);
    printf("\n");
    printf("Peso: %i", p->peso);
    printf("\n");

    return 0;
}