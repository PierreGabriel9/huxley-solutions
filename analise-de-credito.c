#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double salario, divida, limite, disponivel;
    scanf("%lf %lf", &salario, &divida);

    limite = salario * 0.3;

    if (limite <= divida)
    {
        printf("0.00\n");
    }
    else
    {
        disponivel = limite - divida;
        printf("%.2lf\n", disponivel);
    }

	return 0;
}