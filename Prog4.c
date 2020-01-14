#include <stdio.h>

int main(void){
//Variavel dia
int dia;

//Pedir ao utilizador um numero 
printf("Diga um numero entre 1 e 7\n");
scanf("%d",&dia);

//Switch para apresentar o dia de acordo com o numero introduzido
switch (dia)
{
case 1:
//Domingo se o numero introduzido for 1
    printf("Domingo\n");
break;

case 2:
//Segunda se o numero introduzido for 2
    printf("Segunda\n");
break;
case 3:
//Terca se o numero introduzido for 3
    printf("Terca\n");
break;
case 4:
//Quarta se o numero introduzido for 4
    printf("Quarta\n");
break;
case 5:
//Quinta se o numero introduzido for 5
    printf("Quinta\n");
break;
case 6:
//Sexta se o numero introduzido for 6
    printf("Sexta\n");
break;
case 7:
//Sabado se o numero introduzido for 7
    printf("Sabado\n");
break;

default:
//Se o valor introduzio nao for entre 1 e 7
printf("Valor invalido");
    break;
}

















    return 0;
}