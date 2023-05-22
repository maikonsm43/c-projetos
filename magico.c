// adivinhe o numero magico

#include <stdio.h>
#include <stdlib.h>
main()
{
      int magic, num;
      char sair;
     
     magic= rand();
     printf("Adivinhe o numero magico? \n");
     do
     {
     scanf("%d",&num);
     if (num==magic)
      printf("PARABENS! ESTAR **CERTO**\n");
     else
      {printf("ERRADO!\n");
      if (num>magic)
      printf("esse numero passou!\n");
     else
       printf("valor baixo!\n");
       }
       }
       while (num!=magic);
       system("PAUSE");
       
                    
     }           
       
