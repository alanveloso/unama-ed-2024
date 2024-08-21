#include <stdio.h>

typedef struct{
    int peso;   // peso em quilogramas
    int altura; // altura em centimetros
} PesoAltura;

int main() {
    PesoAltura pessoa;
    pessoa.peso = 95;
    pessoa.altura = 180;
    printf("Peso: %i\nAltura: %i\n", pessoa.peso, pessoa.altura);
    return 0;
}