// Sistema de lanchonete

#include<stdio.h>

main()
{
      int cod,q;
      float total; 
      total=0;

printf("\n");      
printf("                     >>> LANCHONETE MAIKON <<<\n");
printf("\n");
printf("                          ...cardapio...\n");
printf("                                     Cod.\n");
printf("                   cachorro quente ->100\n");
printf("                   bauru simplis   ->101\n");
printf("                   bauru com ovo   ->102\n");
printf("                   hamburguer      ->103\n");
printf("                   cheeseburguer   ->104\n");
printf("                   refrigerante    ->105\n");
printf("\n");
printf("faca seu pedido!\n");
do
{
printf(" codigo:\n");
scanf("%d",&cod);
if(cod==0)
break;

printf(" quantidade:\n");
scanf("%d",&q);

switch(cod){
case 100:
total=total+(q*1.20);
break;
case 101:
total=total+(q*1.30);
break;
case 102:
total=total+(q*1.50);
break;
case 103:
total=total+(q*1.20);
break;
case 104:
total=total+(q*1.30);
break;
case 105:
total=total+(q*1.00);

break;

default:
printf("    CODIGO INVALIDO!!\n ");
}
}
while(cod!=0);
printf("\n");
printf("        O TOTAL E %.2f\n",total);
printf("\n");
system("PAUSE");
}



      
