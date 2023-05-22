// programa que coloca cinco numeros na ordem inversa 

#include<stdio.h>

main()
{
      int a[5], b;
      printf("\n>> ORDEM INVERSA <<\n");
      printf(" digite 5 numeros:\n");
      for (b=0; b<5; b++)
      scanf("%d",&a[b]);
      printf("Ordem inversa!\n");
      inverte(a, b);
      system("PAUSE");
      }
      
   int inverte(int a[5], int b)
   {
   int c;
   c=1;
   for(b=4; b>=0; b--)
   {
   printf(" posicao [%d]-> %d\n", c, a[b]);
    c++; 
   }
   }  
      
