#include <stdio.h>

int main(void){

int dia;


printf("Diga um numero entre 1 e 7\n");
scanf("%d",&dia);

switch (dia)
{
case 1:
    printf("Domingo\n");
break;

case 2:
    printf("Segunda\n");
break;
case 3:
    printf("Terca\n");
break;
case 4:
    printf("Quarta\n");
break;
case 5:
    printf("Quinta\n");
break;
case 6:
    printf("Sexta\n");
break;
case 7:
    printf("Sabado\n");
break;

default:
printf("Valor invalido");
    break;
}

















    return 0;
}