#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double dano, n, v;
    char w, t;

    scanf("%lf %c %c%lf%lf", &dano, &w, &t, &n, &v);

    if (w == 'A')
    {
        dano *= 0.8;
    }
    else if (w == 'M')
    {
        dano *= 1.5;
    }

    if (t == 'F')
    {
        dano *= 1.2;
    }
    else if (t == 'M')
    {
        dano *= 0.9;
    }

    if (n >= 10)
    {
        dano *= 1.3;
    }
    else if (n >= 5)
    {
        dano *= 1.1;
    }


    if (dano >= v)
    {
        printf("%.2lf\n", dano);
        printf("O monstro foi derrotado!\n");
    }
    else
    {
        printf("%.2lf\n", dano);
        printf("O monstro sobreviveu!\n");
    }

	return 0;
}