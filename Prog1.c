#include <stdio.h>

int main(void){
//Variavel para Fahrenheit
float fahr;
//Variavel para Celsius
float cel;
//Pedir ao utilizador os graus em Fahrenheit
printf("Graus em Fahrenheit\n");
scanf("%f",&fahr);
//Conta
cel = (fahr - 32) * 5 / 9;
//Apresentar o resultado da conversao
printf("%0.2f ºC\n",cel);




























return 0;
}