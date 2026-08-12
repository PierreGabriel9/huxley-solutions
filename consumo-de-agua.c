#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int consumo, conta;
    scanf("%i", &consumo);

    if (consumo <= 10)
    {
        printf("7\n");
    }
    else if (consumo > 10 && consumo <= 30)
    {
        conta = 7 + (consumo - 10);
        printf("%i\n", conta);
    }
    else if (consumo > 30 && consumo <= 100)
    {
        conta = 27 + ((consumo - 30) * 2);
        printf("%i\n", conta);
    }
    else
    {
        conta = 167 + ((consumo - 100) * 5);
        printf("%i\n", conta);
    }
    
	return 0;
}