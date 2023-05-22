// jogo do pontinho

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
char ponto[20][37];
main()
{
int a, b, c=10, d=15;
char p;
for(a=0;a<20;a++){
for(b=0;b<37;b++)
ponto[a][b]=' ';}
ponto[10][15]=1;
ponto[0][5]=2;
for(;;){system("cls");
printf("\n\t\t    ....JOGO DA CARINHA....\n");
printf("\t\t  programador: Maikon Monteiro....\n");
for(a=0;a<20;a++){
for(b=0;b<37;b++)
putchar(ponto[a][b]);
printf("\n");
}
if(ponto[0][5]==1){
printf("\t\t\tvoce ganhou!!\n\n\n");
system("pause");
exit(0);}
 p=getch();
 // cima
 if(p==72){
 ponto[c][d]=' ';
 c--;
 ponto[c][d]=1;}
 //baixo
 if(p==80){
 ponto[c][d]=' ';
 c++;
 ponto[c][d]=1;}
 //direita
 if(p==77){
 ponto[c][d]=' ';
 d++;
 ponto[c][d]=1;}
 //esquerda
 if(p==75){
 ponto[c][d]=' ';
 d--;
 ponto[c][d]=1;} 
 //sair
 else if(p==32)exit(0);            
 }}




