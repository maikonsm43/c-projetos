
// programa que procura ocorrencias de uma palavra em um arquivo de texto

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
char copia[30][20];
main()
{
 char palavra[30];
 int a, b, e, f, teste, c=0, d=0;
FILE *maikon;
maikon=fopen("texto.txt", "rt");
 for(a=0;(!feof(maikon));a++){                           
 fscanf(maikon, "%s", copia[a]);
 c++;}
 
   fclose(maikon);
   printf("\n\tdigite sua palavra:");
   gets(palavra);
   printf("\n\n  Ocorrencia da palavra com sua linha e coluna!!\n\n");
for(a=0;a<c;a++){
for(b=0;copia[a][b];b++){               
f=b;
teste=1;
for(e=0;e<strlen(palavra);e++){
if(copia[a][f]==palavra[e])f++;
else teste=0;}
if(teste==1)
printf(" Posicao %d.%d\n", a+1, b+1);
}}
printf("\n\n\n");
   system("pause");}
