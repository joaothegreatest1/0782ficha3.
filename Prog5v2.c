#include <stdio.h>

int main(void){
//Variavel para a opcao de operacao escolhida
int opcao;
//Variavel para o numero introduzido pelo utilizador
int numero1;
//Variavel para o 2º numero introduzido pelo utilizador
int numero2;
//Variavel para a conta
float conta;
//Pedir ao utilizador para introduzir a operacao que quer
printf("Multiplicacao - 1\nDivisao - 2\nAdicao - 3\nSubtracao - 4\n");
scanf("%d",&opcao);
//Pedir ao utilizador para introduzir o 1º numero
printf("Diga um numero para fazer a operacao\n");
scanf("%d",&numero1);
//Pedir ao utlizador para introduzir o 2º numero
printf("Diga um segundo numero para fazer a operacao\n");
scanf("%d",&numero2);
//Switch para calcular de acordo com a operacao escolhida

switch(opcao)
{
case 1://switch para a multiplicacao
conta = numero1 * numero2;
break;
case 2://switch para a divisao
conta = numero1 / numero2;
break;
case 3://switch para a soma
conta = numero1 + numero2;
break;
case 4://switch para a subtracao
conta = numero1 - numero2;
break;


default://Mostra esta mensagem se o valor introduzido nao for valido(1-4)
printf("Valor nao valido");
    break;
}

//Mostrar o resultado final
printf("Resultado final =%0.2f",conta);

return 0;}