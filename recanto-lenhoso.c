#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int un, dz, ct, ml, dm, num;

    scanf("%d%d%d%d%d", &dm, &ml, &ct, &dz, &un);

    num = (dm * 10000) + (ml * 1000) + (ct * 100) + (dz * 10) + un;
    
    if (dm == un && ml == dz)
    {
        printf("Feldspato, de um esporro no Gabro por mim\n");
    }
    else if (num % 2 == 0 && num % 7 != 0)
    {
        printf("Feldspato, va para Gemeo Calido\n");
    }
    else if (num % 7 == 0 && num % 2 != 0)
    {
        printf("Feldspato, va para Gemeo Cinzento\n");
    }
    else if (num >= 50000 && num <= 99999)
    {
        printf("Feldspato, va para Vale Incerto\n");
    }
    else if (num >= 100 && num <=49999)
    {
        printf("Feldspato, va para Profundezas do Gigante\n");
    }
    else if (num > 0 && num < 3)
    {
        printf("Feldspato, va para Abrolho Sombrio\n");
    }
    else
    {
        printf("Feldspato, foi um erro de leitura\n");
    }
	return 0;
}