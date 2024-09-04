#include <stdio.h>

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

    return 0;
}