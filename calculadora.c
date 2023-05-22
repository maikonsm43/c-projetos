// calculadora

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void soma(char n[]), subtracao(char n[]), multip(char n[]), divisao(char n[]);
main()
{
      char n[50];
      for(;;){system("cls");
       printf("\n\t\t...CALCULADORA...\n");
       printf("\t\t    *****************\n");
       printf("\t para sair apenas use a tecla (enter)!!!\n\n");
     printf("  digite sua operacao!!!\n");
      gets(n);
      if(!n[0])exit(0);
     printf("\n\n");
     if(strchr(n, '+'))
     soma(n);
     if(strchr(n, '-'))
     subtracao(n);
     if(strchr(n, '*'))
     multip(n);
     if(strchr(n, '/'))
     divisao(n);
     printf("\n\n\n");
     system("pause");
    }}
     // adicao!!!!   
 void soma(char n[])
 {     
     register int a, s, t, b, cont=0;
      char m[50], o[50];
     for(a=0;a<=50;a++){
     if(n[a]=='+')break;
     m[a]=n[a];}
     s=atoi(m);
     for(b=a+1;b<strlen(n);b++){
     o[cont]=n[b];cont++;}
     t=atoi(o);
     printf("   %d + %d = %d\n\n",s, t, s+t);
     }
  // subtracao!!   
  void subtracao(char n[])   
  {
       register int a, s, t, b, cont=0;
      char m[50], o[50];
     for(a=0;a<=30;a++){
     if(n[a]=='-')break;
     m[a]=n[a];}
     s=atoi(m);
     for(b=a+1;b<strlen(n);b++){
     o[cont]=n[b];cont++;}
     t=atoi(o);
     printf("   %d - %d = %d\n\n",s, t, s-t);
     }
   // multiplicacao!!!  
    void multip(char n[])   
  {
       register int a, s, t, b, cont=0;
      char m[50], o[50];
     for(a=0;a<=50;a++){
     if(n[a]=='*')break;
     m[a]=n[a];}
     s=atoi(m);
     for(b=a+1;b<strlen(n);b++){
     o[cont]=n[b];cont++;}
     t=atoi(o);
     printf("   %d x %d = %d\n\n",s, t, s*t);
     }
   // divisao!!  
     void divisao(char n[])   
  {
       register int a, s, t, b, cont=0;
      char m[50], o[50];
     for(a=0;a<=50;a++){
     if(n[a]=='/')break;
     m[a]=n[a];}
     s=atoi(m);
     for(b=a+1;b<strlen(n);b++){
     o[cont]=n[b];cont++;}
     t=atoi(o);
     printf("   %d : %d = %d\n\n",s, t, s/t);
     }
 
