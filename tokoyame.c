#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int qp, qm, qg;
    char tipo;
    int num, total;
    double porcentagem;

    scanf("%d%d%d", &qp, &qm, &qg);
    scanf(" %c", &tipo);
    scanf("%d", &num);

    total = (qp * 200) + (qm * 500) + (qg * 775);

    if (tipo == 'P')
    {
        porcentagem = 100 * ((200 * num) / (double) total);
    }
    else if (tipo == 'M')
    {
        porcentagem = 100 * ((500 * num) / (double) total);
    }
    else
    {
        porcentagem = 100 * ((775 * num) / (double) total);
    }

    if (porcentagem >= 0 && porcentagem <= 10)
    {
        printf("%.2lf%%\n", porcentagem);
        printf("Não prejudicou muito!\n");
    }
    else if (porcentagem <= 25)
    {
        printf("%.2lf%%\n", porcentagem);
        printf("Vai ter que pegar dobrado essa semana!\n");
    }
    else if (porcentagem <= 50)
    {
        printf("%.2lf%%\n", porcentagem);
        printf("A reserva de emergência cobre isso.\n");
    }
    else
    {
        printf("%.2lf%%\n", porcentagem);
        printf("Decretou falência.\n");
    }

	return 0;
}