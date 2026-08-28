#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int c, t, a, l, e;
    double chance = 100;
    scanf("%d%d%d%d%d", &c, &t, &a, &l, &e);

    if (c == 1)
    {
        if (t == 3)
        {
            chance -= 20.7;
        }
        else if (t == 2)
        {
            chance += 10.51;
        }
        else
        {
            chance += 33.21;
        }

        if (a > 40000)
        {
            chance += (a * 0.0008);
        }
        else
        {
            chance -= (a * 0.0008);
        }

        if (e > 0)
        {
            chance += (e * 2.7);
        }
        else
        {
            chance -= (e * 1.8);
        }
    }

    else
    {
        if (t == 2 || t == 3)
        {
            printf("A chance de vitoria do flamengo e de 0.00");
            return 0;
        }
        else
        {
            chance -= 10.87;
        }

        if (a > 45000)
        {
            chance -= (a * 0.0003);
        }
        else
        {
            chance -= (a * 0.0001);
        }

        if (e > 0)
        {
            chance += (e * 5.2);
        }
        else
        {
            chance -= (e * 1.5);
        }
    }

    chance -= (l * 2.7);

    if (chance > 100)
    {
        printf("A chance de vitoria do flamengo e de 100.00\n");
        return 0;
    }
    else if (chance < 0)
    {
        printf("A chance de vitoria do flamengo e de 0.00\n");
        return 0;
    }

    printf("A chance de vitoria do flamengo e de %.2lf\n", chance);

	return 0;
}