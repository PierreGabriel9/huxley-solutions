#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double salario;
    scanf("%lf", &salario);
    
    if (salario > 500)
    {
        double aumento = salario / 10;
        printf("%.2lf\n", aumento + salario);
    }
    else if (salario > 300)
    {
        double aumento = salario * 7/100;
        printf("%.2lf\n", aumento + salario);
    }
    else
    {
        double aumento = salario * 5/100;
        printf("%.2lf\n", aumento + salario);
    }
    
	return 0;
}