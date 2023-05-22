
// programador: Maikon da Silva Monteiro!!
// Quicksort e busca binaria
#include<stdio.h>
#include<stdlib.h>
# define d 5
int v[d];
void QuickSort(int v[], int esquerda, int direita);
int buscabin(int k);
main()
{
      
      int a, g, k;
      printf("\n\t\t...QuickSort e Busca Binaria...\n");
      printf("\t\t Programador: Maikon Monteiro!");
      printf("\n\n   digite 5 valores!!\n");
      for(a=0;a<d;a++)
      scanf("%d",&v[a]);
      QuickSort(v, 0, d-1);
      printf("\n\n");
      for(a=0;a<d;a++)
      printf("%d\n",v[a]);
      printf("\n\ndigite o numero para buscar:");
      scanf("%d",&g);
     k=buscabin(g);
     if(k==-1)printf("\n\nnumero nao exise!!!\n\n\n");
      else printf("\n\nnumero exise! e sua posicao e: %d\n\n\n",k+1);
      system("PAUSE");
      }
      
  void QuickSort(int v[], int esquerda, int direta)
  { 
       register int i, j;
       int x, y;
       i=esquerda;j=direta;
       x=v[(esquerda+direta)/2];
       do{while(v[i]<x && i<direta)i++;
       while(x<v[j] && j>esquerda)j--;
       if(i<=j){
       y=v[i];v[i]=v[j];
       v[j]=y;
       i++;j--;}}
       while(i<=j);
       if(esquerda<j)QuickSort(v, esquerda, j);
       if(i<direta)QuickSort(v, i, direta);
      }
           
  int buscabin(int k)
  {
      int ini=0, fim=4, meio;
      while(ini<=fim){
      meio=(ini+fim)/2;
      if(k<v[meio])
      fim=meio-1;
     if(k>v[meio])
      ini=meio+1;
      else return meio;}
      return -1;}
      
       
           
      
      
