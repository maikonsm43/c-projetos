// Fila baseada em Lista encadeada!!!

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
// struct do tipo Fila
struct Fila{
       char nome_carro[80];
       char modelo[80];
       char codigo[80];
       char preco[80];
       struct Fila *prox; // ponteiro para a proxima estrutura
       }dados;
struct Fila *ini; //ponteiro do inicio da Fila
struct Fila *fim;  //ponteiro do fim da Fila
int cont=0; //contador de quantos cadastros existem na Fila
// funcoes
int menu(void);
void inicio(void), entrar(void), mostrar(void);
struct Fila *pesquisar(char *n);
void deletar(void);
//programa principal
main()
{int escolha;
struct Fila *p;
char g[80];
ini=fim=NULL;
      for(;;){system("cls");
      escolha=menu(); //recebe a escolha de menu
      switch(escolha){
      case 1:entrar();break;
      case 2:mostrar();break;
      // funcao de pesquisa
      case 3:{system("cls");
           printf("\n\t Digite o codigo:");
           fflush(stdin);
           gets(g);
          p=pesquisar(g);
          if(p){  // se o codigo for encontrado, p recebe a posicao na Fila e imprime na tela!
       printf("\n\tNome do carro: %s\n", p->nome_carro);
       printf("\tModelo: %s\n", p->modelo);
       printf("\tCodigo: %s\n", p->codigo);
        printf("\tPreco: %s\n\n", p->preco);
        system("pause");
        }}
        break;
       case 4:deletar();break;
      case 5:exit(0);break;
      }}}
      // insercao
 void entrar(void)
 {
 struct Fila *dados1, *i, *f; //ponteiro da estrutura e seu inicio e fim
 f=fim;i=ini; // f recebe o fim da Fila, i recebe o inicio
 dados1=(struct Fila *)malloc(sizeof(dados)); //aloca dinamicamente uma estrutura
 if(!dados1){printf("\n\tmemoria nao alocada!!\n\n"); //se nao alocar.... fecha o programa!
 system("pause");
 exit(0);}
      system("cls");
      printf("\n  Carro %d\n",cont+1);
     fflush(stdin);
     printf(" Nome do carro:");
     gets(dados1->nome_carro);
       printf(" Modelo:");
     gets(dados1->modelo);
     printf(" Codigo:");
     gets(dados1->codigo);
      printf(" Preco:");
     gets(dados1->preco);
      cont++;
   if(!ini){ini=dados1;fim=dados1;} // primeiro elemento
   //adiciona um novo elemento no final da Fila
   else
   f->prox=dados1;
   dados1->prox=NULL;
   fim=dados1;
    return;
   }
   //deletar
 void deletar(void)
 {struct Fila *c;
 system("cls");
if(ini==NULL)return;
// deleta o carro da Fila!    
 else
 ini=ini->prox;
free(ini->prox); // libera a memoria
 cont--;
  printf("\n Primeiro elemento da Fila deletado!");
  system("pause");
}
  // buscar
struct Fila *pesquisar(char *n)
{ struct Fila *c;
c=ini;
while(c){
         //se o codigo for igual.... retorne o c�digo!
   if(strcmp(n, c->codigo)==0)return c;
   c=c->prox;      
  }
 printf("\n\t Codigo de Carro nao encontrado!!\n\n");
 system("pause");
 //senao...retorne nulo
 return NULL;
}
   //mostrar todos
   void mostrar(void)
   {system("cls");
   struct Fila *copia;
   copia=ini; // recebe o inicio da Fila
   int t;
      // imprime a Fila completa!
       for(t=0;t<cont;t++){
       printf("\n Carro %d\n",t+1);
       printf("\tNome do carro: %s\n", copia->nome_carro);
       printf("\tModelo: %s\n", copia->modelo);
       printf("\tCodigo: %s\n", copia->codigo);
       printf("\tPreco: %s\n", copia->preco);
       copia=copia->prox; //obtem a proxima estrutura da lista
       }
       printf("\n\n");
       system("pause");
       }
       
       //menu
   int menu(void)
   {system("cls");
        int n;
        printf("\n\t\t     FILA (Baseada em Lista encadeada)\n");
        printf("\t\t\t\tQuestao 2\n\n\n");
        printf("\t\t\t1-> Inserir\n");    
        printf("\t\t\t2-> Visualizar dados\n"); 
        printf("\t\t\t3-> Buscar\n");
        printf("\t\t\t4-> Deletar\n");
        printf("\t\t\t5-> sair\n"); 
        printf("   digite sua escolha:");
        scanf("%d",&n);
        //retorna a opcao selecionada
        return n;
       }  
    
    
    
    
    
    
    
    
    
       
       
       
                            
