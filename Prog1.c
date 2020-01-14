#include <stdio.h>

int main(void){

float fahr;
float cel;

printf("Graus em Fahrenheit\n");
scanf("%f",&fahr);

cel = (fahr - 32) * 5 / 9;

printf("%0.2f ºC\n",cel);




























return 0;
}