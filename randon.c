#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// O objetivo é criar números aleatórios

int main(void) {
    srand(time(NULL));//a função time() permite usar o valor do relógio da máquina
    int n = rand(); //ou vc tb pode usar n=rand() % 10 para gerar números entre 1 e 10.
    printf("Eu gerei o numero \"%d\"\n",n);
}