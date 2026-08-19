#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char pais, sexo;
    int idade;
    double valor_ingresso, preco_final, desconto;

    scanf(" %c%d %c%lf", &pais, &idade, &sexo, &valor_ingresso);

    if (idade < 1 || idade > 120)
    {
        printf("idade invalida!\n");
        return 0;
    }

    if (pais == 'B')
    {
        desconto = 0.5;
    }

    else if (pais == 'A')
    {
        if (sexo == 'M' && idade >= 18)
        {
            desconto = 0;
        }
        else
        {
            desconto = 0.2;
        }
    }

    else if (pais == 'F' || pais == 'C')
    {
        if (idade < 21)
        {
            printf("nao pode comprar\n");
            return 0;
        }
        else
        {
            desconto = 0.3;
        }
    }

    else if (pais == 'I' || pais == 'R')
    {
        if (idade < 16)
        {
            desconto = 0.4;
        }
        else
        {
            desconto = 0.3;
        }
    }

    else
    {
        if (sexo == 'F')
        {
            desconto = 0.1;
        }
        else
        {
            desconto = 0;
        }
    }

    preco_final = valor_ingresso * (1 - desconto);
    
    printf("R$ %.2lf\n", preco_final);
	
    return 0;
}