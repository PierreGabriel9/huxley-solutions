#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b, c;
    double media;
    scanf("%i %i %i", &a, &b, &c);

    media = (a + b + c)/3.0;

    if (media >= 70 && media <= 100)
    {
        printf("A media do aluno foi %.2lf e ele foi APROVADO\n", media);
    }
    else if (media >= 0 && media <= 40)
    {
        printf("A media do aluno foi %.2lf e ele foi REPROVADO\n", media);
    }
    else if (media > 40 && media < 70)
    {
        printf("A media do aluno foi %.2lf e ele foi FINAL\n", media);
    }
    else
    {
        printf("Media invalida\n");
    }
	return 0;
}