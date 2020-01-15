#include <stdio.h>


int main(void){

int dias;

int tarifa;

int km;

char res[20];

char categoria[20];

char seguro[20];

float preco_sem_seguro;

float preco;

float diaria;

float quantos_km;

do{

printf("Quantos dias?\n");
scanf("%d",&dias);

printf("Qual a tarifa\n1-Km-Ilimitados\n2-Diaria + Km\n");
scanf("%d",&tarifa);

if (tarifa == 1)
{
    printf("Qual a categoria\nA-27.50 €\nB-32.50 €\nC-37.50 €\nD-40.00 €\n");
    scanf("%s",categoria);
    if (categoria[0] == 'A' || categoria[0] == 'a')
    { preco_sem_seguro = dias * 27.50;

    printf("Vai querer seguro?\n");
    scanf("%s",seguro);


    if (seguro[0] == 'S' || seguro[0] == 's')
    {
        preco = preco_sem_seguro + 6.50;
        printf("O orcamento para %d dias com seguro é  %0.2f €\n",dias,preco);

        diaria = dias * 14;

        quantos_km =( preco_sem_seguro - diaria) / (0.17);
        printf("Na outra tarifa para a mesma situaçao iria pagar %0.2f diarios e podia fazer %0.2f km\n",diaria,quantos_km);
        
    }else
    {
        printf("O orçamento para %d dias sem seguro é %0.2f €\n",dias,preco_sem_seguro);

        diaria = dias * 14;

        quantos_km =( preco_sem_seguro - diaria) / (0.17);
        printf("Na outra tarifa para a mesma situaçao iria pagar %0.2f diarios e podia fazer %0.2f km\n",diaria,quantos_km);
    }
    
    

    }else if (categoria[0] == 'B' || categoria[0] == 'b')
    { preco_sem_seguro = dias * 32.50;

    printf("Vai querer seguro?\n");
    scanf("%s",seguro);


    if (seguro[0] == 'S' || seguro[0] == 's')
    {
        preco = preco_sem_seguro + 7.50;
        printf("O orcamento para %d dias com seguro é  %0.2f €\n",dias,preco);
        diaria = dias * 17;

        quantos_km =( preco_sem_seguro - diaria) / (0.20);
        printf("Na outra tarifa para a mesma situaçao iria pagar %0.2f diarios e podia fazer %0.2f km\n",diaria,quantos_km);
    }else
    {
        printf("O orçamento para %d dias sem seguro é   %0.2f €\n",dias,preco_sem_seguro);
        diaria = dias * 17;

        quantos_km =( preco_sem_seguro - diaria) / (0.20);
        printf("Na outra tarifa para a mesma situaçao iria pagar %0.2f diarios e podia fazer %0.2f km\n",diaria,quantos_km);
    }
    }else if (categoria[0] == 'C' || categoria[0] == 'c')
    { preco_sem_seguro = dias * 37.50;

    printf("Vai querer seguro?\n");
    scanf("%s",seguro);


    if (seguro[0] == 'S' || seguro[0] == 's')
    {
        preco = preco_sem_seguro + 8.50;
        printf("O orcamento para %d dias com seguro é  %0.2f €\n",dias,preco);
        diaria = dias * 20;

        quantos_km =( preco_sem_seguro - diaria) / (0.25);
        printf("Na outra tarifa para a mesma situaçao iria pagar %0.2f diarios e podia fazer %0.2f km\n",diaria,quantos_km);
    }else
    {
        printf("O orçamento para %d dias sem seguro é %0.2f €\n",dias,preco_sem_seguro);
        diaria = dias * 20;

        quantos_km =( preco_sem_seguro - diaria) / (0.25);
        printf("Na outra tarifa para a mesma situaçao iria pagar %0.2f diarios e podia fazer %0.2f km\n",diaria,quantos_km);
    }
    
    

    }else if (categoria[0] == 'D' || categoria[0] == 'd')
    { preco_sem_seguro = dias * 40;

    printf("Vai querer seguro?\n");
    scanf("%s",seguro);


    if (seguro[0] == 'S' || seguro[0] == 's')
    {
        preco = preco_sem_seguro + 10;
        printf("O orcamento para %d dias com seguro é  %0.2f €\n",dias,preco);
        diaria = dias * 22;

        quantos_km =( preco_sem_seguro - diaria) / (0.30);
        printf("Na outra tarifa para a mesma situaçao iria pagar %0.2f diarios e podia fazer %0.2f km\n",diaria,quantos_km);
    }else
    {
        printf("O orçamento para %d dias sem seguro %0.2f €\n",dias,preco_sem_seguro);
        diaria = dias * 22;

        quantos_km =( preco_sem_seguro - diaria) / (0.30);
        printf("Na outra tarifa para a mesma situaçao iria pagar %0.2f diarios e podia fazer %0.2f km\n",diaria,quantos_km);
    }
    }
}else if (tarifa == 2)
{
    printf("Qual a categoria\nA-14.00 + 0.17 € por km\nB-17.00 + 0.20 € por km\nC-20.00 + 0.25 € por km\nD-22.00 + 0.30 € por km\n");
    scanf("%s",categoria);
    if (categoria[0] == 'A' || categoria[0] == 'a')
    { 
        printf("Quantos kilometros espera fazer?\n");
        scanf("%d",&km);
        km = km * 0.17;

        preco_sem_seguro = dias * 14 + km ;

    printf("Vai querer seguro?\nInsira 's para sim");
    scanf("%s",seguro);


    if (seguro[0] == 'S' || seguro[0] == 's')
    {
        preco = preco_sem_seguro + 6.50;
        printf("O orcamento para %d dias com a estimativa de %d km com seguro é %0.2f €\n",dias,km,preco);
    }else
    {
        printf("O orçamento para %d dias com a estimativa de %d km sem seguro é %0.2f €\n",dias,km,preco_sem_seguro);
    }

    }else if (categoria[0] == 'B' || categoria[0] == 'b')
    {  printf("Quantos kilometros espera fazer?\n");
        scanf("%d",&km);
        km = km * 0.20;

        preco_sem_seguro = dias * 17 + km ;

    printf("Vai querer seguro?\n");
    scanf("%s",seguro);


    if (seguro[0] == 'S' || seguro[0] == 's')
    {
        preco = preco_sem_seguro + 7.50;
        printf("O orcamento para %d dias com a estimativa de %d km com seguro é %0.2f €\n",dias,km,preco);
    }else
    {
        printf("O orçamento para %d dias com a estimativa de %d km sem seguro é %0.2f €\n",dias,km,preco_sem_seguro);
    }
    }else if (categoria[0] == 'C' || categoria[0] == 'c')
    {  printf("Quantos kilometros espera fazer?\n");
        scanf("%d",&km);
        km = km * 0.20;

        preco_sem_seguro = dias * 25 + km ;

    printf("Vai querer seguro?\n");
    scanf("%s",seguro);

    if (seguro[0] == 'S' || seguro[0] == 's')
    {
        preco = preco_sem_seguro + 8.50;
        printf("O orcamento para %d dias com a estimativa de %d km com seguro é %0.2f €\n",dias,km,preco);
    }else
    {
        printf("O orçamento para %d dias com a estimativa de %d km sem seguro %0.2f €\n",dias,km,preco_sem_seguro);
    }
    }else if (categoria[0] == 'D' || categoria[0] == 'd')
    {  printf("Quantos kilometros espera fazer?\n");
        scanf("%d",&km);
        km = km * 0.30;

        preco_sem_seguro = dias * 22 + km ;

    printf("Vai querer seguro?\n");
    scanf("%s",seguro);


    if (seguro[0] == 'S' || seguro[0] == 's')
    {
        preco = preco_sem_seguro + 10;
        printf("O orcamento para %d dias com a estimativa de %d km com seguro é %0.2f €\n",dias,km,preco);
    }else
    {
        printf("O orçamento para %d dias com a estimativa de %d km sem seguro é %0.2f €\n",dias,km,preco_sem_seguro);
    }
    }
    
} printf("Quer pedir outro orcamento?");
scanf("%s",res);
}while (res[0] == 'S' || res[0] == 's');


    return 0;
}