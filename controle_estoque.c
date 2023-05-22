// Controle de estoque
// entrada e saida com arquivo

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
 // Prototipo
struct cliente{
       int reg;
       char nome[80];
       int quant;
       int vendido;
       float preco_un;
       }produto[20];
int cont=0;
int menu(void);
void inserir(void), salvar(void), alterar(void), inicio(void);
void consultar(void), relatorio(void);
void carregar(void);
 //programa principal
main()
{
      int escolha;
      inicio();
      carregar();
      for(;;){system("cls");
      escolha=menu();
      switch(escolha){
      case 1:inserir();break;
      case 2:alterar();break;
      case 3:consultar();break;
      case 4:relatorio();break;
      case 5:salvar();exit(0);break;
      }}}
    // inserir produto Novo!!!  
 void inserir(void)
 {char f[1];
      system("cls");
      if(cont==20){
      printf("\n\Estoque cheio!!!\n\n");    
      system("pause"); 
      return;}
       printf("\tRegistro:");
      scanf("%d",&produto[cont].reg);
      gets(f);
      printf("Produto:");
      gets(produto[cont].nome);
        printf("Quantidade:");
     scanf("%d",&produto[cont].quant);
        printf("Preco Unitario: R$ ");
      scanf("%f",&produto[cont].preco_un);
      cont++;
     produto[cont].vendido=0; 
      return;
   }
   // consultar produto e alterar o controle das unidades em estoque
   void consultar(void)
   {system("cls");
        register int t;
        char prod[30], f1[1];
        int num, y;
         gets(f1);
        printf("\n\tDigite o nome do Produto:");
       gets(prod); 
       for(t=0;t<cont;t++){
       if(strcmp(prod, produto[t].nome)==0){
       printf("\n    Registro: %d\n",produto[t].reg);
       printf("\t  Produto: %s\n", produto[t].nome);
       printf("\t  Quantidade: %d\n", produto[t].quant);
       printf("\t  Preco Unitario: R$ %.2f\n\n", produto[t].preco_un);
        printf("\t\t\t   ***\n\n");
       printf("\t\t   1->saida de unidades\n");
       printf("\t\t   2->entrada de unidades\n");
       printf("\t\t   3->voltar ao menu anterior\n");
       printf("\t  codigo:");
       do{
      scanf("%d",&y);}while(y<1 || y>3);
       if(y==1){
       printf("\n   quantidade de saida: ");
       scanf("%d", &num);
       produto[t].vendido=produto[t].vendido+num;
       produto[t].quant=produto[t].quant-num;}
     if(y==2){
       printf("\n   quantidade de entrada: ");
       scanf("%d", &num);
       produto[t].quant=produto[t].quant+num;} 
     if(y==3)return; 
     break;  
       }}if(t==cont){
       printf("\n\n\t\t...Produto nao encontrado ou nao existe!!...\n\n");
       system("pause");}
       }
    // relat�rio geral do estoque   
   void relatorio(void){
    system("cls");    
    int a, menor, maior, mais_vend, menos_vend;
    int p1, p2, p3, p4, p5[40], b=0;
    printf("\n\n\t\t>>> Relatorio geral <<<\n\n");
     for(a=0;a<cont;a++){
     if(a==0){
      menor=produto[0].quant;   
      maior=produto[0].quant;
      mais_vend=produto[0].vendido;  
      menos_vend=produto[0].vendido;  
      p1=0, p2=0, p3=0, p4=0;  }             
     if(produto[a].quant<menor){menor=produto[a].quant;p1=a;}
     if(produto[a].quant>maior){maior=produto[a].quant;p2=a;}
     if(produto[a].vendido<menos_vend){menos_vend=produto[a].vendido;p3=a;}
     if(produto[a].vendido>mais_vend){mais_vend=produto[a].vendido;p4=a;}
     if(produto[a].quant<10){p5[b]=a;b++;}
     }
     printf(" Produto com menos unidades em estoque:\n");
     printf("  %s com %d unidades\n\n",produto[p1].nome, menor);
     printf(" Produto com mais unidades em estoque:\n");
     printf("  %s com %d unidades\n\n", produto[p2].nome, maior);
     printf(" Produto menos vendido:\n");
     printf("  %s com %d unidades vendidas\n\n", produto[p3].nome, menos_vend);
     printf(" Produto mais vendido:\n");
     printf("  %s com %d unidades vendidas\n\n\n", produto[p4].nome, mais_vend);
     printf("\t >>> Produto abaixo de 10 unidades <<<\n\n");
     if(b==0)
     printf("   Nenhum Produto!!\n");
     if(b!=0){
     for(a=0;a<b;a++)
     printf("  %s\n", produto[p5[a]].nome);}
     printf("\n\n");
     system("PAUSE");
     }
    
    // alterar o registro do produto
    void alterar(void){     
   int r, novo;
        char n[30], f1[1];
         gets(f1);
  system("cls");       
        printf("\n\tDigite o nome do Produto:");
       gets(n); 
       for(r=0;r<cont;r++){
       if(strcmp(n, produto[r].nome)==0){
       printf("\n Registro: %d\n",produto[r].reg);
       printf("\tProduto: %s\n\n", produto[r].nome);
       printf("\tmodificar registro para:");
       scanf("%d", &novo);
       produto[r].reg=novo;
       break;
       }}}               
    // salvar todos os dados em disco   
   void salvar(void)
   {system("cls");
        FILE *fp;
         int i, a, b;
         if((fp=fopen("arquivo(cliente).txt", "w"))==NULL){
       printf("o arquivo nao pode ser aberto!.\n");
       system("pause");
      return;}
       
    for(i=0;i<cont;i++)
    if(fwrite(&produto[i], sizeof(struct cliente), 1, fp)!=1)     
     printf("erro de escrita no arquivo!!\n");
     fclose(fp);
    }
  // inicia todos os nomes dos produtos com nulos!!  
    void inicio(void)
 {
      register int t;
      for(t=0;t<20;t++)*produto[t].nome='\0'; 
      }
    
   // carregar o arquivo
   void carregar(void)
   {system("cls");
        FILE *fp;
        int i=0;
         if((fp=fopen("arquivo(cliente).txt", "r"))==NULL)
      return;   
      inicio();
   for(i=0;i<20;i++){
    if(fread(&produto[i], sizeof(struct cliente), 1, fp)!=1){
      if(feof(fp))break;
     }}                       
     cont=i;
  fclose(fp);
  }
  // menu do programa!!
   int menu(void)
   {system("cls");
        int n;
        printf("\n\t\t  ....BEM VIDO AO CONTROLE DE ESTOQUE....\n\n");
        printf("\t\t\t1-> Inserir Novo Produto\n");    
        printf("\t\t\t2-> Alterar Registro de um Produto\n"); 
        printf("\t\t\t3-> Consultar um Produto\n"); 
        printf("\t\t\t4-> Relatorio\n");
        printf("\t\t\t5-> sair\n"); 
        printf("   digite sua escolha:");
        do{
        scanf("%d",&n); }
        while(n<1 && n>6);
        return n;
       }  
    
    
    
    
    
    
    
    
    
       
       
       
                            
