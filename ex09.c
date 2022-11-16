#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//calculando médias e recebendo inputs
//utilizando if para avaliar se o aluno foi reprovado ou não

int main(void) {
    
    setlocale(LC_ALL,"");//não sei porque não consigo usar essa função corretamente.. :( ...
    char name[20];
    float nota1, nota2, nota3, average; 

    printf("Nome do aluno: ");
    fflush(stdin);
    gets(name);
    
    printf("Primeira nota: ");
    fflush(stdin);
    scanf("%f", &nota1);
    
    printf("Segunda nota: ");
    fflush(stdin);
    scanf("%f", &nota2);
    
    printf("Terceira nota: ");
    fflush(stdin);
    scanf("%f", &nota3);
    

    average = (nota1+nota2+nota3)/3;
    if (average <= 4)
    {
        printf("%s, sua média é %.2f, infelizmente você foi reprovado",name, average);
        fflush(stdin);
    }
    else if (average > 4 && average <= 6 )
    {
        printf("%s, sua média é %.2f, você ficou em recuperação", name, average);
        fflush(stdin);
    }
    else {
        printf("Parabéns %s, você está aprovado, sua média é %.2f.", name, average);
        fflush(stdin);
}
                  
}
