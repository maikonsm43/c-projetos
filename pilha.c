// programador: Maikon Monteiro
// Pilha

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct pilha{
       int M[6];
       int topo;};
struct pilha G;          
void empilhar(void), listar(void), desempilhar(void);
int pesquisar(int p), mostar_topo(void), menu(void), inverter(void);
void inicio(void);
main()
{ inicio();
 G.topo=0;
      for(;;){system("cls");
      switch(menu()){
      case 1:empilhar();break;
      case 2:desempilhar();break;
      case 3:mostar_topo();break;
      case 4:inverter();break;
      case 5:listar();break;
      case 6:exit(0);
      }}}         
      // Empilhar!!      
    void empilhar(void)
    { int s, k;
    system("cls");
    if(G.topo==5){
    printf("\n\n      >>> Pilha cheia! <<<\n\n");
    system("PAUSE");
    return;}
    printf("  digite o numero:");
    scanf("%d",&s);
    k=pesquisar(s);
    if(k!=0){printf("\n\n    Numero existe! tente novamente!\n\n");
    system("PAUSE");
    return empilhar();}
    G.topo++; 
    G.M[G.topo]=s;}
    //pesquisar se h� numeros na pilha!!
    int pesquisar(int p)
   {int a;
         for(a=1;a<6;a++){
         if(p==G.M[a])
         return a;}
         return 0;}
         //remover numeros da pilha!
   void desempilhar(void)
   {int b; 
   system("cls");
  if(G.topo==0){
        printf("\n\n     Pilha Vazia!\n\n");
        system("PAUSE");
        return;}
         G.topo--;}
         // listar os numeros que estao na pilha!
   void listar(void)
   {int a;
   system("cls");
   if(G.topo==0){
        printf("\n\n     Pilha Vazia!\n\n");
        system("PAUSE");
        return;}
        printf("\n\n  numeros da Pilha!!\n");
        for(a=G.topo;a>=1;a--)
        printf("  %d\n",G.M[a]);printf("\n\n");
         system("PAUSE");
         }
         //mostrar topo!!
         int mostar_topo(void){
              system("cls");
         if(G.topo==0){
        printf("\n\n     Pilha Vazia!\n\n");
        system("PAUSE");
        return;}
        printf("\n\n\t   Topo da Pilha: %d\n\n\n",G.M[G.topo]);
        system("PAUSE");}
        //inverter posi��es!
        int inverter(void){
        int a, b=1, v[G.topo];
        for(a=G.topo;a>=1;a--){
        v[b]=G.M[a];
        b++;}
        for(a=1;a<=G.topo;a++)
        G.M[a]=v[a];
        }
    //menu select!    
        int menu(void){
         int cod;
         system("cls");
      printf("\t\t       >>>>> PILHA <<<<<\n\n");
      printf("\t\t\t cod.\n");
      printf("\t\t\t 1-> Empilhar\n");
      printf("\t\t\t 2-> Desempilhar\n");
      printf("\t\t\t 3-> Topo da Pilha\n");
      printf("\t\t\t 4-> Inverter\n");
      printf("\t\t\t 5-> Listar\n");
      printf("\t\t\t 6-> Sair\n");
      do{
      printf(" digite o codigo:");
      scanf("%d",&cod);}while(cod<1 || cod>6);
      return cod;}   
     // iniciar!             
          void inicio(void)
          {int a;
          printf("\n\n\n\n\n\n\n\t\t\t\t");
               char k[6]="MAIKON", G[3]="..."; 
               for(a=0;a<=5;a++){
               printf("%c ",k[a]);sleep(150);} 
               for(a=0;a<=3;a++){ 
               printf("%c",G[a]);sleep(500);}
          }  
             
             
             
             
              
        
