// Sequencia de Fibonacci recurssivo

#include<stdio.h>
#include<stdlib.h>
int fib(int i);
main()
{
      int n, i;
      printf("digite o numero de elementos:\n");
      scanf("%d",&n);
      printf("a sequencia de fibonacce:\n");
      for(i=0; i<n; i++)
      {
        printf("%d,",fib(i));
        }
        printf("\n\n");
        system("PAUSE");
        }
  
int fib(int i)
{ 
  if(i==0)
  return(0);
  if(i==1)
  return(1);
  else
  return fib(i-1)+fib(i-2);
}
