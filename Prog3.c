#include <stdio.h>


int main(void){

int premio = 500000;

float premio1 = premio * 0.46;

float premio2 = premio * 0.32;

float premio3 = premio - premio1 - premio2;


printf("1º Vencedor : %0.2f €\n2º Vencedor : %0.2f €\n3º Vencedor : %0.2f €\n",premio1,premio2,premio3);

















    return 0;
}