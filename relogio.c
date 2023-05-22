#include<stdio.h>
#define P 128000
struct tempo{
       int horas;
       int minutos;
       int segundos;
       };
  void tela1(struct tempo *p);
  void tela2(struct tempo *p);
  void func(void);
  main()
  {
        struct tempo t;
        t.horas=0;
        t.minutos=0;
        t.segundos=0;
        for(;;)
        {
          tela2(&t);
          tela1(&t);
          }
          }
   void tela2(struct tempo *p)
   {
        p->segundos++;
        if(p->segundos==60)
        {
        p->segundos=0;
        p->minutos++;
        }
        if(p->minutos==60)
        {
          p->minutos=0;
          p->horas++;
          }
        if(p->horas==24)
        p->horas=0;
        func();
        }
  void tela1(struct tempo *p)
  {
       printf("                  -Relogio-\n\n");
       printf("                   %02d:",p->horas);
       printf("%02d:",p->minutos);
       printf("%02d\n\n",p->segundos); 
       
       system("cls");   
       }
    void func(void)
    {
         long int a;
         for(a=0; a<P; a++);
         }     
