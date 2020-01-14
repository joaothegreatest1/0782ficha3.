#include <stdio.h>


int main(void){
//Variavel do numero introduzido
int numero;
//Variavel do numero sucessor
int sucessor;
//Variavel do numero antecessor
int antecessor;





//Pedir ao utilizador um numero
printf("Diga um numero\n");
scanf("%d",&numero);


//Conta para calcular o sucessor ao numero introduzido
sucessor = numero +1;
//Conta para calcular o antecessor ao numero introduzido
antecessor = numero - 1;
//Apresentar o sucessor e o antecessor
printf("Sucessor:%d\nAntecessor:%d\n",sucessor,antecessor);




















    return 0;
}