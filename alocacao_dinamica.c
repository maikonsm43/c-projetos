// Alocacao dinamica

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
  char *s;
  int c;
  s=malloc(80);
  if(!s){
  printf("falha na solicitacao de memoria!");
  system("PAUSE");
  exit(0);
  }
  printf(" digite sua frase!\n");
  gets(s);
  for(c=(strlen(s)-1);c>=0;c--)
  putchar(s[c]);
  printf("\n\n");
  free(s);
  system("PAUSE");
}
