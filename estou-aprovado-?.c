#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int idade;
    double nota1, nota2, nota_repo, media;

    scanf("%d%lf%lf%lf", &idade, &nota1, &nota2, &nota_repo);

    if (idade >= 18)
    {
        media = ((nota1 + nota2) * 6 + nota_repo * 3) / 15;
    }
    else
    {
        if (nota1 < 7 && nota_repo > nota1)
        {
            media = (nota2 + nota_repo) / 2;
        }
        else if (nota2 < 7 && nota_repo > nota2)
        {
            media = (nota1 + nota_repo) / 2;
        }
        else
        {
            media = (nota1 + nota2) / 2;
        }
    }

    if (media >= 5.5 && nota1 >= 4 && nota2 >= 4 && nota_repo >= 4)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Reprovado\n");
    }

	return 0;
}