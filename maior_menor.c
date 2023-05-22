// maior e menor

#include <stdio.h>
#include <stdlib.h>
int main()
  {
    int x, num[3];
    int maior1, maior2, menor;
    float media;
    maior1=0;
    maior2=0;
    media=0;
    
    for(x=0; x<10; x++)
      {
        printf("Digite a 10 numeros!!\n");
        scanf("%d", &num[x]);
        media=media+num[x];
        if (num[x]>maior1)
        maior1=num[x];
        else
        menor=num[x];
        if (maior1<maior1)
        maior2=maior1;
        system("cls");
      }
      printf("Maior numero 1: %d \n",maior1);
      printf("Maior numero 2: %d \n",maior2);
      printf("Media: %.1f \n",media/x);
     
    system ("pause");
   return 0;
  }
