
//digitar uma frase e mostrar suas vogais digitadas!

#include<string.h>
#define L 1
#define C 90

char texto[L][C];

main()
{
   register int a, b, c;
   printf("Digite sua frase!!\n");
   for(a=0; a<L; a++)
   {
   gets(texto[a]);
   }
   // mostrar as vogais digitadas!!!!
   printf("\n");
   printf("As vogais digitadas sao:\n");
   for(b=0; b<a; b++)
   {
     for(c=0; texto[b][c]; c++) 
     if (texto[b][c]=='a' || texto[b][c]=='e' || texto[b][c]=='i' || texto[b][c]=='o' || texto[b][c]=='u' )
     putchar(texto[b][c]);
     printf("\n\n\n");
     }
     system("PAUSE");
     }
