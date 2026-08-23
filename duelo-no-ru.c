#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double bonus1(int classe1, int classe2)
{
    if (classe1 == 1 && classe2 == 3)
    {
        return 1.3;
    }
    return 1;
}

double bonus2(int classe1, int classe2)
{
    if (classe1 == 3 && classe2 == 2)
    {
        return 1.25;
    }
    return 1;
}

double bonus3(int classe1, int classe2)
{
    if (classe1 == 2 && classe2 == 1)
    {
        return 1.15;
    }
    return 1;
}

int duelos(double vida1, double vida2, double ataque1, double ataque2)
{
    // se o retorno for 1 é pedro, se for 2 é tulio

    if (vida1 < vida2)
    {
        vida2 = vida2 - ataque1;
        if (vida2 > 0)
        {
            vida1 = vida1 - ataque2;
            if (vida1 <= 0)
            {
                return 2;
            }
            else if (vida1 > 0 && vida2 > 0)
            {
                if (vida1 > vida2)
                {
                    return 1;
                }
                else if (vida2 > vida1)
                {
                    return 2;
                }
                else
                {
                    if (ataque1 > ataque2)
                    {
                        return 1;
                    }
                    else
                    {
                        return 2;
                    }
                }
            }
        }
        else
        {
            return 1;
        }
    }
    else if (vida2 < vida1)
    {
        vida1 = vida1 - ataque2;
        if (vida1 > 0)
        {
            vida2 = vida2 - ataque1;
            if (vida2 <= 0)
            {
                return 1;
            }
            else if (vida1 > 0 && vida2 > 0)
            {
                if (vida1 > vida2)
                {
                    return 1;
                }
                else if (vida2 > vida1)
                {
                    return 2;
                }
                else
                {
                    if (ataque1 > ataque2)
                    {
                        return 1;
                    }
                    else
                    {
                        return 2;
                    }
                }
            }
        }
        else
        {
            return 2;
        }
    }
    else
    {
        vida2 = vida2 - ataque1;
        if (vida2 > 0)
        {
            vida1 = vida1 - ataque2;
            if (vida1 <= 0)
            {
                return 2;
            }
            if (vida1 > 0 && vida2 > 0)
            {
                if (vida1 > vida2)
                {
                    return 1;
                }
                else if (vida2 > vida1)
                {
                    return 2;
                }
                else
                {
                    if (ataque1 > ataque2)
                    {
                        return 1;
                    }
                    else
                    {
                        return 2;
                    }
                }
            }
        }
        else
        {
            return 1;
        }
    }
}

int main() 
{
    int c1, c2, c3, c4, c5, c6;
    double atk1, atk2, atk3, atk4, atk5, atk6;
    double vd1, vd2, vd3, vd4, vd5, vd6;
    int pedro = 0;
    int tulio = 0;

    scanf("%d %lf %lf", &c1, &atk1, &vd1);
    scanf("%d %lf %lf", &c2, &atk2, &vd2);
    scanf("%d %lf %lf", &c3, &atk3, &vd3);
    scanf("%d %lf %lf", &c4, &atk4, &vd4);
    scanf("%d %lf %lf", &c5, &atk5, &vd5);
    scanf("%d %lf %lf", &c6, &atk6, &vd6);

    // bonus1

    vd1 *= bonus1(c1, c4);
    vd4 *= bonus1(c4, c1);
    vd2 *= bonus1(c2, c5);
    vd5 *= bonus1(c5, c2);
    vd3 *= bonus1(c3, c6);
    vd6 *= bonus1(c6, c3);

    // bonus2

    atk1 *= bonus2(c1, c4);
    atk4 *= bonus2(c4, c1);
    atk2 *= bonus2(c2, c5);
    atk5 *= bonus2(c5, c2);
    atk3 *= bonus2(c3, c6);
    atk6 *= bonus2(c6, c3);

    // bonus3

    vd1 *= bonus3(c1, c4);
    vd4 *= bonus3(c4, c1);
    vd2 *= bonus3(c2, c5);
    vd5 *= bonus3(c5, c2);
    vd3 *= bonus3(c3, c6);
    vd6 *= bonus3(c6, c3);

    atk1 *= bonus3(c1, c4);
    atk4 *= bonus3(c4, c1);
    atk2 *= bonus3(c2, c5);
    atk5 *= bonus3(c5, c2);
    atk3 *= bonus3(c3, c6);
    atk6 *= bonus3(c6, c3);

    //duelos(int vida1, int vida2, int ataque1, int ataque2)

    if (duelos(vd1, vd4, atk1, atk4) == 1)
    {
        pedro++;
        printf("Rodada1: Pedro\n");
    }
    else
    {
        tulio++;
        printf("Rodada1: Tulio\n");
    }

    if (duelos(vd2, vd5, atk2, atk5) == 1)
    {
        pedro++;
        printf("Rodada2: Pedro\n");
    }
    else
    {
        tulio++;
        printf("Rodada2: Tulio\n");
    }

    if (duelos(vd3, vd6, atk3, atk6) == 1)
    {
        pedro++;
        printf("Rodada3: Pedro\n");
    }
    else
    {
        tulio++;
        printf("Rodada3: Tulio\n");
    }

    if (pedro > tulio)
    {
        printf("Pedro vitorioso\n");
    }
    else
    {
        printf("Tulio vitorioso\n");
    }
}