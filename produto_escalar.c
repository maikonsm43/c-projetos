//multiplicacao escalar

#include<stdio.h>
main()
{
      int a, n[5];
      int b, m[5], c, result=0;
      printf("\n...MULTIPLICACAO ESCALAR...\n\n");
      printf("digite cinco elementos do conjunto (A):\n");
      for (a=1; a<=5; a++)
      scanf("%d",&n[a]);
      printf("digite cinco elementos do conjunto (B):\n");
      for (b=1; b<=5; b++)
      scanf("%d",&m[b]);
      for(c=1; c<=5; c++)
      result+=n[c]*m[c];
      printf("Produto escalar de (A)e(B): %d\n",result);
      printf("\n\n");
      system("PAUSE");
      }
