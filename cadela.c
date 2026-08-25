#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double racao, sono, largura, altura, impacto_clima, horas;
    double disposicao, area, tempo_de_trabalho, dinheiro;
    char formato, clima;
    const double PI = 3.14;

    scanf("%lf %lf", &racao, &sono);
    scanf("%lf %lf %c", &largura, &altura, &formato);
    scanf(" %c %lf", &clima, &impacto_clima);
    scanf("%lf", &horas);

    disposicao = racao * (sono / 60.0);

    if (horas > 6)
    {
        disposicao *= 0.8;
    }

    if (formato == 't')
    {
        area = (largura * altura) / 2;
    }
    else if (formato == 'r')
    {
        area = largura * altura;
    }
    else
    {
        area = PI * largura * largura;
    }

    if (area > 500)
    {
        disposicao *= 0.85;
    }

    if (clima == 'c')
    {
        disposicao = disposicao * (1 - (0.3 * impacto_clima / 100.0));
    }
    else if (clima == 's')
    {
        disposicao = disposicao * (1 + (0.47 * impacto_clima / 100.0));
    }
    else
    {
        disposicao = disposicao * (1 - (0.67 * impacto_clima / 100.0));
    }

    tempo_de_trabalho = disposicao / area;

    if (tempo_de_trabalho < 1)
    {
        tempo_de_trabalho = 1;
    }

    dinheiro = tempo_de_trabalho * 70;

    printf("Aim trabalhou %.2lf horas e recebeu: %.2lf Reais\n", tempo_de_trabalho + 1e-9, dinheiro);

	return 0;
}