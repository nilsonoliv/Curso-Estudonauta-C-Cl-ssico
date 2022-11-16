#include <stdio.h>

int main (void) {
    char letra;
    printf("Digite uma letra: ");
    letra = getchar();
    //scanf("%s", &letra);
    //char antes = letra - 1;
    //char depois = letra + 1;

    printf("Antes de \"%c\" é a letra \"%c\" e depois e a \"%c\"", letra,(letra-1),(letra+1));
}