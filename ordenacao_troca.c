// programador: Maikon Monteiro
// ordenacao por troca

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
      for(a=1;a<=5;a++){
      for(b=1;b<=5;b++){
      if(v[b]>v[b+1]){
      n=v[b];
      v[b]=v[b+1];
      v[b+1]=n;}
      }}
      printf("\n\n");
      printf("em ordem crescente!!\n");
      for(a=1;a<=5;a++)
      printf("%d\n",v[a]);
      system("PAUSE");
      }
