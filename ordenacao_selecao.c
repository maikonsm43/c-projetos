// programador: Maikon Monteiro
// ordenacao por selecao

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
      int v[5], a, b, c;
      int n;
      printf("digite 5 valores:\n");
      for(a=0;a<5;a++)
      scanf("%d",&v[a]);
      for(a=0;a<5;a++){
      c=a;
      n=v[a];                 
     for(b=a+1;b<5;b++){
      if(v[b]<n){
      c=b;
      n=v[b];}}
      v[c]=v[a];
      v[a]=n;}
      printf("\n\n");
      printf("em ordem crescente!!\n");
      for(a=0;a<5;a++)
      printf("%d\n",v[a]);
      system("PAUSE");
      }
