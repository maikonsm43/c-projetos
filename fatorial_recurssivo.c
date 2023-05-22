
// fatorial recurssivo

#include<stdio.h>
int fat(int n);
main()
{
      int n;
      printf("digite um valor:");
      scanf("%d",&n);
      printf("\nO fatorial de %d: %d\n\n",n, fat(n));
      system("PAUSE");
      }
  int fat(int n)
  {
      int b;
      if (n==1) return (1);
      b=fat(n-1)*n;
      return b;
      }   
