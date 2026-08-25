#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n1aldrin, n2aldrin, n1beren, n2beren;
    double n3aldrin, n4aldrin, n3beren, n4beren;
    double n5aldrin, n6aldrin, n7aldrin, n5beren, n6beren, n7beren;

    double a = 0;
    double b = 0;

    scanf("%d%d", &n1aldrin, &n2aldrin);
    scanf("%lf%lf", &n3aldrin, &n4aldrin);
    scanf("%lf%lf%lf", &n5aldrin, &n6aldrin, &n7aldrin);

    scanf("%d%d", &n1beren, &n2beren);
    scanf("%lf%lf", &n3beren, &n4beren);
    scanf("%lf%lf%lf", &n5beren, &n6beren, &n7beren);

    // aldrin

    if ((n1aldrin + n2aldrin) % 2 == 0)
    {
        a += 2;
    }
    
    if ((n3aldrin + n4aldrin) / 2 > 7)
    {
        a += 4;
    }
    else
    {
        a -= 2;
    }

    double media_aldrin = ((n5aldrin * 2) + (n6aldrin * 3) + (n7aldrin * 4)) / 9.0;
    if (media_aldrin >= 10 && media_aldrin <= 20)
    {
        a += 5;
    }
    else
    {
        a -= 2;
    }

    // beren

    if (n1beren > n2beren)
    {
        b += 2;
    }
    
    if (n3beren / n4beren >= 1)
    {
        b += 4;
    }
    else
    {
        b -= 2;
    }

    if (n5beren + n6beren >= n7beren)
    {
        b += 5;
    }
    else
    {
        b -= 2;
    }

    // rodadas concluidas

    if (a >= 0 && (int) a % 3 == 0)
    {
        a *= 1.2;
    }

    if (b >= 0 && (int) b % 2 == 0)
    {
        b *= 1.25;
    }

    if (a > b)
    {
        printf("Aldrin: %.2lf - Vencedor\n", a);
        printf("Beren: %.2lf - Perdedor\n", b);
    }
    else if (b > a)
    {
        printf("Beren: %.2lf - Vencedor\n", b);
        printf("Aldrin: %.2lf - Perdedor\n", a);
    }
    else
    {
        printf("Aldrin: %.2lf - Empate\n", a);
        printf("Beren: %.2lf - Empate\n", b);
    }

	return 0;
}