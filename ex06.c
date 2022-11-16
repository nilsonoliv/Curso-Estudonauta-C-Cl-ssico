#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(void) {
  char nome1[20], nome2[20], nome3[20];
  char sexo1[20], sexo2[20], sexo3[20];
  float nota[3];

  printf(" Cadastrando a primeira pessoa:\n");
  printf("-------------------------------\n");
  printf("nome: ");
  gets(nome1);    //O scanf não aceita espaço por isso não é recomendável para strings, gets é mais apropriado.
  printf("sexo: ");
  gets(sexo1);
  printf("nota: ");
  scanf("%f", &nota[0]);
  printf("-------------------------------\n");

  printf(" Cadastrando a segunda pessoa:\n");
  printf("-------------------------------\n");
  printf("nome: ");
  fflush(stdin); //limpa o buff de entrada
  gets(nome2);    
  printf("sexo: ");
  fflush(stdin); 
  gets(sexo2);
  printf("nota: ");
  fflush(stdin); 
  scanf("%f", &nota[1]);
  printf("-------------------------------\n");

  printf(" Cadastrando a terceira pessoa:\n");
  printf("-------------------------------\n");
  printf("nome: ");
  fflush(stdin); //A funçao ou método fflush limpa o buff de entrada
  gets(nome3);    
  printf("sexo: ");
  fflush(stdin); 
  gets(sexo3);
  printf("nota: ");
  fflush(stdin); 
  scanf("%f", &nota[2]);
  printf("-------------------------------\n");

  

  printf("-------------------------------\n");
  
  printf(" Nome\t\tSexo\t\tNota\n");
  printf("%-20s\t%10s\t%5.2f\n",nome1,sexo1,nota[0]);
  printf("%-20s\t%-10s\t%5.2f\n",nome2,sexo2,nota[1]);
  printf("%-20s\t%-10s\t%5.2f\n",nome3,sexo3,nota[2]);
  printf("-------------------------------\n");
}