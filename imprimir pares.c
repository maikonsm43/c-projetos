
// programa para imprimir os números pares!

#include<stdio.h>
#include<stdlib.h>
main()
{
      int n[5], cont;
      printf("\n");
      printf("....NUMEROS PARES....\n\n");
      printf(" Digite 6 numeros:\n");
      for (cont=0; cont<6; cont++)
      scanf("%d",&n[cont]);
      
      printf("\n");
      printf("os numeros pares sao:\n");
      for (cont=0; cont<6; cont++)
      {
      if (n[cont]%2==0)
        
        printf("%d\n",n[cont]);
        
        }
        printf("\n");
        system("PAUSE");
        }
