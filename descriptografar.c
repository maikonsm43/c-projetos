// descriptografar texto do arquivo

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
main()
{
int a, b=0;
char s[200];
FILE *arquivo;
if((arquivo=fopen("arquivo(criptografado).txt", "rt"))==NULL){
       printf("o arquivo nao pode ser aberto!.\n");
       system("pause");
      return;}
printf("\n\ttexto descriptografado!!\n");
 while(!feof(arquivo)) {
  s[b]=getc(arquivo)-1;
  b++;}
fclose(arquivo);
printf("\n\t");
for(a=0;a<b-1;a++)
printf("%c",s[a]);
 printf("\n\n\n"); 
 system("pause");              
 }




