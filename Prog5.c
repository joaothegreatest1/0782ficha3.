#include <stdio.h>

int main(void){

int opcao;

int numero1;

int numero2;

float conta;

printf("Multiplicacao - 1\nDivisao - 2\nAdicao - 3\nSubtracao - 4\n");
scanf("%d",&opcao);

printf("Diga um numero para fazer a operacao\n");
scanf("%d",&numero1);

printf("Diga um segundo numero para fazer a operacao\n");
scanf("%d",&numero2);
if (opcao == 1)
{
    conta = numero1 * numero2;
}else if (opcao == 2)
{
    conta = numero1 / numero2;
}else if (opcao == 3)
{
    conta = numero1 + numero2;
}else if (opcao == 4)
{
    conta = numero1 - numero2;
}

printf("Resultado final =%0.2f",conta);























    return 0;
}