#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int primario, secundario;
    double fator;

    scanf("%d%d", &primario, &secundario);
    scanf("%lf", &fator);

    if (primario == 1)
    {
        if (secundario == 1)
        {
            printf("Aumenta mais!\n");
        }
        else
        {
            printf("Legal\n");
        }
    }
    else if (primario == 2)
    {
        if (secundario == 1)
        {
            printf("Essa eh punk\n");
        }
        else
        {
            printf("Hoje eu choro\n");
        }
    }
    else
    {
        if (secundario == 1)
        {
            printf("Aumenta mais!\n");
        }
        else
        {
            printf("Legal\n");
        }
    }

    if (fator >= 1 && fator <= 4)
    {
        printf(":'(\n");
    }
    else if (fator <= 7)
    {
        printf("^_^\n");
    }
    else
    {
        printf("=D\n");
    }

	return 0;
}