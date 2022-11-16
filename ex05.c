#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    printf("Vou pensar em um numero entre 1 e 5. Tente advinhar.\n");
    printf("Qual e o seu palpite? ");
    int NumeroDigitado;
    scanf("%i", &NumeroDigitado);// tem que colocar o "&" para funcionar
    printf("\n");
    srand(time(NULL));
    int NumeroSorteado = rand() % 5 + 1;
    printf("Eu pensei no numero \"%i\" e voce no numero \"%i\"", NumeroSorteado, NumeroDigitado);
}