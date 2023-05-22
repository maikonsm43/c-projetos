// Buffer - entrada do teclado

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
main()
{int a;
      char n[40];
      printf("digite a frase (para sair digite(.))!\n");
      for(a=0;a<=39;a++){
      n[a]=getch();
      if(a==0)n[a]=toupper(n[a]);
      if(n[a-1]==' ' && islower(n[a]))
      n[a]=toupper(n[a]);
      putchar(n[a]);
      if(n[a]=='.')break;
      }
     
     printf("\n\n");     
     
      system("pause"); }
