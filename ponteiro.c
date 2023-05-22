
// ponteiro
#include<stdio.h>
#include<stdlib.h>
main(){
       float pi = 3; //declara a vari�vel
       float *pont; // declara o ponteiro
       pont = &pi; // ponteiro recebe o endere�o da vari�vel pi
       printf("O valor da Variavel pi: %.2f\n", *pont); // imprime o valor da vari�vel pi que o ponteiro est� apontando
       printf("O endereco da Variavel pi: %p\n\n", pont); // imprime o endere�o da vari�vel pi que o ponteiro est� apontando
       system("pause");
       
       }
