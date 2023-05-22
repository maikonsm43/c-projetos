// vetor

#include<stdio.h>
#define m 5
main()
{
      int cont, n[m];
      
      printf("digite 5 valores:\n");
      for (cont=0; cont<5; cont++)
      scanf("%d",&n[cont]);
      
      
      for (cont=0; cont<5; cont++)
      printf("vetor %d-> %d\n",cont, n[cont]);
      printf("\n\n");
      printf("%d",n[2]);
      
      system("PAUSE");
      }
