// Este algoritmo le e apresenta uma matriz 3x3 com valores inteiros.

#include <stdio.h>
#include <stdlib.h>
int main()
  {
    int x,y,matriz[3][3];
    for(x=0; x<3; x++)
     {
      for(y=0; y<3; y++)
       {
        printf("Digite um valor\n");
        scanf("%d", &matriz[x][y]);
        system("cls");
        }
      }
      printf("Veja o vetor montado\n\n");
      for(x=0; x<3; x++)
      {
       for(y=0; y<3; y++)
        {           
         printf("\t%d", matriz[x][y]);
        }
       printf("\n");
      }
    system("pause");
   return 0;
  }
