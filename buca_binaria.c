// busca binaria em um vetor

#include<stdio.h>
#include<stdlib.h>
# define d 8 // tamanho do vetor!
int v[d]; 
int buscabin(int k);
main()
{
      
      int a, g, k;
      printf("\n\t\t...Busca Binaria em um vetor...\n");
      printf("\n\n   digite 8 valores!!\n");
      for(a=0;a<d;a++)
      scanf("%d",&v[a]); 
      printf("\n\n");
      printf("\n digite o numero para buscar:");
      scanf("%d",&g);
     k=buscabin(g); 
     if(k==-1)printf("\n\nnumero nao exise!!!\n\n\n");
      else printf("\n\nnumero exise! e sua posicao e: %d\n\n\n",k+1);
      }
      
  int buscabin(int k) 
  {
      int ini=0, fim=d-1, meio;
      while(ini<=fim){
      meio=(ini+fim)/2;
      if(k<v[meio])
      fim=meio-1;
     if(k>v[meio])
      ini=meio+1;
      else return meio; 
      }
      return -1; 
      }
      
       
           
      
      
