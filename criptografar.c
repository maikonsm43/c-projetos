
// criptografar texto e salvar em arquivo
// programador: arquivo Monteiro

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
main()
{
int a=0, b;
char s[200];
FILE *arquivo;
FILE *arquivo2;
if((arquivo=fopen("arquivo.txt", "rt"))==NULL){
  printf("o arquivo nao pode ser aberto!.\n");
  system("pause");
  return;}        
  while(!feof(arquivo)){
  s[a]=getc(arquivo);
  a++;} 
  fclose(arquivo);
  for(b=0;b<a;b++)
  printf("%c",s[b]);
  arquivo2=fopen("arquivo(criptografado).txt", "wt");
  for(b=0;b<a;b++)
  putc(s[b]+1, arquivo2);
  fclose(arquivo2);
   printf("\n\n\t\tarquivo criptografado e salvo!!!\n\n\n"); 
 system("pause");    
          }




