#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int livros, alunos;
    scanf("%i %i", &livros, &alunos);

    if (alunos / livros <= 8)
    {
        printf("A\n");
    }
    else if (alunos / livros > 8 && alunos / livros <= 12)
    {
        printf("B\n");
    }
    else if (alunos / livros > 12 && alunos / livros <= 18)
    {
        printf("C\n");
    }
    else
    {
        printf("D\n");
    }
	return 0;
}