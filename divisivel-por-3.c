#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int divisores(int n, int contador, int divisor)
{
    if (divisor > n)
    {
        return contador;
    }
    else
    {
        if (n % divisor == 0)
        {
            if (divisor % 3 == 0)
            {
                contador++;
                divisor++;
                return divisores(n, contador, divisor);
            }
            else
            {
                divisor++;
                return divisores(n, contador, divisor);
            }
        }
        else
        {
            divisor++;
            return divisores(n, contador, divisor);
        }
    }
}

int main() 
{
    int n;
    int contador = 0;
    int divisor = 1;
    scanf("%d", &n);

    int qtd = divisores(n, contador, divisor);

    if (qtd > 0)
    {
        printf("%d\n", qtd);
    }
    else
    {
        printf("O numero nao possui divisores multiplos de 3!\n");
    }
    
	return 0;
}