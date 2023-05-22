// Cria uma estrutura que contem nome, idade e salario.

#include<stdio.h>
#include<stdlib.h>
struct Pessoa
{
  char nome[30];
  int idade;
  float salario;
 };
typedef struct Pessoa novotipo;
int main()
  {
   novotipo dado;
   printf("Digite o seu nome\n");
   gets(dado.nome);
   printf("\nDigite a sua idade\n");
   scanf("%d",&dado.idade);
   printf("\nDigite o seu salario\n\n");
   scanf("%f",&dado.salario);
   system("cls");
   printf(" Seus dados:\n\n Nome: %s\n Idade: %d anos\n Salario: %7.2f reais\n\n", dado.nome, dado.idade, dado.salario);
   system ("pause");
   return 0;
 }
