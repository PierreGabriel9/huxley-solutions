#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double bonus(double nivel)
{
    if (nivel >= 1 && nivel <= 5)
    {
        return 1.2;
    }
    else if (nivel <= 10)
    {
        return 1.5;
    }
    else if (nivel <= 15)
    {
        return 1.8;
    }
    else if (nivel <= 20)
    {
        return 2;
    }
}

int main() 
{
    double nivelp1, nivelp2;
    double danop1, vidap2;

    scanf("%lf%lf", &nivelp1, &danop1);
    scanf("%lf%lf", &nivelp2, &vidap2);

    if (nivelp1 < 1 || nivelp2 < 1)
    {
        printf("Nivel abaixo\n");
        return 0;
    }
    if (nivelp1 > 20 || nivelp2 > 20)
    {
        printf("Nivel acima\n");
        return 0;
    }

    danop1 *= bonus(nivelp1);
    vidap2 *= bonus(nivelp2);

    vidap2 -= danop1;

    if (vidap2 <= 0)
    {
        printf("Personagem 1 venceu\n");
        printf("Dano causado: %.2lf\n", danop1);
    }
    else
    {
       printf("Personagem 2 venceu\n");
       printf("Vida restante: %.2lf\n", vidap2);
    }

	return 0;
}