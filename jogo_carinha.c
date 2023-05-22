// progrma do jogo da carinha. pegue a carinha branca e seja o recordista!

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void mostrar_jogo(void), cima(void);
void baixo(void), direita(void), esquerda(void), fim(void);
void recordista(void);
int a, b, c=11, d=30;
int pont=0, erro=0;
int tempo=0, t=0;
char p, nome[50], recordista_atual[50], tempo_rec[50]; 
char ponto[18][60];

main()
{FILE *arquivo;
if((arquivo=fopen("recorde.txt", "rt"))==NULL)
erro=1;
   if(erro==0){
   fscanf(arquivo,"%s",recordista_atual);
   fscanf(arquivo,"%s",tempo_rec);
   t=atoi(tempo_rec);
          fclose(arquivo);}
  if(erro==0){printf("\t  Recordista atual: ");
  printf(recordista_atual);
  printf("\tTempo: %d s",t);
  printf("\n\n");}
printf("digite seu nome: ");
gets(nome);
for(a=0;a<18;a++){
for(b=0;b<60;b++)
ponto[a][b]=' ';}
ponto[11][30]=1;
ponto[3][5]=2;
for(;;){
mostrar_jogo();
if(kbhit()){//verifica se alguma tecla foi acionada!!
  p=getch();
  if(p==72)cima();
  if(p==80)baixo(); 
  if(p==77)direita();  
  if(p==75)esquerda();  }  
  //atravessa do outro lado!!! 
   if(ponto[c][0]==1){
  ponto[c][0]=' ';
  ponto[c][59]=1;
  d=59;} // fim da travessia!!
ponto[c][d]=' ';
d--;
ponto[c][d]=1;
tempo++;
fim();
sleep(50);
 }}

void mostrar_jogo(void){
  system("cls");
printf("\n\t\t    ....JOGO DA CARINHA....\n");
printf("\tpontos: %d", pont);
printf("\ttempo: %d\n", tempo);
printf(" ___________________________________________________________\n");
for(a=0;a<18;a++){
for(b=0;b<60;b++)
putchar(ponto[a][b]);
printf("\n");}}

void cima(void)
{ for(;;){
     system("cls");
     mostrar_jogo();
     if(kbhit()){
  p=getch();
  if(p==72)cima();
  if(p==80)baixo(); 
  if(p==77)direita();  
  if(p==75)esquerda();  }
  //atravessa do outro lado!!! 
   if(ponto[0][d]==1){
  ponto[0][d]=' ';
  ponto[17][d]=1;
  c=17;} // fim da travessia!!
     ponto[c][d]=' ';
     c--;
     ponto[c][d]=1;
     tempo++;
     fim();
     sleep(70);
     }}
  
  void baixo(void)
{ for(;;){
     system("cls");
     mostrar_jogo();
     if(kbhit()){
  p=getch();
  if(p==72)cima();
  if(p==80)baixo(); 
  if(p==77)direita();  
  if(p==75)esquerda();  }
   //atravessa do outro lado!!! 
  if(ponto[17][d]==1){
  ponto[17][d]=' ';
  ponto[0][d]=1;
  c=0;}// fim da travessia!!
     ponto[c][d]=' ';
     c++;
     ponto[c][d]=1;
     tempo++;
     fim();
     sleep(70);
     }}
     
      void direita(void)
{ for(;;){
     system("cls");
     mostrar_jogo();
     if(kbhit()){
  p=getch();
  if(p==72)cima();
  if(p==80)baixo(); 
  if(p==77)direita();  
  if(p==75)esquerda();  }
   //atravessa do outro lado!!! 
  if(ponto[c][59]==1){
  ponto[c][59]=' ';
  ponto[c][0]=1;
  d=0;}// fim da travessia!!
     ponto[c][d]=' ';
     d++;
     ponto[c][d]=1;
     tempo++;
     fim();
     sleep(70);
     }}
   
    void esquerda(void)
{ for(;;){
     system("cls");
     mostrar_jogo();
     if(kbhit()){
  p=getch();
  if(p==72)cima();
  if(p==80)baixo(); 
  if(p==77)direita();  
  if(p==75)esquerda();  }
   //atravessa do outro lado!!! 
  if(ponto[c][0]==1){
  ponto[c][0]=' ';
  ponto[c][59]=1;
  d=59;}// fim da travessia!!
     ponto[c][d]=' ';
     d--;
     ponto[c][d]=1;
     tempo++;
     fim();
     sleep(70);
     }}
   // verifica se ha um novo recordista!!
   // se tiver! o antigo e substituido!!  
  void recordista(void)
  {  FILE *arquivo; 
      if(erro==1 || tempo<t){
  if(erro==1)printf("\t\tParabens %s!! voce e o primeiro participante!\n\n", nome);
  else printf("\t\tParabens %s!! voce quebrou o recorde do(a) %s!!\n\n", nome, recordista_atual);
   arquivo=fopen("recorde.txt", "wt");
   fprintf(arquivo,"%s",nome);
   fprintf(arquivo," %d",tempo);
   fclose(arquivo);}
 else {printf("\t\tQue pena!! vc nao ganhou do(a) %s\n",recordista_atual); 
  printf("\t   Tente outra vez, %s!! um dia vc consegue!\n\n",nome);
}system("pause");exit(0);}

  // verifica se foi pego a ultima carinha!
   void fim(void)
  {FILE *arquivo;
       if(ponto[3][5]==1){
       printf("\a");ponto[15][40]=2;pont=5;}
       if(ponto[15][40]==1){
       printf("\a");ponto[12][6]=2;pont=10;}
       if(ponto[12][6]==1){
       printf("\a\a");pont=15;
       mostrar_jogo();
       recordista();
 }}   
