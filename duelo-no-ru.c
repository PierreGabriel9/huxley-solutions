#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double bonus_caso13(int classe1, int classe2);
double bonus_caso23(int classe1, int classe2);

int main() 
{
    int c1, c2, c3, c4, c5, c6;
    double atk1, atk2, atk3, atk4, atk5, atk6;
    double vd1, vd2, vd3, vd4, vd5, vd6;

    scanf("%d %lf %lf", &c1, &atk1, &vd1);
    scanf("%d %lf %lf", &c2, &atk2, &vd2);
    scanf("%d %lf %lf", &c3, &atk3, &vd3);
    scanf("%d %lf %lf", &c4, &atk4, &vd4);
    scanf("%d %lf %lf", &c5, &atk5, &vd5);
    scanf("%d %lf %lf", &c6, &atk6, &vd6);

    vd1 *= bonus_caso13(c1, c4);
    vd4 *= bonus_caso13(c4, c1);
    vd2 *= bonus_caso13(c2, c5);
    vd5 *= bonus_caso13(c5, c2);
    vd3 *= bonus_caso13(c3, c6);
    vd6 *= bonus_caso13(c6, c3);

    atk1 *= bonus_caso23(c1, c4);
    atk4 *= bonus_caso23(c4, c1);
    atk2 *= bonus_caso23(c2, c5);
    atk5 *= bonus_caso23(c5, c2);
    atk3 *= bonus_caso23(c3, c6);
    atk6 *= bonus_caso23(c6, c3);

    /*if (vd4 - atk1 <= 0 && vd1 - atk4 != 0)
    {
        printf("Rodada1: Pedro\n");
    }
    else if (vd1 - atk4 <= 0 && vd4 - atk1 != 0)
    {
        printf("Rodada1: Tulio\n");
    }
    else if (vd1 - atk4 > 0 && vd4 - atk1 > 0)
    {
        if (vd1 > vd4)
        {
            printf("Rodada1: Pedro\n");
        }
        else if (vd4 > vd1)
        {
            printf("Rodada1: Tulio\n");
        }
        else
        {
            if (atk1 > atk4)
            {
                printf("Rodada1: Pedro\n");
            }
            else
            {
                printf("Rodada1: Tulio\n");
            }
        }
    }

    if (vd5 - atk2 <= 0 && vd2 - atk5 != 0)
    {
        printf("Rodada2: Pedro\n");
    }
    else if (vd2 - atk5 <= 0 && vd5 - atk2 != 0)
    {
        printf("Rodada2: Tulio\n");
    }
    else if (vd2 - atk5 > 0 && vd5 - atk2 > 0)
    {
        if (vd2 > vd5)
        {
            printf("Rodada2: Pedro\n");
        }
        else if (vd5 > vd2)
        {
            printf("Rodada2: Tulio\n");
        }
        else
        {
            if (atk2 > atk5)
            {
                printf("Rodada2: Pedro\n");
            }
            else
            {
                printf("Rodada2: Tulio\n");
            }
        }
    }

    if (vd6 - atk3 <= 0 && vd3 - atk6 != 0)
    {
        printf("Rodada3: Pedro\n");
    }
    else if (vd3 - atk6 <= 0 && vd6 - atk3 != 0)
    {
        printf("Rodada3: Tulio\n");
    }
    else if (vd3 - atk6 > 0 && vd6 - atk3 > 0)
    {
        if (vd3 > vd6)
        {
            printf("Rodada3: Pedro\n");
        }
        else if (vd6 > vd3)
        {
            printf("Rodada3: Tulio\n");
        }
        else
        {
            if (atk3 > atk6)
            {
                printf("Rodada3: Pedro\n");
            }
            else
            {
                printf("Rodada3: Tulio\n");
            }
        }
    }*/








    
	return 0;
}

double bonus_caso13 (int classe1, int classe2)
{
    if (classe1 == 1 && classe2 == 3)
    {
        return 1.3;
    }
    else if (classe1 == 2 && classe2 == 1)
    {
        return 1.15;
    }
    return 1;
}

double bonus_caso23 (int classe1, int classe2)
{
    if (classe1 == 3 && classe2 == 2)
    {
        return 1.25;
    }
    else if (classe1 == 2 && classe2 == 1)
    {
        return 1.15;
    }
    return 1;
}