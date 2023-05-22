// calcular potencia
// programador: Maikon Monteiro

#include<stdio.h>

int potencia(int b,int e);
main()
{
    int b, e, pot;
      
printf("digite o valor da base:\n");
scanf("%d",&b);
printf("digite o valor do expoente:\n");
scanf("%d",&e);
pot=potencia(b, e);
printf("resultado: %d\n",pot);
system("PAUSE");
}
int potencia(int b,int e)
{
    int cont, result;
    result=1;
    for(cont=1; cont<=e; cont++)
    result=result*b;
    return result;
}
