
// programador: Maikon Monteiro
// ordenacao por insercao

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
      int v[5], a, b;
      int n;
      printf("digite 5 valores:\n");
      for(a=1;a<=5;a++)
      scanf("%d",&v[a]);
      for(a=2;a<=5;a++){
      n=v[a];
      b=a-1;                 
      while(b>=1 && n<v[b]){
      v[b+1]=v[b];
      b--;}
      v[b+1]=n;}
      printf("\n\n");
      printf("em ordem crescente!!\n");
      for(a=1;a<=5;a++)
      printf("%d\n",v[a]);
      system("PAUSE");
      }
