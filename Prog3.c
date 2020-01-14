#include <stdio.h>


int main(void){

//Variavel para o premio
int premio = 500000;
//Variavel para o premio do 1º vencedor
float premio1 = premio * 0.46;
//Variavel para o premio do 2º vencedor
float premio2 = premio * 0.32;
//Variavel para o premio do 3º vencedor
float premio3 = premio - premio1 - premio2;

//Apresentar os premios a cada vencedor
printf("1º Vencedor : %0.2f €\n2º Vencedor : %0.2f €\n3º Vencedor : %0.2f €\n",premio1,premio2,premio3);

















    return 0;
}