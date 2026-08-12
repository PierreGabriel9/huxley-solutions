#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printvalor(double precofinal);

int main() 
{
    double litros, preco;
    char tipo;

    scanf("%lf %c", &litros, &tipo);

    if (tipo == 'A')
    {
        if (litros <= 20)
        {
            preco = litros * 0.97 * 1.9;
            printvalor(preco);
        }
        else 
        {
            preco = litros * 0.95 * 1.9;
            printvalor(preco);
        }
    }
    else if (tipo == 'G')
    {
        if (litros <= 20)
        {
            preco = litros * 0.96 * 2.5;
            printvalor(preco);
        }
        else 
        {
            preco = litros * 0.94 * 2.5;
            printvalor(preco);
        }
    }
    else
    {
        if (litros <= 25)
        {
            preco = litros * 1.66;
            printvalor(preco);
        }
        else 
        {
            preco = litros * 0.96 * 1.66;
            printvalor(preco);
        }
    }
	return 0;
}

void printvalor(double precofinal)
{
    printf("R$ %.2lf\n", precofinal);
}