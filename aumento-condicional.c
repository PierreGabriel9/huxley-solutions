#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double salario, aumento, novo_salario;
    scanf("%lf", salario);

    if (salario <= 280)
    {
        aumento = 0.2;
    }
    else if (salario > 280 && salario < 700)
    {
        aumento = 0.15;
    }
    else if (salario >= 700 && salario < 1500)
    {
        aumento = 0.1;
    }
    else
    {
        aumento = 0.05;
    }

    novo_salario = salario * (1 + aumento);

    printf("%.2lf\n", salario);
    printf("%.0lf\n", aumento * 100);
    printf("%.2lf\n", novo_salario - salario);
    printf("%.2lf\n", novo_salario);

	return 0;
}