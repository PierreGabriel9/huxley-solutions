#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int sexo, idade;
    scanf("%i%i", &sexo, &idade);

    if (sexo == 0 && idade == 1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
	return 0;
}