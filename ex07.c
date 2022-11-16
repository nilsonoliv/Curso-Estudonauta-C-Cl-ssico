#include <stdio.h>
#include <locale.h>


int main(void) {
    int num;
    setlocale(LC_ALL,"Portuguese");
    printf("digite um numero: ");
    fflush(stdin);
    scanf("%i", &num);
    printf("O numero que você digitou e: %s", (num%2==0?"PAR":"IMPAR"));

} 