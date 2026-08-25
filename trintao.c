#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double bonus(char passada, char x, double pontuacao)
{
    if (passada == x)
    {
        if (pontuacao >= 0 && pontuacao <= 20)
        {
            return 10 + (0.2 * pontuacao);
        }
        else if (pontuacao <= 40)
        {
            return 10 + (0.4 * pontuacao);
        }
        else if (pontuacao <= 60)
        {
            return 10 + (0.6 * pontuacao);
        }
        else if (pontuacao <= 80)
        {
            return 10 + (0.8 * pontuacao);
        }
        else
        {
            return 10 + pontuacao;
        }
    }
    else
    {
        return 10;
    }
}

int main() 
{
    double arthur, pedro, tulio, will;
    double pa, pp, pt, pw;
    double media, regularidade;
    char passada;
    char a = 'a';
    char p = 'p';
    char t = 't';
    char w = 'w';

    scanf ("%lf%lf%lf%lf", &pa, &pp, &pt, &pw);
    scanf ("%lf%lf%lf%lf", &arthur, &pedro, &tulio, &will);
    scanf (" %c", &passada);

    if (arthur < 0 || arthur > 100 || pedro < 0 || pedro > 100 || tulio < 0 || tulio > 100|| will < 0 || will > 100)
    {
        printf("Números inválidos!\n");
        printf("Próxima rodada.\n");
        return 0;
    }

    double ar = pa;
    double pe = pp;
    double tu = pt;
    double wi = pw;

    media = (arthur + pedro + tulio + will) / 4;

    double dt_arthur = fabs(arthur - media);
    double dt_pedro = fabs(pedro - media);
    double dt_tulio = fabs(tulio - media);
    double dt_will = fabs(will - media);

    regularidade = sqrt(pow(arthur - media, 2) + pow(pedro - media, 2) + pow(tulio - media, 2) + pow(will - media, 2));

    if (dt_arthur < dt_pedro && dt_arthur < dt_tulio &&  dt_arthur < dt_will)
    {
        pa += bonus(passada, a, pa);
        if (passada == 'a')
        {
            printf("Arthur venceu outra vez!\n");
            printf("Pontuação: +%.2lf\n", pa - ar);
        }
        else
        {
            printf("Arthur venceu!\n");
            printf("Pontuação: +10\n");
        }
    }
    else if (dt_pedro < dt_arthur && dt_pedro < dt_tulio &&  dt_pedro < dt_will)
    {
        pp += bonus(passada, p, pp);
        if (passada == 'p')
        {
            printf("Pedro venceu outra vez!\n");
            printf("Pontuação: +%.2lf\n", pp - pe);
        }
        else
        {
            printf("Pedro venceu!\n");
            printf("Pontuação: +10\n");
        }
    }
    else if (dt_tulio < dt_arthur && dt_tulio < dt_pedro &&  dt_tulio < dt_will)
    {
        pt += bonus(passada, t, pt);
        if (passada == 't')
        {
            printf("Túlio venceu outra vez!\n");
            printf("Pontuação: +%.2lf\n", pt - tu);
        }
        else
        {
            printf("Túlio venceu!\n");
            printf("Pontuação: +10\n");
        }
    }
    else if (dt_will < dt_arthur && dt_will < dt_pedro && dt_will < dt_tulio)
    {
        pw += bonus(passada, w, pw);
        if (passada == 'w')
        {
            printf("Will venceu outra vez!\n");
            printf("Pontuação: +%.2lf\n", pw - wi);
        }
        else
        {
            printf("Will venceu!\n");
            printf("Pontuação: +10\n");
        }
    }
    else
    {
        printf("Não foi possível determinar um vencedor :/\nPróxima rodada.\n");
        return 0;
    }

    if (regularidade <= 10)
    {
        pa += 10;
        pp += 10;
        pt += 10;
        pw += 10;
    }
    
    if (regularidade <= 10)
    {
        printf("Houve regularidade na rodada!\n");
        printf("Todos ganharam +10 pontos\n");
    }
    
	return 0;
}