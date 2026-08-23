#include <stdio.h>

int main()
{
    double salario, aumento;
    scanf("%lf", &salario);

    if (salario <= 1000)
    {
        aumento = 1.15;
    }
    else if (salario <= 2000)
    {
        aumento = 1.1;
    }
    else
    {
        aumento = 1.05;
    }
    printf("%.2lf\n", salario * aumento);
}