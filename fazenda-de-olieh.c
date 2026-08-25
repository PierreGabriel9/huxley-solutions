#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double area_pocao, area_fazenda, agua;
    int temperatura;
    char fase_lua;
    double eficiencia = 1;

    scanf( "%lf %c %lf%lf%d", &area_pocao, &fase_lua, &area_fazenda, &agua, &temperatura);

    double agua_metro = agua / area_fazenda;

    if (fase_lua == 'C')
    {
        eficiencia *= 1.5;
    }
    else if (fase_lua == 'F')
    {
        eficiencia *= 1.2;
    }
    else 
    {
        eficiencia *= 0.9;
    }

    if (agua_metro >= 2)
    {
        eficiencia *= 1.3;
    }
    else
    {
        eficiencia *= 0.75;
    }

    if (temperatura < 10)
    {
        eficiencia *= 0.85;
    }
    else if (temperatura > 25)
    {
        eficiencia *= 1.25;
    }

    area_pocao *= eficiencia;

    if (area_pocao > area_fazenda)
    {
        printf("%.2lf\n", area_pocao);
        printf("Oh nao, a fazenda cresceu demais!\n");
    }
    else
    {
        printf("%.2lf\n", area_pocao);
    }

	return 0;
}