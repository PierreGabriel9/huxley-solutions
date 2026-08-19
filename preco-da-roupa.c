#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double custo, preco, custo_tamanho, custo_tipo;
    char tamanho, tipo;

    scanf("%lf", &custo);
    scanf(" %c %c", &tamanho, &tipo);

    if (tamanho == 'P')
    {
        custo_tamanho = 2.75;
    }
    else if (tamanho == 'M')
    {
        custo_tamanho = 3.66;
    }
    else
    {
        custo_tamanho = 5.17;
    }

    if (tipo == 'B')
    {
        custo_tipo = 3.82;
    }
    else if (tipo == 'C')
    {
        custo_tipo = 4.55;
    }
    else
    {
        custo_tipo = 7.12;
    }

    preco = ((custo * custo_tamanho) + (custo * custo_tipo)) / 2;

    printf("%.2lf R$\n", preco);

	return 0;
}