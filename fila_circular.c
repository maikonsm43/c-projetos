// Fila Circular

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
struct maikon{
       int M[6];
       int cont;
       };
struct maikon R;          
void inserir(void), listar(void), remover(void), impares(void);
int pesquisar(int p);
void inicio(void);
main()
{ int cod, h;
 inicio();
 R.cont=0;
      for(;;){system("cls");
      printf("\t\t     ***** FILA CIRCULAR *****\n\n");
      printf("\t\t\t cod.\n");
      printf("\t\t\t 1-> Enfileirar\n");
      printf("\t\t\t 2-> Desinfileirar\n");
      printf("\t\t\t 3-> Remover impares\n");
      printf("\t\t\t 4-> Listar\n");
      printf("\t\t\t 5-> Sair\n");
      do{
      printf(" digite o codigo:");
      scanf("%d",&cod);}while(cod<1 || cod>6);
      switch(cod){
      case 1:inserir();break;
      case 2:remover();break;
      case 3:impares();break;
      case 4:listar();break;
      case 5:exit(0);
      }}}         
      // inserir os n�meros!!      
    void inserir(void)
    { int s, k;
    system("cls");
    if(R.cont==5){
    printf("\n\n      >>> Fila cheia! <<<\n\n");
    system("PAUSE");
    return;}
    printf("  digite o numero:");
    scanf("%d",&s);
    k=pesquisar(s);
    if(k!=0){printf("\n\n    Numero existe! tente novamente!\n\n");
    system("PAUSE");
    return inserir();}
    R.cont++; 
    R.M[R.cont]=s;}
    //pesquisar se h� numeros
    int pesquisar(int p)
   {int a;
         for(a=1;a<6;a++){
         if(p==R.M[a])
         return a;}
         return 0;}
         //remover numeros!
   void remover(void)
   {int b; 
   system("cls");
  if(R.cont==0){
        printf("\n\n     Fila Vazia!\n\n");
        system("PAUSE");
        return;}
         for(b=1;b<=R.cont;b++)
         R.M[b]=R.M[b+1];
         R.cont--;}
         // listar os numeros que estao na lista!
   void listar(void)
   {int a;
   system("cls");
   if(R.cont==0){
        printf("\n\n     Fila Vazia!\n\n");
        system("PAUSE");
        return;}
        printf("\n\n  numeros da Fila!!\n");
        for(a=1;a<=R.cont;a++)
        printf("  %d\n",R.M[a]);printf("\n\n");
         system("PAUSE");
         }
     // remover os �mpares da fila!!    
         void impares(void)
         {int b, c, d=1, e=0;
             for(b=1;b<=5;b++){
             if(!(R.M[d]%2==0)){
             for(c=d;c<=R.cont;c++)
             R.M[c]=R.M[c+1];
             R.cont--;e=1;}
             else d++;
            }if(!(R.M[R.cont]%2==0)){R.cont--;e=1;}
            system("cls");
            if(e==0)printf("\n\n         Nao existe numeros impares na Fila!\n\n\n");
            else printf("\n\n        Impares removidos com sucesso!\n\n\n");system("PAUSE");}
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
             
             
             
             
              
        
