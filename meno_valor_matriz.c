//programa que verifica o menor valor de uma matriz

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int menor_maior(int **n);
main()
{
      int a, b, **m;
      m=(int **) calloc(4, sizeof(int **));
       if (m == NULL) { 
printf ("\n Erro: Memoria Insuficiente !!\n"); 
system("pause");
 exit(0);
} 
      printf("\n\n");
      for (a=0; a<4; a++){
      m[a]=(int *) calloc(4, sizeof(int *));
       if (m[a] == NULL) { 
printf ("\n Erro: Memoria Insuficiente !!\n"); 
system("pause");
 exit(0);
} }
      for (a=0; a<4; a++){
      for (b=0; b<4; b++)
    m[a][b]=(a*4)+b+1;
      }
      for (a=0; a<4; a++){
      for (b=0; b<4; b++)
      printf("  %2d",m[a][b]);
      printf("\n");
      }
      menor_maior(m);
      for (a=0; a<4; a++)
      free(m[a]);
      free(m);
      system("PAUSE");
}
 int menor_maior(int **n)
 { int r, s, maior=n[0][0], menor=n[0][0];
 for (r=0; r<4; r++){ 
      for (s=0; s<4; s++){
if(n[r][s]>maior)maior=n[r][s];
if(n[r][s]<menor)menor=n[r][s];
}}
 printf("       O menor valor da matriz e: %d\n", menor);
 printf("       O maior valor da matriz e: %d\n", maior);
  printf("\n\n");
}
 
